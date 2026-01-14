
// Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

void dib(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int l=0;
    int r =0;
    int mx = 0;
    for(int i=0;i<n-1;i++){
      int ct1 = 0;
      int ct2 =0;
      for(int j=i+1;j<n;j++){
        if(a[j] < a[i]) ct1++;
        if(a[j] > a[i]) ct2++;
        int x = max(mx ,ct1 - ct2);
        if(x > mx){
          l = i;
          r = j;
          mx = x;
        }  
      }
      // cout<<ct1<<" "<<ct2<<endl;
    }

    cout<<l+1<<" "<<r+1<< endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) dib();
}
