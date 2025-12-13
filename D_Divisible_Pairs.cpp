

// Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

void Devansh() {
    int n, x, y;
    cin >> n >> x >> y;

    vector<int> a(n);
    for (int &i : a) cin >> i;

    map<pair<int,int>, int> cnt;
    int ans = 0;

    for (int e : a) {
        int xx = e % x;
        int yy = e % y;          

        int nx = (x - xx) % x;
        int ny = yy;

        ans += cnt[{nx, ny}];

        cnt[{xx, yy}]++;
    }

    cout << ans << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) Devansh();
}
