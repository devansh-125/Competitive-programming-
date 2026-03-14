
// // Radhe Radhe
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// void dib(){
//   int n;
//   cin>>n;
//   vector<int> a(n);
//   for(int i=0;i<n;i++) cin>>a[i];
//   vector<vector<int>> used;
//   for(int i=n-1;i>=0;i--){
//     vector<int> temp;
//     int sum = 0;
//     int j = i;
//     while( a[j]>0){used.push_back({a[j]}); j--; sum+=a[j];}
//     if( j!=i) i = j+1;
//     int sum2 = 0;
//     while( a[j] < 0 && sum >0 &&   sum2 <= sum ){
//       used.push_back({a[j]});
//       j--;
//       sum2 -= a[j];
//     }
//      if( j!=i) i = j+1;
//     while(a[j] > 0 ){
//       used.push_back({a[j]});
//       j--;
//     }
//      if( j!=i) i = j+1;
//     while( a[j] < 0 ){
//       temp.push_back(a[j]);
//       j--;
//     }
//      if( j!=i) i = j+1;
//     if( !temp.empty()) used.push_back(temp);
//   }
//   int ans = 0;
//   for(int i= used.size();i>=0;i--){
//     int sum = 0;
//     for(int j = 0;j<used[i].size() ;j++) sum+=used[i][j];
//     ans += sum * i;
//   }
//   cout<<ans<<endl;

// }

// int32_t main(){

//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;

//     while(t--){
//         dib();
//     }
// }




// Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

void dib(){
  int n;
  cin>>n;
  vector<int> a(n);
  int total = 0;
  for(int i=0;i<n;i++){
    cin>>a[i];
    total += a[i];
  }
  int ans = a[0]*1;
  total-=a[0];
  int curr  =1;
  for(int i=1;i<n;i++){
    if( total >0){
      curr++;
    }
    ans+= a[i]*curr;
    total-=a[i];
  }
  cout<<ans<<endl;

}

int32_t main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        dib();
    }
}


