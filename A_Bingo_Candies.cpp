#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> freq(n * n + 1, 0);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int x;
                cin >> x;
                freq[x]++;
            }
        }

        int mx = 0;
        for (int v : freq) {
            mx = max(mx, v);
        }

        if (mx > n * (n - 1)) cout << "NO" << endl;
        else cout << "YES" << endl;
    }

    return 0;
}