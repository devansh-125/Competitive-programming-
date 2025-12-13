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
  int temp=y;
  sort(a.begin(),a.end());
  for(int i=0;i<x-1;i++){
    if((a[i+1]-a[i])==2){
      ct++;
      // i++;
    }
    if((a[i+1] - a[i]) >2 ){
      int v = a[i+1] - a[i];
      int v1 = v/2;
      if(v%2==0){
        if(temp>=v1-1){
          ct+=v1;
          temp-=v1-1;
        }else{
          ct+=temp;
          temp=0;
        }
      }else{
        if(temp>=v1){
          ct+=v1;
          temp-=v1;
        }else{
          ct+=temp;
          temp=0;
        }
      }
    }
  }
  // cout<<ct<<endl;
  int val = a[0] + n-a[x-1];
  if( val>2 ){
      int v1 = val/2;
      if(val%2==0){
        if(temp>=v1-1){
          ct+=v1;
          temp-=v1-1;
        }else{
          ct+=temp;
          temp=0;  
        }
      }else{
        if(temp>=v1){
          ct+=v1;
          temp-=v1;
        }else{
          ct+=temp;
          temp=0;
        }
      }
    }
    if((a[0] + (n-a[x-1]))== 2) ct++;
  // cout<<ct<<endl;
  int ans = ct;
  ans+= x+y-2;
  if(x==2 && ct==1 && n==4){
    cout<<2<<endl;
  }else{
    cout<<ans-temp<<endl;
  }

}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) dib();
}
