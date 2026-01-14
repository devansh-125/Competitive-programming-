
// // Radhe Radhe
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// void dib(){
//   int n;
//   cin>>n;
//   vector<pair<int,int>> a(n);
//   for(int i=0;i<n;i++){
//     cin>>a[i].first;
//     cin>>a[i].second;
//   }
//   // vector<pair<int,int>> b
//   vector<pair<int,int>> c;
//   for(int i=0;i<n;i++){
//     if(a[i].first > a[i].second){
//       c.push_back(a[i]);
//     }else{
//       b.push_back(a[i]);
//     }
//   }
//   sort(b.begin() ,b.end());
//   sort(c.begin() , c.end());
//   int val = b.back().first;
//   int ct=0;
//   vector<pair<int,int>> ans;
//   for(int i=0;i<c.size();i++){
//     if(c[i].first< val ){
//       ans.push_back( c[i]);
//       ct++;
//     }else{
//       break;
//     }
//   }
//   for(int i=0;i<b.size();i++) ans.push_back(b[i]);
//   for(int i = ct;i<c.size();i++) ans.push_back(c[i]);

//   for(int i=0;i<n;i++){
//     cout<<ans[i].first<<" "<<ans[i].second<<" ";
//   }
//   cout<<endl;
// }

// int32_t main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while(t--) dib();
// }


// Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

void dib(){
  int n;
  cin >> n;

  vector<pair<int,int>> a(n);
  for(int i = 0; i < n; i++){
    cin >> a[i].first >> a[i].second;
  }

  sort(a.begin(),a.end() ,
  [](const pair<int,int> a, const pair<int,int> b){
    int x = max(a.first,a.second);
    int y = max(b.first , b.second);
    if(x==y){
      return min(a.first, a.second) < min(b.first , b.second);
    }else{
      return max(a.first , a.second) < max(b.first , b.second);
    }
  }
  );
  for(int i=0;i<n;i++){
    cout<<a[i].first<<" "<<a[i].second<<" ";
  }
  cout<<endl;
}

int32_t main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while(t--) dib();
}
