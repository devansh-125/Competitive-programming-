// // //Radhe Radhe
// // #include <bits/stdc++.h>
// // using namespace std;
// // #define int long long

// // void dib(){
// //     int n,m;
// //     cin>>n>>m;
// //     if( n%m == 0){
// //       cout<<0<<endl;
// //       return;
// //     }
// //     if( m%2 == 1){
// //       cout<<-1<<endl;
// //       return;
// //     }
// //     int ans = 0;
// //     int val = n%m;
// //     unordered_map<int,int> m;
// //     while(val > 0){
// //       if(m.count(val)){
// //         cout<<-1<<endl;
// //         return;
// //       }
// //       m.insert(val);
// //       if( val< m){
// //         ans+=val;
// //         val *=2;
// //       }else if( val == m){
// //         cout<<ans<<endl;
// //         val = 0;
// //         return;
// //       }else{
// //         val = val%m;
// //       }
// //     }
// // }

// // int32_t main(){
// //     ios::sync_with_stdio(false);
// //     cin.tie(NULL);

// //     int t;
// //     cin>>t;
// //     while(t--) dib();
// // }


// //Radhe Radhe
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// void dib(){
//     int n,mod;
//     cin>>n>>mod;

//     if(n%mod == 0){
//         cout<<0<<endl;
//         return;
//     }

//     if(mod%2 == 1){
//         cout<<-1<<endl;
//         return;
//     }

//     int ans = 0;
//     int val = n%mod;

//     unordered_map<int,int> vis;

//     while(val > 0){

//         if(vis.count(val)){
//             cout<<-1<<endl;
//             return;
//         }

//         vis[val] = 1;

//         if(val < mod){
//             ans += val;
//             val *= 2;
//         }
//         else if(val == mod){
//             cout<<ans<<endl;
//             return;
//         }
//         else{
//             val %= mod;
//         }
//     }
// }

// int32_t main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin>>t;

//     while(t--) dib();
// }

// //Radhe Radhe
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// void dib(){
//     int n, m;
//     cin >> n >> m;

//     n %= m;             
//     if (n == 0) {
//         cout << 0 << endl;
//         return;
//     }

//     int g = __gcd(n, m);
//     int a = n / g;
//     int b = m / g;

//     if ((b & (b - 1)) != 0) {
//         cout << -1 << endl;
//         return;
//     }
//     int cnt = __builtin_popcountll(a);
//     long long ans = 1LL * m * cnt - n;
//     cout << ans << endl;
// }

// int32_t main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--) dib();
//     return 0;
// }


//Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

void dib(){
    int n, m;
    cin >> n >> m;
    int c =0;
    int s = 0;
    while(n){
      c += n%m;
      n = 2*(n%m);
      s++;
      if( s>32){
        cout<<-1<<endl;
        return;
      }
    }
    cout<<c<<endl;
 
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) dib();
    return 0;
}