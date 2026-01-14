// // Radhe Radhe
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// void dib(){
//   int n;
//   cin>>n;
//   int m;
//   cin>>m;
//   vector<int>a(n);
//   for(int i=0;i<n;i++) cin>>a[i];
//   vector<int> b(m);
//   for(int i=0;i<m;i++) cin>>b[i];
//   sort(b.begin(),b.end());
//   for(int i = 0; i < n; i++){
//     int val;
//     if(i == 0){
//         val = a[i];
//     }else{
//         val = a[i-1] + a[i];
//     }
//     auto it = lower_bound(b.begin(), b.end(), val);
//     if(it != b.end()){
//         int y = (*it) - a[i];
//         a[i] = min(a[i], y);
//     }else{
//       int y = b[m-1] - a[i];
//       int z = min(a[i] , y);
//       if( i>0 && z < a[i-1]){ 
//         a[i] = a[i];
//       }else {
//         a[i] = z;
//       }
//       }
//     }
//   // for(int i=0;i<n;i++) cout<<a[i]<<" ";
//   bool flag = true;
//   for(int i=1;i<n;i++){
//     if(a[i] < a[i-1]){
//       flag = false;
//       break;
//     }
//   }
//   if(flag) cout<<"YES"<<endl;
//   else cout<<"NO"<<endl;
// }

// int32_t main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while(t--){
//         dib();
//     }
// }


// Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

void dib(){
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];

    sort(b.begin(), b.end());

    int prev = LLONG_MIN;
    for(int i = 0; i < n; i++){
        int best = LLONG_MAX;

        if(a[i] >= prev){
            best = a[i];
        }
        auto it = lower_bound(b.begin(), b.end(), prev + a[i]);
        if(it != b.end()){
            best = min(best, (*it) - a[i]);
        }
        if(best == LLONG_MAX){
            cout << "NO" << endl;
            return;
        }
        prev = best;
    }
    cout << "YES" << endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) dib();
}
