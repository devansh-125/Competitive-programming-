// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// bool check(vector<pair<int,int>> &a , int k ){
//   int l = 0;
//   int r = 0;
//   for(int i=0;i<a.size();i++){
//     int x = a[i].first;
//     int y = a[i].second;
//     if(y > r+k ) return false;
//     if(y < l-k) return false;
//     if( l<=x){
//       if((l+k )> y ) l = y;
//       else l = l+k;
//     }else{
//       if((l-k)> x) l = l-k;
//       else l = x;
//     }
//     if( (r+k) < y ) r = r+k;
//     else{
//       r = y;
//     }
//   }
//   return true;
// }

// void solve() {
//   int n;
//   cin>>n;
//   vector<pair<int,int>> a(n);
//   for(int i=0;i<n;i++){
//     cin>>a[i].first>>a[i].second;
//   }
//   int l = 0;
//   int r = 1e9;
//   while(l<=r){
//     int mid = (l + r)/2;
//     if( check(a , mid)){
//       r = mid-1;
//     }else{
//       l = mid+1;
//     }
//   }
//   cout<<l<<endl;
// }

// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t; 
//     cin >> t;
//     while (t--) solve();
// }


// Radhe Radhe
#include <bits/stdc++.h>
using namespace std;

#define int long long

bool check(vector<pair<int,int>> &a, int k) {
    int l = 0, r = 0; 

    for (auto &p : a) {
        int x = p.first;
        int y = p.second;

        l = max(x, l - k);
        r = min(y, r + k);

        if (l > r) return false;
    }
    return true;
}

void solve() {
    int n;
    cin >> n;

    vector<pair<int,int>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }

    int l = 0, r = 1e9;
    int ans = r;

    while (l <= r) {
        int mid = (l + r) / 2;
        if (check(a, mid)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    cout << ans << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}

