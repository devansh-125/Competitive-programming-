// // Radhe Radhe
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// bool isSet(int x, int bit){
//     return (x & (1LL << bit));
// }

// void dib(){
//    int n;
//    cin>>n;
//    vector<int>a(n);
//    int c=0;
//    for(int i=0;i<n;i++) cin>>a[i];
//    int dp[n+1][2];
//    dp[0][0] = 0;
//    dp[0][1] = 0;

//    for(int i=0;i<n;i++){
//     c+=a[i];
//     if(c<0 && a[i+1] >= 0 && i<n){
//       dp[i+1][0] = c + max(dp[i][0] , dp[i][1]);
//       dp[i+1][1] = abs(c) + max(dp[i][0] , dp[i][1]);
//     }else{
//       dp[i+1][0] = c + max(dp[i][0] , dp[i][1]) ;
//       dp[i+1][1] =   dp[i+1][0];
//     } 
//    }
//    cout<<max(dp[n][0] , dp[n][1])<<endl;
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
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int mn = 0;
    int mx = 0;
    for(int i=0;i<n;i++){
       int x1 = a[i] + mn;
       int x2 = a[i] + mx;
       int x3 = abs(x1);
       int x4 = abs(x2);
       mn = min( min(x1 , x2) , min( x3 , x4) );
       mx = max( max(x1 , x2) , max( x3 , x4));
    }

    cout << max( abs(mn) , abs(mx)) << endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) dib();
}
