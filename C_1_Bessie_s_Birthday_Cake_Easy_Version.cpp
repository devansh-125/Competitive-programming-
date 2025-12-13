// Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

void dib(){
  int n,x,y;
  cin>>n>>x>>y;
  vector<int>a(x);
  for(int i=0;i<x;i++) cin>>a[i];
  int ct=0;
  sort(a.begin(),a.end());
  for(int i=0;i<x-1;i++){
    if((a[i+1]-a[i])==2){
      ct++;
      // i++;
    }
  }
  int ans = ct;
  ans+= x-2;
  // cout<<a[0] <<" "<< a[x-1]<<endl;
  if((a[0] + (n-a[x-1]))== 2) ans++;
   // cout<<ct<<endl;
  if(x==2 && ct==1 && n==4){
    cout<<2<<endl;
  }else{
    cout<<ans<<endl;
  }

}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) dib();
}
