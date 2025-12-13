// Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

void dib(){
  int n,m;
  cin>>n>>m;
  vector<int> a(n);
  vector<int> b(n);
  for(int i=0;i<n;i++) cin>>a[i];
  for(int i=0;i<n;i++) cin>>b[i];
  vector<int> c(n);
  for(int i=0;i<n;i++){
    if(a[i]>b[i]) c[i]=0;
    else c[i]=1;
  }
  int prev =0;
  int ans=0;
  int x=n;
  for(int i=n-1;i>=m-1;i--){
    if(c[i]==1){
      // cout<<i<<" "<<prev<<" "<<ans<<endl;
      ans+=prev;
      ans+=a[i];
      x=i;
      prev=0; 
    }else{
      prev += b[i];

    }
    
  }
  // cout<<ans<<endl;
  if(x==m-1){
    cout<<ans<<endl;
  }else{
    int val=0;
    prev = 0;
    
    for(int i=x-1;i>=0;i--){
      // cout<<i<<" "<<m<<endl;
      if(i==m-1){
        // cout<<i<<endl;
        val = a[i]+prev;
      }
      val = min(val , a[i]+prev);
      prev+=b[i];
    }
    cout<<ans+val<<endl;
  }
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) dib();
}
