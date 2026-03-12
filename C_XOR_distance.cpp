// //Radhe Radhe
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// void made(int x , vector<int> &used){
//   for(int i=0;i<64;i++){
//     if( x&(1<<i)){
//       used[i] = 1;
//     }
//   }
// }

// void dib(){
//   int a , b ,r;
//   cin>>a>>b>>r;
//   vector<int> au(64 , 0);
//   vector<int> bu(64 , 0);
//   made(a , au);
//   made(b , bu);
//   int big = 1;
//   for(int i=63;i>=0;i--){
//     if(au[i] == 1){
//       big = 1;
//       break;
//     }
//     if(bu[i] == 1){
//       big = 2;
//       break;
//     }
//   }
//   int used = 1;
//   for(int i = 63;i>=0;i--){
//     if( au[i] == 0 && bu[i] == 0){
//       int x = used<<i;
//       if( x <= r){
//         used = x;
//       }
//     }
//     else if( au[i] == 0 && bu[i] == 1 && big == 2 ){
//       // cout<<i<< " "<< 56<<endl;
//       int x = used<<i;
//       if( x <= r) used = x;
//     }
//     else if( au[i] == 1 && bu[i] == 0 &&  big == 1){
//       int x = used<<i;
//       if( x<=r) used = x;
//     }   
//   }
//   int ans = abs( a^used - b^used);
//   cout<<ans<<endl;
// }

// int32_t main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--) dib();
//     return 0;
// }


// //Radhe Radhe
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// void made(int x , vector<int> &used){
//   for(int i=0;i<63;i++){
//     if(x & (1LL<<i)){
//       used[i] = 1;
//     }
//   }
// }

// void dib(){
//   int a , b , r;
//   cin>>a>>b>>r;

//   vector<int> au(63 , 0);
//   vector<int> bu(63 , 0);

//   made(a , au);
//   made(b , bu);

//   int big = 1;

//   for(int i=62;i>=0;i--){
//     if(au[i]){
//       big = 1;
//       break;
//     }
//     if(bu[i]){
//       big = 2;
//       break;
//     }
//   }

//   int used = 0;

//   for(int i=62;i>=0;i--){
//     if(au[i]==0 && bu[i]==0){
//       int x = used + (1LL<<i);
//       if(x<=r) used = x;
//     }
//     else if(au[i]==0 && bu[i]==1 && big==2){
//       int x = used + (1LL<<i);
//       if(x<=r) used = x;
//     }
//     else if(au[i]==1 && bu[i]==0 && big==1){
//       int x = used + (1LL<<i);
//       if(x<=r) used = x;
//     }
//   }
//   // cout<<used<<endl;

//   int ans = abs((a^used) - (b^used));
//   cout<<ans<<endl;
// }

// int32_t main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--) dib();
//     return 0;
// }


// //Radhe Radhe
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// void made(long long x, vector<int> &used){
//   for(int i = 0; i <= 62; ++i){
//     if (x & (1LL << i)) used[i] = 1;
//   }
// }

// void dib(){
//   long long a,b,r;
//   cin >> a >> b >> r;
//   int start = 0;
//   int x = 0, y=0 , ok = 0;
//   if( b>a) swap(a, b);
//   for(int i=62;i>=0;i--){
//     int abit = 0;
//     int bbit = 0;
//     if( a&(1LL<<i)) abit = 1;
//     if( b&(1LL<<i)) bbit = 1;
//     if( abit == bbit && r&(1<<i)) ok = 1;
//     if( abit == bbit) continue;
//     if( start == 0){
//       start = 1;
//       x+=(1LL<< i);
//       if(r&(1LL<<i)) ok =1;
//     }else{
//       if( abit == 0 && bbit == 1 ){
//         y+=(1LL<<i);
//         if(r&(1LL<<i)) ok =1;
//       }else{
//         if( r&(1LL<<i) || ok ==1){
//           y+=(1LL<<i);
//         }else{
//           x+=(1LL<< i);
//           if(r&(1LL<<i)) ok =1;
//         }
//       }
//     }
//   }
//   cout<< x - y<<endl;
// }

// int32_t main(){
//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);
//   int t; cin >> t;
//   while(t--) dib();
//   return 0;
// }

//Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

void dib(){
  long long a,b,r;
  cin >> a >> b >> r;

  int start = 0;
  int x = 0, y = 0, ok = 0;

  if(b > a) swap(a,b);

  for(int i=62;i>=0;i--){
    int abit = (a&(1LL<<i)) ? 1 : 0;
    int bbit = (b&(1LL<<i)) ? 1 : 0;

    if(abit == bbit && (r&(1LL<<i))) ok = 1;
    if(abit == bbit) continue;

    if(start == 0){
      start = 1;
      x += (1LL<<i);
      if(r&(1LL<<i)) ok = 1;
    }
    else{
      if(abit == 0 && bbit == 1){
        y += (1LL<<i);
        if(r&(1LL<<i)) ok = 1;
      }
      else{
        if((r&(1LL<<i)) || ok == 1){
          y += (1LL<<i);
        }
        else{
          x += (1LL<<i);
          if(r&(1LL<<i)) ok = 1;
        }
      }
    }
  }

  cout << llabs(x - y) << endl;
}

int32_t main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while(t--) dib();
}