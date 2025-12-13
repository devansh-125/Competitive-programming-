// Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

void dib(){
  int n;
  cin>>n;
  map<int,int> m;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    m[x]++;
  }
  int ans = 0;
  int a = 0;
  int ct=0;
  for(auto &it: m){
    int x = it.first;
    int y = it.second;
    if(x!=ans || (ct==1 && y==1 && x!=0)) break;
    if(y==1) ct++;
    ans++;
  }
  cout<<ans<<endl;
    
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) dib();
}
