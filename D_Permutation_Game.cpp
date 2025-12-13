// Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

int getScore(int start, int k, vector<int> &p, vector<int> &a) {
    int n = p.size() - 1;     
    vector<int> vis(n + 1, 0);

    int cur = 0;          
    int best = 0;           
    int u = start;

    while (!vis[u] && k > 0) {
        vis[u] = 1;
        best = max(best, cur + k * a[u]);

        cur += a[u];
        k--;
        u = p[u];            
    }

    return best;
}

void dib() {
    int n, k, b, s;
    cin >> n >> k >> b >> s;

    vector<int> p(n + 1), a(n + 1);

    for (int i = 1; i <= n; i++) cin >> p[i];
    for (int i = 1; i <= n; i++) cin >> a[i];

    int A = getScore(b, k, p, a);
    int B = getScore(s, k, p, a);

    if (A > B) cout << "Bodya" << endl;
    else if (A < B) cout << "Sasha" << endl;
    else cout << "Draw" << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) dib();
}
