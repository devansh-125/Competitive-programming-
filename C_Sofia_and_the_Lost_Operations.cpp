
// Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

void dib(){
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    map<int,int> m1;
    map<int,int> m2;
    map<int,int> m3;
    for(int i=0;i<n;i++){
      int x;
      cin>>x;
      b[i] = x;
      m1[x]++;
      if(x != a[i] ) m3[x]++;
    }
    int d;
    cin>>d;
    vector<int> ds(d);
    
    for(int i=0;i<d;i++){
      int x;
      cin>>x;
      ds[i] =x;
      m2[x]++;
    }
    bool flag = true;
    for(auto it: m3){
      if(m2[it.first] <  it.second){
        flag = false;
        break;
      }
    }
  //   for(int i=0;i<n;i++){
  //   if(a[i]!=b[i]){
  //     int val = b[i];
  //     if( m2[val] < m1[val]){
  //       flag = false;
  //       break;
  //     }
  //   }
  //  }
   if( !m1[ds[d-1]]) flag = false;
  
    if(flag) {
      cout<<"YES"<<endl;
    }else{
      cout<<"NO"<<endl;
    }
    }


int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) dib();
}
