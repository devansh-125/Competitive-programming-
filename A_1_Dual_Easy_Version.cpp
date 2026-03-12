//Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

void dib(){
   int n;
   cin>>n;
   vector<int>a(n+1);
   int mx = -30;
   for(int i=1;i<=n;i++){
    cin>>a[i];
    mx = max( mx , a[i]);
   }
   vector<pair<int,int>> ans;
   if(mx > 0){
      for( int i=1;i<=n;i++){
        if( a[i] >0){
          while(a[i] < 20){
            a[i] += a[i];
            ans.push_back({i, i });
          }
          while( a[1] < 20){
            a[1] += a[i];
            ans.push_back({1 , i});
          }
          break;
        } 
      }
      for(int i=2;i<=n;i++){
        if( a[i] > 0){
          ans.push_back({i , i-1});
        }else{
          ans.push_back({i , i-1});
          ans.push_back({i , i-1});
        }
      }
   }else{ 
       for( int i=n;i>=1;i--){
        if(a[i] < 0){
          while(a[i] < -20){
            a[i] += a[i];
            ans.push_back({i, i });
          }
          while( a[n] < -20){
            a[n] += a[i];
            ans.push_back({n , i});
          }
          break;
        } 
      }
      for(int i=n-1;i>=1;i--){
        ans.push_back({i , i+1});
      }
   }

   cout<<ans.size()<<endl;
   for(int i=0;i<ans.size();i++){
    cout<<ans[i].first<<" "<<ans[i].second<<endl;
   }
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) dib();
}