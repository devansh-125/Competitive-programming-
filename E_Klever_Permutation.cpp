// Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

void dib(){
  int n,k;
  cin>>n>>k;
  vector<int> ans(n);
  int mn = 1;
  int mx = n;
  for(int i=0;i<k;i++){
    for(int j=i;j<n;j+=k){
      if( i%2 ==0){
         ans[j] = mn;
         mn++;
      }else{
        ans[j] = mx;
        mx--;
      }
    }
  }
  for(int i=0;i<n;i++){
    cout<<ans[i]<<" ";
  }
  cout<<endl;

}

int32_t main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        dib();
    }
}