//Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

void dib(){
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    vector<int> b(n);
    b[n-1] = a[n-1];
    for(int i = n-2; i >= 0; i--) b[i] = max(b[i+1], a[i]);

    int mn = a[0];
    bool ok = true;

    for(int i = 0; i + 1 < n; i++){
        mn = min(mn, a[i]);
        if(mn > b[i+1]){
            ok = false;
            break;
        }
    }

    if(ok) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        dib();
    }
}