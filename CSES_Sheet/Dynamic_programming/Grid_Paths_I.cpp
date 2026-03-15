
// Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> dp(1000001 , -1);

int solve(int x){
    if(x < 0) return 1e18;
    if(x == 0) return 0;
    if(dp[x] != -1) return dp[x];

    vector<int> a;
    int temp = x;

    while(temp > 0){
        int d = temp % 10;
        if(d) a.push_back(d);
        temp /= 10;
    }

    int ans = 1e18;

    for(int i = 0 ; i < a.size() ; i++){
        ans = min(ans , 1 + solve(x - a[i]));
    }
    return dp[x] = ans;
}

void dib(){
    int n;
    cin >> n;

    cout << solve(n) << endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    while(t--){
        dib();
    }
}