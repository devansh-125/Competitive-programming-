
// Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void dib(){
  int n;
  cin >> n;
  vector<int>a(n+1);
  for(int i=1;i<=n;i++) cin>>a[i];
  int q;
  cin>>q;
  vector<pair<int,int>> qur(q);
  for(int i=0;i<q;i++){
    cin>>qur[i].first;
    cin>>qur[i].second;
  }
  map<int,int> m;
  m[1] = 2;
  m[n] = n-1;
  for(int i=2;i<=n-1;i++){
    int x = a[i] - a[i-1];
    int y = a[i+1] - a[i];
    if(x>y){
      m[i] = i+1;
    }else{
      m[i] = i-1;
    }
  }
  vector<int> f(n+1);
  vector<int> b(n+1);
  f[1] = 0;
  b[n] = 0;
  int ans=0;
  for(int i=2;i<=n;i++){
    if(m[i-1] == i) f[i] = f[i-1] + 1;
    else f[i] = f[i-1] + a[i]-a[i-1];
  }
  for(int i = n-1; i >= 1; i--){
    if(m[i+1] == i)
        b[i] = b[i+1] + 1;
    else
        b[i] = b[i+1] + a[i+1] - a[i];
  }
  for(int i=0;i<q;i++){
    int x = qur[i].first;
    int y = qur[i].second;
    if(x>y){
      cout<<b[y]- b[x]<<endl;
    }else{
      cout<<f[y] - f[x]<<endl;
    }
  }
}

int32_t main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while(t--) dib();
}
