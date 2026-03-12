

#include <bits/stdc++.h>
using namespace std;

const int N = 1000005;
int mp[N];

void build() {
    for (int i = 2; i < N; i++) {
        if (mp[i] == 0) {
            for (int j = i; j < N; j += i) {
                if (mp[j] == 0) mp[j] = i;
            }
        }
    }
}

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    bool sorted = true;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (i > 0 && v[i] < v[i - 1]) sorted = false;
    }

    if (sorted) {
        cout << "Bob" << endl;
        return;
    }

    bool ok = true;
    int last = 1;

    for (int i = 0; i < n; i++) {
        int x = v[i];

        if (x == 1) {
            if (1 < last) {
                ok = false;
                break;
            }
            last = 1;
        } 
        else {
            int p = mp[x];
            int y = x;

            while (y % p == 0) y /= p;

            if (y > 1) {
                ok = false;
                break;
            }

            if (p < last) {
                ok = false;
                break;
            }

            last = p;
        }
    }

    if (ok) cout << "Bob" << endl;
    else cout << "Alice" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    build();

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}