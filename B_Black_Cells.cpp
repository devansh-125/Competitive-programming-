// // Radhe Radhe
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// void dib(){
//     int n;
//     cin >> n;

//     vector<int> a(n);
//     for(int i = 0; i < n; i++) cin >> a[i];

//     if(n == 1){
//         cout << 1 << endl;
//         return;
//     }

//     vector<int> b;
//     for(int i = 1; i < n; i++){
//         b.push_back(a[i] - a[i-1]);
//     }
//     if(n%2==0){
//       int ans=0;
//       for(int i=1;i<n;i++){
//         ans = max(ans , a[i]-a[i-1]);
//         i++;
//       }
//       cout<<ans<<endl;
//     }else{
//     }
    

//     sort(b.begin(), b.end());
//     if(n==2 || n%2==0){
//       cout<<b.back()<<endl;
//       return;
//     }else{
//       cout<<b[b.size()-2]<<endl;
//       return;
//     }
// }

// int32_t main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while(t--) dib();
// }



