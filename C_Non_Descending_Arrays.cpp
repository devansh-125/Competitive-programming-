//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define int long long 
int MOD = 998244353;

void solve(){
 int n;
 cin>>n;
 vector<int> a(n);
 vector<int> b(n);
 for(int i=0;i<n;i++) cin>>a[i];
 for(int i=0;i<n;i++) cin>>b[i];
 int dp[n][2];
 dp[n-1][0]=1;
 dp[n-1][1]=1;
 for(int i=n-2;i>=0;i--){

  int v1=0; 
  if(a[i] <= a[i+1] && b[i] <= b[i+1])  v1+=dp[i+1][0];
  if(a[i] <= b[i+1] && b[i] <= a[i+1])  v1 += dp[i+1][1];
  dp[i][0] = v1%MOD;

  int v2=0;
  if(b[i] <= a[i+1] && a[i] <= b[i+1]) v2+=dp[i+1][0];
  if(b[i] <= b[i+1] && a[i] <= a[i+1]) v2+=dp[i+1][1];
  dp[i][1] = v2%MOD;

 }
 cout<<(dp[0][0] + dp[0][1])%MOD<<endl;
   
}

int32_t main() {
  int t;
  cin>>t;
  while(t--){
    solve();
  }
}
