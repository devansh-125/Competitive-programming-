// Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

const int mod = 1e9 + 7;

void dib(){
   int n, m;
   cin>>n>>m;
   vector<int> a(n);
   for( int i=0;i<n;i++) cin>>a[i];
   vector<vector<int>> dp( n , vector<int>( m+2 , 0));
   if( a[0] == 0){
    for( int i=1;i<=m;i++) dp[0][i] = 1;
   }else{
    dp[0][a[0]] = 1; 
   }
   for( int i=1;i<n;i++){
    for(int j = 1;j<=m;j++){
      if( a[i] != 0 && a[i] != j) continue;
      dp[i][j] = ( dp[i-1][j-1] + dp[i-1][j] + dp[i-1][j+1]) %mod;
    }
   }
   int ans = 0;
   for( int i=1;i<=m;i++){
    ans = ( ans + dp[n-1][i])%mod;
   }
   
   cout<<ans<<endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    while(t--){
        dib();
    }
}