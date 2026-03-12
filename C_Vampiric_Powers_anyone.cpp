//Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

void dib(){
   int n;
   cin>>n;
   vector<int> a(n);
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   int ans = 0;
   int mx = 1<<8;
   int curr = 0;
   vector<bool> pre(mx , false);
   pre[0] = true;
   for( int i=0;i<n;i++){
    curr ^=a[i];
    for(int j=0;j<mx;j++){
      if( pre[j]){
        ans = max( ans , j^curr);
      }
    }
    pre[curr] = true;
   }
   cout<<ans<<endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) dib();
}