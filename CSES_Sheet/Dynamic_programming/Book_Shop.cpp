// Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

const int mod = 1e9 + 7;

void dib(){
   int n,x;
   cin>>n>>x;
   vector<int> price(n);
   vector<int> pages(n);
   for( int i=0;i<n;i++) cin>>price[i];
   for( int i=0;i<n;i++) cin>>pages[i];
   vector<int> dp( x+1 , 0);
   for( int i=0;i<n;i++){
    for( int w = x; w>=0;w--){
      if( w >= price[i]) dp[w] = max( dp[w] , pages[i] + dp[w - price[i]]);
    }
   }
   cout<<dp[x]<<endl;   
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    while(t--){
        dib();
    }
}