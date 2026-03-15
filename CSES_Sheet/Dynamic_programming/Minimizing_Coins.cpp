// // Radhe Radhe
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// int solve(int x , vector<int> &a , vector<int> &dp){
//     if(x == 0) return 0;
//     if(x < 0) return -1;

//     if(dp[x] != -1) return dp[x];

//     int ans = 1e9;

//     for(int i = 0; i < a.size(); i++){
//         int y = solve(x - a[i] , a , dp);
//         if(y != -1){
//             ans = min(ans , y + 1);
//         }
//     }

//     if(ans == 1e9) return dp[x] = -1;
//     return dp[x] = ans;
// }

// void dib(){
//     int n , x;
//     cin >> n >> x;

//     vector<int> a(n);
//     for(int i = 0; i < n; i++) cin >> a[i];

//     vector<int> dp(x + 1 , -1);

//     cout << solve(x , a , dp) << endl;
// }

// int32_t main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t = 1;
//     while(t--){
//         dib();
//     }
// }

//above code give tle 

// Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

void dib(){
    int n , x;
    cin >> n >> x;

    vector<int> a(n);
    vector<int> dp(x + 1 , 1e9);

    dp[0] = 0;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    for(int i = 1; i <= x; i++){
        for(int j = 0; j < n; j++){
            if(i - a[j] >= 0 && dp[i - a[j]] != 1e9){
                dp[i] = min(dp[i], dp[i - a[j]] + 1);
            }
        }
    }

    if(dp[x] == 1e9) cout << -1 << endl;
    else cout << dp[x] << endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    while(t--){
        dib();
    }
}