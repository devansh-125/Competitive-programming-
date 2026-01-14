// Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

void dib(){
  int n;
  cin>>n;
  vector<int> a(n);
  int x =0;
  int y =0;
  vector<int>pos(n, 0);
  vector<int>neg(n,0);
  for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]>=0) x+=a[i];
    pos[i] = x;
  }
  for(int i=n-1;i>=0;i--){
    if(a[i]<0){
      y+=abs(a[i]);
    }
    neg[i] = y;
  }
  int ans=0;
  for(int i=0;i<n;i++){
    ans = max(ans , pos[i] + neg[i]);
  }
  cout<<ans<<endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        dib();
    }
}
