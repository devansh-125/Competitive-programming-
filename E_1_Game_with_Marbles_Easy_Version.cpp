//Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

void dib(){
   int n;
   cin>>n;
   vector<int> a(n);
   vector<int> b(n);
   for(int i=0;i<n;i++) cin>>a[i];
   for(int i=0;i<n;i++) cin>>b[i];
   vector<pair<int,int>> used;
   for(int i=0;i<n;i++){
    used.push_back({a[i]+b[i] , i});
   }
   sort(used.begin(),used.end());
   int flag = 1;
   int suma = 0;
   int sumb = 0;
   for(int i=n-1;i>=0;i--){
     int idx = used[i].second;
    if(flag == 1){
      // a[idx]-=1;
      // b[idx] = 0;
      flag = 2;
      suma+=a[idx]-1;
    }else{
      // b[idx]-=1;
      // a[idx]=0;
      flag =1;
      sumb+=b[idx]-1;
    }
   }
   cout<<suma-sumb<<endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) dib();
    return 0;
}