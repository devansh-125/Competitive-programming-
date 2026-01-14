// Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

int  check(int  l , int r , vector<vector<int>> &fre){
  int num = 0;
  for(int i=0;i<=30;i++){
    if((fre[r][i] - fre[l-1][i]) >= (r -l +1) ){
      num += 1<<i;
    }
  }
  return  num;

}

void solve() {
  int n;
  cin>>n;
  vector<int> a(n+1);
  vector<vector<int>> fre(n+1 , vector<int>(31 , 0));
  for(int i=1;i<=n;i++){
    cin>>a[i];
    
    if( i !=0) fre[i] = fre[i-1];
    for(int j = 0; j <= 30; j++){
       if(a[i] & (1LL << j)){
        fre[i][j]++;
    }
}

  }
  int q;
  cin>>q;
  vector<int> ans;
  for(int i=0;i<q;i++){
    int x , y;
    cin>>x>>y;
    if( y > a[x] ){
      ans.push_back(-1);
      continue;
    }
    int l = x, r = n, res = -1;
    while(l <= r){
      int mid = (l + r) / 2;
      int num = check(x, mid, fre);
      if(num >= y){
         res = mid;
         l = mid + 1;
      } else {
          r = mid - 1;
      }
    }
    ans.push_back(res);
  }
  for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
  }
  cout<<endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    cin >> t;
    while (t--) solve();
}



// // Radhe Radhe
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// int check(int l, int r, vector<vector<int>> &fre){
//     int num = 0;
//     for(int i = 0; i <= 30; i++){
//         if(fre[r][i] - fre[l-1][i] == (r - l + 1)){
//             num |= (1LL << i);
//         }
//     }
//     return num;
// }

// void solve(){
//     int n;
//     cin >> n;

//     vector<int> a(n+1);
//     vector<vector<int>> fre(n+1, vector<int>(31, 0));

//     for(int i = 1; i <= n; i++){
//         cin >> a[i];
//         fre[i] = fre[i-1];
//         for(int j = 0; j <= 30; j++){
//             if(a[i] & (1LL << j)){
//                 fre[i][j]++;
//             }
//         }
//     }

//     int q;
//     cin >> q;
//     while(q--){
//         int l, k;
//         cin >> l >> k;

//         int low = l, high = n, res = -1;
//         while(low <= high){
//             int mid = (low + high) / 2;
//             if(check(l, mid, fre) >= k){
//                 res = mid;
//                 low = mid + 1;
//             } else {
//                 high = mid - 1;
//             }
//         }
//         cout << res << " ";
//     }
//     cout << endl;
// }

// int32_t main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while(t--) solve();
// }
