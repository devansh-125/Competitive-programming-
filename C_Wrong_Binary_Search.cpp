#include<bits/stdc++.h>
using namespace std;
#define int long long 

void solve(){
 int n;
 cin>>n;
 string s;
 cin>>s;
 vector<int> ans(n+1);
 for(int i=1;i<=n;i++){
  if(s[i-1]=='1'){
    ans[i]=i;
  }else{
    int ct=0;
    int temp = i;
    while( temp<=n & s[temp-1]=='0' ){
      ct++;
      temp++;
    }
    if(ct==1) {
      cout<<"NO"<<endl;
      return;
    }
    // cout<<ct<<endl;
    for(int j = 1;j<=ct;j++){
      ans[i+j-1] = i+ct -j ; 
    }
    i+=ct-1; 
  }
 }
 cout<<"YES"<<endl;
 for(int i=1;i<=n;i++){
  cout<<ans[i]<<" ";
 }
 cout<<endl;
    
}

int32_t main() {
  int t;
  cin>>t;
  while(t--){
    solve();
  }
}
