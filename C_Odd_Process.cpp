// // Radhe Radhe
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// void dib(){
//    int n;
//    cin>>n;
//    vector<int>a;
//    vector<int>b;
//    for(int i=0;i<n;i++){
//     int x;
//     cin>>x;
//     if(x%2==0) a.push_back(x);
//     else b.push_back(x);
//    }
//    sort(a.begin(),a.end());
//    sort(b.begin(),b.end());
//    for(int i=a.size()-2;i>=0;i--){
//     a[i] += a[i+1];
//    }
//    vector<int>ans(n+1);
//    if(a.size()==n){
//     for(int i=0;i<n;i++){
//       cout<<0<<" ";
//     }
//     cout<<endl;
//    }else{
//     int val = a.size()+1;
//     for(int i=0;i<n;i++){
//       int k=1;
//       if(k<=val){
//         if(k==1){
//           ans[i] = b[b.size()-1];
//         }else{
//           ans[i] = b[b.size()-1] + a[a.size() - k+1];
//         }
//       }else{
//         int x = k-val;
//         if(x%2!=0) x++;
//         k = k-x;
//         if(k==1){
//           ans[i] = b[b.size()-1];
//         }else{
//           ans[i] = b[b.size()-1] + a[a.size() - k+1];
//         }
//       }
//       for(int i=0;i<n;i++){
//         cout<<ans[i]<<" ";
//       }
//       cout<<endl;

//    }
//    }
   
// }

// int32_t main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) dib();
// }


// // Radhe Radhe
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// void dib(){
//     int n;
//     cin >> n;

//     vector<int> a, b;
//     for(int i = 0; i < n; i++){
//         int x;
//         cin >> x;
//         if(x % 2 == 0) a.push_back(x);
//         else b.push_back(x);
//     }
//     sort(a.begin(), a.end());
//     sort(b.begin(), b.end());

//     if(a.size() > 1){
//         for(int i = a.size() - 2; i >= 0; i--){
//             a[i] += a[i + 1];
//         }
//     }
//     vector<int> ans(n, 0);

//     if(a.size() == n){
//         for(int i = 0; i < n; i++) cout << 0 << " ";
//         cout << endl;
//         return;
//     }
//     if(b.size() == n){
//       for(int i=0;i<n;i++){
//         if(i%2==0){
//           cout<<b[b.size()-1]<<" ";
//         }else{
//           cout<<0<<" ";
//         }
//       }
//       cout<<endl;
//       return;
//     }
//     int val = a.size() + 1;
//     for(int i = 0; i < n; i++){
//         int k = i+1;

//         if(k <= val){
//             if(k == 1){
//                 if(!b.empty()) ans[i] = b.back();
//                 else ans[i] = 0;
//             }else{
//                 if(!b.empty() && a.size() >= k - 1){
//                    ans[i] = b.back() + a[a.size() - k + 1];
//                   //  cout<<a[a.size() - k + 1]<<endl;

//                 }
//             }
//         }else{
//             int x = k - val;
//             if(x % 2 != 0) x++;
//             // cout<<x<<endl;
//             if(x == b.size()){
//               a[i] = 0;
//             }else{
//                k = k - x;
//             if(k == 1){
//                 if(!b.empty()) ans[i] = b.back();
//             }else{
//                 if(!b.empty() && a.size() >= k - 1)
//                     ans[i] = b.back() + a[a.size() - k + 1];
//             }

//             }
           
//         }
//     }

//     for(int i = 0; i < n; i++){
//         cout << ans[i] << " ";
//     }
//     cout << endl;
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
    cin >> n;

    vector<int> a, b; 

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x % 2 == 0) a.push_back(x);
        else b.push_back(x);
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if(a.size() > 1){
        for(int i = a.size() - 2; i >= 0; i--){
            a[i] += a[i + 1];
        }
    }

    vector<int> ans(n, 0);
    if(a.size() == n){
        for(int i = 0; i < n; i++) cout << 0 << " ";
        cout << endl;
        return;
    }
    if(b.size() == n){
        int last = b.back();
        for(int i = 0; i < n; i++){
            if(i % 2 == 0) cout << last << " ";
            else cout << 0 << " ";
        }
        cout << endl;
        return;
    }

    int val = a.size() + 1; 
    for(int i = 0; i < n; i++){
          int k = i + 1;

        if(k <= val){
            if(k == 1){
                ans[i] = b.back();
            }else{
                if(a.size() >= k - 1)
                    ans[i] = b.back() + a[a.size() - k + 1];
            }
        }
        else{
            int x = k - val;
            if(x % 2 != 0) x++;

            if(x != (int)b.size()){
                k = k - x;
                if(k == 1){
                    ans[i] = b.back();
                }else{
                    if(a.size() >= k - 1)
                        ans[i] = b.back() + a[a.size() - k + 1];
                }
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) dib();
}
