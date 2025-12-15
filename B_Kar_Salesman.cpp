// Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

void dib(){
   int n,x;
   cin>>n>>x;
   int sum=0;
   int mx = 0;
   for(int i=0;i<n;i++){
    int y;
    cin>>y;
    sum+=y;
    mx = max(mx , y);
   }
   int val = (sum + x -1) /x;
   cout<<max(val , mx)<<endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) dib();
}
