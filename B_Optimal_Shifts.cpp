// // Radhe Radhe
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// void dib(){
//    int n;
//    cin>>n;
//   string s;
//   cin>>s;
//   int ans = 0;
//   string b = s+s;
//   for(int i=0;i<2*n;i++){
//     if(s[i]=='0'){
//       int ct=0;
//       int j=i;
//       while(s[j]=='0'){
//         ct++;
//         j++;
//       }
//       ans = max(ans,ct);
//       i=j-1;
//     }
//   }
//   cout<<ans<<endl;
// }

// int32_t main(){
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

void dib(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    string b = s + s; 
    int ans = 0;

    for(int i = 0; i < 2*n; i++){
        if(b[i] == '0'){
            int ct = 0;
            int j = i;
            while(j < 2*n && b[j] == '0'){
                ct++;
                j++;
            }
            ans = max(ans, ct);
            i = j - 1;  
        }
    }

    cout << min(ans, n) << endl; 
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) dib();
}
