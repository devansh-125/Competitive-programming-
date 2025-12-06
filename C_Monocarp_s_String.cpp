#include<bits/stdc++.h>
using namespace std;
#define int long long 

void solve(){
 int n;
 cin>>n;
 string s;
 cin>>s;
 vector<int> a(n);
 for(int i=0; i<n; i++){
    if(i == 0){
        a[i] = (s[i] == 'a' ? 1 : -1);
    } else {
        if(s[i] == 'a') a[i] = a[i-1] + 1;
        else a[i] = a[i-1] - 1;
    }
}

 int val = abs(a[n-1]);
  int ans=1e9;
  // cout<<val<<endl;
  int x=0;
  for(int i=0;i<n-1;i++){
    if(a[i]==0) x=i;
    if(abs(a[i])==val){
      int v = (x>0 ? x+1 : x);
      ans = min(ans, i-v);
    } 
  }
  if(val==0){
    cout<<0<<endl;
  }else if(ans==1e9){
    cout<<-1<<endl;
  }else{
      cout<<ans+1<<endl;
  }
  
}

int32_t main() {
  int t;
  cin>>t;
  while(t--){
    solve();
  }
}
