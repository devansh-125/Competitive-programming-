
// //Radhe Radhe
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// void dib(){
//     int n;
//     cin>>n;
//     vector<int> a(n+1);
//     map<int,int> m;
//     for( int i=1;i<=n;i++){
//       cin>>a[i];
//       m[a[i]]  = i;
//     }
//     int l,r;
//     int idx = m[n];
//     if( idx == n ){
//       if( a[idx-1] < a[1]){
//         r = idx;
//         l = idx;
//       }else{
//         r = idx;
//         l = m[n-1];
//       }
//     }else if( idx == 1){
//       int idx = m[n-1];
//       if( idx == n ){
//           r = idx;
//           l = idx;
//       }else{
//         r = idx-1;
//         l = idx -1;
//       }
//     }else{
//       r = idx-1;
//       int mx = 0;
//       for(int i=1;i<=r;i++){
//         if( mx < a[i]){
//           mx = a[i];
//           l = i;
//         }
//       }
//     }
//     vector<int> ans;
//     for( int i=r+1;i<=n;i++){
//       ans.push_back(a[i]);
//     }
//     vector<int> used;
//     for(int i=l;i<=r;i++) used.push_back(a[i]);
//     reverse(used.begin() , used.end());
//     for(int i=0;i<used.size();i++){
//       ans.push_back(used[i]);
//     }
//     for(int i=1;i<=l-1;i++){
//       ans.push_back(a[i]);
//     }

//     for(int i=0;i<n;i++){
//       cout<<ans[i]<<" ";
//     }
//     cout<<endl;

// }

// int32_t main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin>>t;
//     while(t--) dib();
// }

//Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

void dib(){
    int n;
    cin >> n;

    vector<int> a(n+1);

    for(int i=1;i<=n;i++) cin>>a[i];

    int r = 1;

    for(int i=1;i<=n;i++){
        int x = min(n , r+1);
        int y = min(n , i+1);

        if(a[x] <= a[y]) r = i;
    }

    vector<int> ans;
    for(int i=r+1;i<=n;i++) ans.push_back(a[i]);
    
    ans.push_back(a[r]);

    for(int i=r-1;i>=1;i--){
        if(a[i] > a[1]) ans.push_back(a[i]);
        else{
            for(int j=1;j<=i;j++) ans.push_back(a[j]);
            break;
        }
    }

    for(auto x:ans) cout<<x<<" ";
    cout<<endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--) dib();
}