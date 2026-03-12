// //Radhe Radhe
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// void dib(){
//   int n;
//   cin>>n;
//   string s;
//   cin>>s;
//   int m;
//   cin>>m;
//   string l , r;
//   cin>>l>>r;
//   bool flag = true;
//   int pre = 0;
//   for(int i =0;i<n;i++){
//     int low = l[i];
//     int high = r[i];
//     int idx = pre;
//     for(int k = low ; k<=high;k++){
//       int ct = 0;
//       for(int i= pre+1;i<n;i++){
//         if( s[i] == k){
//           ct++;
//           idx = max( idx , i);
//           break;
//         }
//       }
//       if( ct ==0){
//         flag = false;
//         cout<<"YES"<<endl;
//         return;
//       }
//     }
//     pre = idx;
//     if( idx == pre){
//       flag = false;
//       cout<<"YES"<<endl;
//       return; 
//     }
//   }
//   cout<<"NO"<<endl;
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
    string s;
    cin >> s;

    int m;
    cin >> m;

    string l, r;
    cin >> l >> r;

    int pre = -1;

    for(int i = 0; i < m; i++){
        char low = l[i];
        char high = r[i];

        int idx = pre;

        for(char k = low; k <= high; k++){
            bool found = false;

            for(int j = pre + 1; j < s.size(); j++){
                if(s[j] == k){
                    found = true;
                    idx = max(idx, j);
                    break;
                }
            }

            if(!found){
                cout << "YES" << endl;
                return;
            }
        }

        if(idx == pre){
            cout << "YES" << endl;
            return;
        }

        pre = idx;
    }

    cout << "NO" << endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) dib();
}