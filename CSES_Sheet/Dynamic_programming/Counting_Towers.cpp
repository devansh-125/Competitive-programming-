// // Radhe Radhe
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// const int mod = 1e9 + 7;


// void dib(){
//     int n;
//     cin >> n;
//     vector<vector<int>> dp(n+2, vector<int>(2,0));

//     dp[n][0] = 1;
//     dp[n][1] = 1;

//     for(int i = n-1; i >= 1; i--){
//         dp[i][0] = (2*dp[i+1][0] % mod + dp[i+1][1]) % mod;
//         dp[i][1] = (dp[i+1][0] + 4*dp[i+1][1] % mod) % mod;
//     }

//     cout << (dp[1][0] + dp[1][1]) % mod << endl;
// }

// int32_t main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while(t--){
//         dib();
//     }
// }

// because we need to precompute this code to avoid the tle 

// Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

const int mod = 1e9 + 7;
const int N = 1000000 + 5;

int dp[N][2];

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    dp[1][0] = 1;
    dp[1][1] = 1;

    for(int i = 2; i < N; i++){
        dp[i][0] = (4*dp[i-1][0] % mod + dp[i-1][1]) % mod;
        dp[i][1] = (dp[i-1][0] + 2*dp[i-1][1] % mod) % mod;
    }

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        cout << (dp[n][0] + dp[n][1]) % mod << endl;
    }
}