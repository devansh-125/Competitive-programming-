// // Radhe Radhe

// #include<bits/stdc++.h>
// using namespace std;
// #define int long long 

// void solve(){
//  int n;
//  cin>>n;
//  string s;
//  cin>>s;
//  vector<int> a(n);
//  for(int i=0; i<n; i++){
//     if(i == 0){
//         a[i] = (s[i] == 'a' ? 1 : -1);
//     } else {
//         if(s[i] == 'a') a[i] = a[i-1] + 1;
//         else a[i] = a[i-1] - 1;
//     }
// }

//  int val = a[n-1];
//  int ans = 1e9;
//  if(val == 0){
//   cout<<0<<endl;
//   return;
//  }
//  if(val>0){
//   int diff=0;
//   int ct=0;
//   int temp = val-1;
//   for(int i=0;i<n;i++){
//     if(a[i]){
//       int j=i;
//       diff = 1;
//       ct=1;
//       while( j<n-1 && a[j] < a[j+1]){
//         if(diff == temp){
//           ans = min(ans , ct);
//           break;
//         }
//         diff++;
//         ct++;
//       }
//       i = j-1;
//       diff = 0;
//       ct = 0;
//     }
//   }
//  }else{

//  }
//  if(ans == 1e9){
//   cout<<-1<<endl;
//  }else{
//   cout<<ans<<endl;
//  }
 
// }

// int32_t main() {
//   int t;
//   cin>>t;
//   while(t--){
//     solve();
//   }
// }



// Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int val = count(s.begin() , s.end(),'a') - count(s.begin() ,s.end() , 'b');
    int x=0;
    int ans = n;
    map<int,int>m;
    m[x] = -1;
    for(int i=0;i<n;i++){
      x += ( s[i] == 'a' ? 1: -1);
      m[x] = i;
      if(m.count(x-val)){
        ans = min(ans , i - m[x-val]);
      }
    }
    if(ans==n){
      cout<<-1<<endl;
    }else{
      cout<<ans<<endl;
    }
  }

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
