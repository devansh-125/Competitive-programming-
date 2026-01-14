// Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

int  check(int  m, vector<int> &ct ,int x){
  int n = 0;
  int h = 0;
  for(int i=1;i<=x;i++){
    if( ct[i] > m){
      n += ct[i] - m;
    }else{
      h += (m - ct[i])/2;
    }
  }
  return h>=n;

}

void solve() {
  int n,m;
  cin>>n>>m;
  vector<int> ct( n+1 , 0);
  for(int i=0;i<m;i++){
    int x;
    cin>>x;
    ct[x]++;
  }
  int l = 1;
  int r = m;
  int ans = m;
  while(l<=r){
    int mid = (l+r)/2;
    if( check(mid , ct, n)){
      ans = mid;
      r = mid-1;
    }else{
      l = mid+1;
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



