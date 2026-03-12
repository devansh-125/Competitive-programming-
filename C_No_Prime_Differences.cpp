//Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

void dib(){
   int n,m;
   cin>>n>>m;
   for(int i=0;i<n;i++){
    for( int j=0;j<m;j++){
      if( i%2 == 0) cout<< (n/2 + i/2)*m + j + 1 <<" ";
      else cout<<( i/2)*m + j + 1 <<" ";
    }
    cout<<endl;
   }
   cout<<endl;
   }

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--) dib();
}