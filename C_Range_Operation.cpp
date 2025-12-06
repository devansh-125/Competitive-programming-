#include<bits/stdc++.h>
using namespace std;
#define int long long 

void solve(){
  int n;
  cin>>n;
  int sum =0;
  vector<int>pre(n+1,0);
  for(int i=1;i<=n;i++){
    int x;
    cin>>x;
    sum+=x;
    pre[i] = sum;
  }
  int mx = 0;
  int ans=0;
  for(int i=1;i<=n;i++){
    mx = max(mx , pre[i-1] + i - i*i);
    ans = max(ans , i*i + i - pre[i] + mx);
  }
  cout<<pre[n] + ans<<endl;
    
}

int32_t main() {
  int t;
  cin>>t;
  while(t--){
    solve();
  }
}
