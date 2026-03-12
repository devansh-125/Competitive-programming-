//Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

void dib(){
   int n,k;
   cin>>n>>k;
   vector<int> a(n);
   k = min(n , k);
   for(int i=0;i<n;i++) cin>>a[i];
   int x = n-1;
   for(int i=0;i<k;i++){
     if( a[x] > n ){
      cout<<"No"<<endl;
      return;
     }
     x = (x + n - a[x])%n;
   }
   cout<<"Yes"<<endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) dib();
    return 0;
}