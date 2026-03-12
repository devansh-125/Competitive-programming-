//Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

void dib(){
  int n;
  cin>>n;
  vector<int> a(n);
  for(int i=0;i<n;i++) cin>>a[i];
  sort(a.begin(),a.end());
  auto possible = [&](int x){
    int i = 0, j =0;
    while( j<n && (a[j] - a[i] +1)/2 <= x ) j++;
    i = j;
    while( j<n && (a[j] - a[i] +1)/2 <= x ) j++;
    i = j;
    while( j<n && (a[j] - a[i] +1)/2 <= x ) j++;
    i = j;
    return i == n;
  };
  int ans = 1e9;
  int low = 0;
  int high = 1e9;
  while( low <= high ){
    int mid = ( low  + high)/2;
    if( possible(mid)){
      ans = mid;
      high = mid-1;
    }else{
      low = mid+1;
    }
  }
  cout<<ans<<endl;
  }
  

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--) dib();
}