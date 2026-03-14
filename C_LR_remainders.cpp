// // Radhe Radhe
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// void dib(){
//  int n,m;
//  cin>>n>>m;
//  unordered_map<int,int> fre;
//  vector<int> a(n);
//  for(int i=0;i<n;i++){
//   cin>>a[i];
//   fre[a[i]]++;
//  }
//  string s;
//  cin>>s;
//  int r = n-1;
//  int pro = 1;
//   int rem;
//   for(auto &v: fre){
//     for(int j=0;j<v;i++){
//       pro *= v;
//       if( pro %m == 0) {rem = 0 ; break;}
//     }
//   }
//   rem = pro%m;
//   vector<int> ans;
//   ans.push_back(rem);
//  for(int i=0;i<n-1;i++){
//   if( s[i] == 'L'){
//     if( i <= r){
//       fre[a[i]]--;
//       int pro = 1;
//       int rem;
//       for(auto &v: fre){
//         for(int j=0;j<v;i++){
//           pro *= v;
//           if( pro %m == 0) {rem = 0 ; break;}
//         }
//       }
//       rem = pro%m;
//       ans.push_back(rem);
//     }
//   }else{
//     if(r >= i){
//       fre[a[r]]--;
//       r--;
//             int pro = 1;
//       int rem;
//       for(auto &v: fre){
//         for(int j=0;j<v;i++){
//           pro *= v;
//           if( pro %m == 0) {rem = 0 ; break;}
//         }
//       }
//       rem = pro%m;
//       ans.push_back(rem);
//     }
//   }
//   for(int i=0;i<n;i++){
//     cout<<ans[i]<<" ";
//   }
//   cout<<endl;
  


//  }


// }

// int32_t main(){

//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin>>t;

//     while(t--){
//         dib();
//     }
// }



// // Radhe Radhe
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// int getProduct(unordered_map<int,int> &fre, int m){
    
//     int pro = 1;

//     for(auto &v : fre){
//         for(int j = 0; j < v.second; j++){
//             pro = (pro * v.first) % m;
//             if(pro % m == 0){
//                 return 0;
//             }
//         }
//     }

//     return pro % m;
// }

// void dib(){
//     int n,m;
//     cin>>n>>m;
//     unordered_map<int,int> fre;
//     vector<int> a(n);
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//         fre[a[i]]++;
//     }
//     string s;
//     cin>>s;
//     int r = n-1;
//     int l = 0;
//     vector<int> ans;
//     ans.push_back(getProduct(fre,m));
//     for(int i=0;i<n-1;i++){
//         if(s[i]=='L'){
//             if(l<=r){
//                 fre[a[l]]--;
//                 l++;
//                 ans.push_back(getProduct(fre,m));
//             }
//         }
//         else{
//             if(r>=l){
//                 fre[a[r]]--;
//                 r--;
//                 ans.push_back(getProduct(fre,m));
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<ans[i]<<" ";
//     }
//     cout<<endl;
// }

// int32_t main(){

//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin>>t;

//     while(t--){
//         dib();
//     }
// }


// Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

void dib(){

    int n,m;
    cin>>n>>m;

    vector<int> a(n);

    for(int i=0;i<n;i++)
        cin>>a[i];

    string s;
    cin>>s;

    vector<int> ans(n);

    int l = 0;
    int r = n-1;

    vector<int> order;

    for(char c : s){
        if(c=='L'){
            order.push_back(l);
            l++;
        }
        else{
            order.push_back(r);
            r--;
        }
    }

    // order.push_back(l);

    int pro = 1;
    for(int i=n-1;i>=0;i--){
        pro = (pro * a[order[i]]) % m;
        ans[i] = pro;
    }

    for(int i=0;i<n;i++)
        cout<<ans[i]<<" ";

    cout<<endl;
}

int32_t main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        dib();
    }
}