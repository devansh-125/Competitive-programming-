// // Radhe Radhe
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// void dib(){
//   int k , x , a;
//   cin>>k>>x>>a;
//   int coins = a;
//   int bet = 1;
//   int loss = 0;
//   while( x -- ){
//     int used = loss/(k-1);
//     bet = used+1;
//     loss += bet;
//     // cout<<bet<<" "<<loss<<endl;
//   }
//   // cout<<loss<<endl;
//   a-=loss;
//   if( a * k > coins) cout<<"YES"<<endl;
//   else cout<<"NO"<<endl;
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
    int k, x, a;
    cin >> k >> x >> a;

    int coins = a;
    int bet = 1;
    int loss = 0;

    while(x--){
        int used = loss / (k - 1);
        bet = used + 1;
        loss += bet;

        if(loss >= coins) break; 
    }
    a -= loss;

    if(a * k > coins) cout << "YES" << endl;
    else cout << "NO" << endl;
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