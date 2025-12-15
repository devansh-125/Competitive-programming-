// Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

void dib(){
  int n;
  cin>>n;
  vector<int> a(n);
  for(int i=0;i<n;i++) cin>>a[i];
  int l=0;
  set<int> s;
  int sum =0;
  int ans=0;
  while(l<n){
    sum+=a[l];
    if((s.find(sum) != s.end()) ||sum == 0 ){
      ans++;
      sum = 0;
      s.clear();
    }
    s.insert(sum);
    l++;
  }
  cout<<ans<<endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) dib();
}
