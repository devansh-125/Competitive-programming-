// // Radhe Radhe
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// const int mod = 1e9 + 7;

// int solve(int n , vector<int> &dp){
//     if(n == 0) return 1;
//     if(n < 0) return 0;
//     if(dp[n] != -1) return dp[n];

//     int ans = 0;
//     for(int i = 1; i <= 6; i++){
//         ans = (ans + solve(n - i , dp)) % mod;
//     }
//     return dp[n] = ans;
// }

// void dib(){
//     int n;
//     cin >> n;
//     vector<int> dp(n+1 , -1);
//     cout << solve(n , dp) << endl;
// }

// int32_t main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t = 1;
//     while(t--){
//         dib();
//     }
// }

// above is recursion with memeiozation now we have to do it by iteration 

// Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

const int mod = 1e9 + 7;

void dib(){
    int n;
    cin >> n;

    vector<int> dp(n+1 , 0);

    dp[0] = 1;

    for(int i=1;i<=n;i++){
        int x = min(i , 6LL);
        for(int j=1;j<=x;j++){
            dp[i] = (dp[i] + dp[i-j]) % mod;
        }
    }

    cout << dp[n] << endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    while(t--){
        dib();
    }
}