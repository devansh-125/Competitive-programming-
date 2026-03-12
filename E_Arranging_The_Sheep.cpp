// // Radhe Radhe
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long


// void solve() {
//  int n ;
//  cin>>n;
//  string s;
//  cin>>s;
//  int  l =0;
//  int lct = 0;
//  int r = n-1;
//  int rct = 0;
//  int ans = 0;
//  while( l<=r){
//   while( s[l] == '*' || lct == 0){
//     if( s[l] == '*') lct++;
//     l++;
//   }
//   while( s[r] == '*' || rct ==0){
//     if( s[r]=='*' || rct == 0){
//       if(s[r] == '*') rct++;
//       r--;
//     }
//   }
//   cout<<l<<" "<<r<<endl;
//   if( s[l] == '.' && s[r] == '.'){
//     if( lct < rct){
//     ans+= lct;
//     l++;
//   }else{
//     ans += rct;
//     r--;
//   }

//   }
  
//  }
//  cout<<ans<<endl;

// }

// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin>>t;
//     while(t--) solve();
// }



// Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int l = 0;
    int lct = 0;
    int r = n - 1;
    int rct = 0;
    int ans = 0;

    while (l <= r) {
        while (l <= r && (s[l] == '*' || lct == 0)) {
            if (s[l] == '*') lct++;
            l++;
        }

        while (l <= r && (s[r] == '*' || rct == 0)) {
            if (s[r] == '*') rct++;
            r--;
        }

        if (l > r) break;

        if (s[l] == '.' && s[r] == '.') {
            if (lct < rct) {
                ans += lct;
                l++;
            } else {
                ans += rct;
                r--;
            }
        } else {
            if (s[l] != '.') l++;
            if (s[r] != '.') r--;
        }
    }
    cout << ans<< endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
