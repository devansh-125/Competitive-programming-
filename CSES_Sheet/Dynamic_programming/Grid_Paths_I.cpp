// Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

const int mod = 1e9 + 7;

void dib(){
    int n;
    cin >> n;

    vector<vector<int>> grid(n , vector<int>(n , 1));

    for(int i = 0 ; i < n ; i++){
        string s;
        cin >> s;
        for(int j = 0 ; j < n ; j++){
            if(s[j] == '*') grid[i][j] = -1;
        }
    }
    vector<vector<int>> dp(n , vector<int>(n , 0));

    if(grid[0][0] == -1){
        cout << 0 << endl;
        return;
    }

    dp[0][0] = 1;

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){

            if(grid[i][j] == -1) continue;

            if(i + 1 < n && grid[i+1][j] != -1){
                dp[i+1][j] = (dp[i+1][j] + dp[i][j]) % mod;
            }
            if(j + 1 < n && grid[i][j+1] != -1){
                dp[i][j+1] = (dp[i][j+1] + dp[i][j]) % mod;
            }
        }
    }

    cout << dp[n-1][n-1] << endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    while(t--){
        dib();
    }
}