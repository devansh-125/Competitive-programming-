// Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

void dib(){
   int n;
   cin>>n;
   vector<int>a(n);
   for(int i=0;i<n;i++) cin>>a[i];
   int ans = 0;
   vector<int> vis(n,0);
   for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(a[i]>a[j] && !vis[j]){
        ans++;
        vis[j] = 1;
      }
    }
   }
   cout<<ans<<endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) dib();
}
