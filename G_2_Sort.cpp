// // Radhe Radhe
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// void solve() {
//     int n,k;
//     cin>>n>>k;
//     vector<int> a(n);
//     for(int i=0;i<n;i++) cin>>a[i];
//     vector<int> ans(n+1 , 0);
//     ans[1] = 0;
//     for(int i=2;i<=n;i++){
//       if( a[i-1]*2 > a[i-2]  ){
//         ans[i] = 1;
//       }
//     }
//     int ct = 0;
//     int res = 0 ;
    
//     for(int i=1;i<=n;i++){
//       if( ans[i]==1) ct++;
//       if( i > k+1){
//         if( ans[i-(k+1)]==1) ct--;
//       }
//       if( i>=k+1 && ct == k+1){
//         res++;
//       }
//     }
//     cout<<res<<endl;
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

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    vector<int> ans(n + 1, 0);

    for(int i = 2; i <= n; i++){
        if(a[i-1] * 2 > a[i-2]){
            ans[i] = 1;
        }
    }

    int ct = 0;
    int res = 0;

    for(int i = 2; i <= n; i++){
        if(ans[i] == 1) ct++;

        if(i > k + 1){
            if(ans[i - k] == 1) ct--;
        }

        if(i >= k + 1 && ct == k){
            res++;
        }
    }

    cout << res << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) solve();
}
