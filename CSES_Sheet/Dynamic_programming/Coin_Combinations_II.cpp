// Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

const int mod = 1e9 + 7;

void dib(){
    int n , x;
    cin >> n >> x;

    vector<int> a(n);
    vector<int> dp(x + 1 , 0);

    dp[0] = 1;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int j = 0; j < n; j++){
        for(int i = a[j]; i <= x; i++){
            dp[i] = (dp[i] + dp[i - a[j]]) % mod;
        }
    }

    cout << dp[x] << endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    while(t--){
        dib();
    }
}