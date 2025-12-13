

// // Radhe Radhe
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// void dib(){
//   int n;
//   cin>>n;
//   string a,b;
//   cin>>a>>b;
//   vector<char>ans;
//   ans.push_back(a[0]);
//   int i=1;
//   int x=0;
//   int ct=0;
//   while(1){
//     if(x==n-1){
//       ct++;
//       break;
//     }
//     char f = a[x+1];
//     char s = b[x];
//     if(f=='1' && s=='0'){
//       break;
//     }else{
//       if(f==s) ct++;
//       ans.push_back(f);
//       x++;
//     }
//   }
//   for(int i=x;i<n;i++){
//     ans.push_back(b[i]);
//   }
//   for(int i=0;i<ans.size();i++){
//     cout<<ans[i];
//   }
//   cout<<endl;
//   cout<<ct<<endl;

  
// }

// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) dib();
// }


// Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;

    vector<char> ans;
    ans.push_back(a[0]);  

    int x = 0;            
    int ct = 1;          

    while (x < n - 1) {
        char f = a[x + 1]; 
        char s = b[x];     
        if (f > s) {   
            break;
        }
        if (f < s) {
            ct = 1;
        } 
        else { 
            ct++;
        }
        ans.push_back(f);
        x++;
    }
    for (int i = x; i < n; i++) {
        ans.push_back(b[i]);
    }
    for (char c : ans) cout << c;
    cout <<endl;
    cout << ct <<endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
