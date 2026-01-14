#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n; 
    cin >> n;
    vector<int> a(n);
    set<int> s;
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
      s.insert(a[i]);
    }

    if (n == 1) {             
        cout << 1 <<endl;
        return;
    }

    sort(a.begin(), a.end());   

   
    int g = 0;
    for (int i = 1; i < n; ++i) {
        g = __gcd(g, a[i] - a[i-1]);
    }
    int mx = a.back();

    long long base = 0;
    for (int i = 0; i < n; ++i) {
        base += (mx - a[i]) / g;
    }
  
    int k1 = 1;
    while (true){
        int val = mx - k1 * g;
        if (s.find(val) == s.end()) break;
        ++k1;
    }
    long long opt1 = base + k1; 
    int k2 = 1;
    while (true) {
        int val = mx + k2 * g;
        if (s.find(val) == s.end()) break;
        ++k2;
    }
    long long opt2 = base + (long long)n * k2; 

    cout << min(opt1, opt2) <<endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    cin >> t;
    while (t--) solve();
}
