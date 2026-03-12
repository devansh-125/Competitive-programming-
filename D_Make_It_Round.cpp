// // Radhe Radhe
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// pair<int,int> get(int x){
//   int ct =0 ;
//   int f = 0;
//   int temp = x;
//   while(temp ){
//     ct++;
//     if(temp/10 == 0) f = temp;
//     temp/10;
//   }
//   return {ct , f};
// }

// void solve() {
//   int n,m;
//   cin>>n>>m;
//   pair<int,int> g = get(m);
//   int x = g.second*(g.first-1);
//   int y = x + (g.first >= 2)*5*(g.first-2);
//   if( n%2==0){
//     if(m >= y) cout<< n*y<<endl;
//     else cout<< n*x<<endl;
//   }else{
//     cout<< n*x<<endl;
//   }
// }

// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t; 
//     cin >> t;
//     while (t--) solve();
// }



// Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n, m;
    cin >> n >> m;

    int temp = n;
    int c2 = 0, c5 = 0;

    while (temp % 2 == 0) temp /= 2, c2++;
    while (temp % 5 == 0) temp /= 5, c5++;

    int k = 1;
   
    while (c2 < c5 && k * 2 <= m) {
        k *= 2;
        c2++;
    }
    while (c5 < c2 && k * 5 <= m) {
        k *= 5;
        c5++;
    }

    while (k * 10 <= m) {
        k *= 10;
    }

    k *= (m / k);

    cout << n * k << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
