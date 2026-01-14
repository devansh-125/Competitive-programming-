#include <bits/stdc++.h>
using namespace std;
#define int long long


void solve() {
  int n;
  cin>>n;
  vector<int> a(n);
  for(int i=0;i<n;i++)  cin>>a[i];
  int x = 1e9;
  int y = 1e9;
  int ans = 0;
  for(int i=0;i<n;i++){
    if(x > y){
      swap(x ,y);
    }
    if( a[i] <= x){
      x = a[i];
    }else if( a[i] <=y){
      y = a[i];
    }else{
      x = a[i];
      ans++;
    }
  }
  cout<<ans<<endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    cin >> t;
    while (t--) solve();
}
