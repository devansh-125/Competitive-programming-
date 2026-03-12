//Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

void dib(){
   int n;
   cin>>n;
   vector<int> a(n);
   for(int i=0;i<n;i++) cin>>a[i];
   int mn = n+1;
   int mx = n+1;
   int ans = 0;
   for( int i=0;i<n;i++){
    int x = a[i];
    if( mn< x && x<mx){
      ans++;
      mx = x;
    }
    mn = min( mn , x);
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