// Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long


void solve() {
 int n,m;
 cin>>n>>m;
 unordered_map<int, vector<pair<int,int>>> mp;
 for(int i=0;i<n;i++){
   for(int j = 0;j<m;j++){
    int x;
    cin>>x;
    mp[x].push_back({ i , j});
  }
 }
 int ans = 0;
 for( auto &it: mp){
   auto &cell = it.second;
   int  k = cell.size();
   vector<int> row  , col;
   for(auto &p: cell){
    row.push_back(p.first);
    col.push_back(p.second);
   }
   sort(row.begin() , row.end());
    sort(col.begin() , col.end());
   int pre = 0;
   for(int i=0;i<k;i++){
    ans += row[i]*i - pre;
    pre += row[i];
   }
   pre =0;
   for(int i=0;i<k;i++){
    ans += col[i]*i - pre;
    pre +=col[i];
   }
 }

 cout<<ans<<endl;

}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}



