// if(k==1){
//     int mx =0;
//     for(int i=0;i<n;i++){
//       mx = max(mx , a[i]);  
//     }
//     int x = 0;
//     for(int i=0;i<n;i++){
//       if(a[i] == mx) x++;
//     }
//     if(a[0] == mx || a[n-1]==mx){
//       if(x>1){
//         cout<< 2*mx<<endl;
//         return;
//       }
//       cout<<a[0] + a[n-1]<<endl;
//     } else{
//       cout<< a[0] + max(a[0] , a[n-1]);
//     }
//    }


// Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

void dib(){
  int n,k;
  cin>>n>>k;
  vector<int> a(n);
  for(int i=0;i<n;i++) cin>>a[i];
  int ans = 0;
  if(k==1){
      int l = *max_element(a.begin(), a.end() - 1);
      int r = *max_element(a.begin() + 1, a.end());
      ans = max(l + a.back(), r + a[0]);
   }else{
    sort(a.begin() , a.end());
    for(int i = n-1;i>=(n-1-k); i--){
    ans+=a[i];
    }
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