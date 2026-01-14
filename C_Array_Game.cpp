// Radhe Radhe
#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n ,k; 
    cin >> n>>k;

    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    if( k >=3){
      cout<<0<<endl;
      return ;
    }
    sort(a.begin() , a.end());
    int d = a[0];
    for(int i=0;i<n-1;i++){
      d = min( d , a[i+1] - a[i]);
    }
    if(k==1){
      cout<<d<<endl;
    }else{
      for(int i=0;i<n;i++){
        for(int j = 0 ;j<i;j++){
          int x = a[i] - a[j];
          int p = lower_bound(a.begin(), a.end() , x) - a.begin();
          if(p<n) d = min(d , a[p] - x );
          if( p>0) d = min( d , x - a[p-1]);
        }
      }
      cout<<d<<endl;
    }
    
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}

