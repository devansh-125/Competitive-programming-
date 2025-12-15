
// // Radhe Radhe
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// int func(int n){
//     int ct=0;
//     while(n/3){
//         ct++;
//         n = n/3;
//     }
//     return ct+1;
// }

// void dib(){
//     int l,r;
//     cin>>l>>r;
//     int ans=0;
//     ans+=func(l) * 2;
//     l++;
//     while(  l != pow(3 , func(l)-1)  && l<=r){
//         ans+=func(l);
//         l++;
//     }
//     while(l*3<=r){
//         int val = l*3;
//         ans += (val-l) * func(l);
//         l*=3;
//     }
//     while(l<=r){
//         ans+=func(l);
//         l++;
//     }
//     cout<<ans<<endl;
//     }

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

int func(int n){
    int ct = 0;
    while(n){
        ct++;
        n /= 3;
    }
    return ct;
}

void dib(){
    int l, r;
    cin >> l >> r;
    
    int ans = 0;
    ans += 2 * func(l);
    l++;
    // cout<<l<<" "<< func(l)<<endl;
    while(l <= r){
        int f = func(l);
        int pw = 1;
        for(int i = 0; i < f; i++) pw *= 3;

        int end = min(r, pw - 1); 
        // cout<<end<<endl;

        ans += (end - l + 1) * f;
        l = end + 1;
    }
    cout << ans << endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) dib();
}
