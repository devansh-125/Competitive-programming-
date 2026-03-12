// // //Radhe Radhe

// // #include <bits/stdc++.h>
// // using namespace std;
// // #define int long long

// // void dib(){
// //   int n,m;
// //   cin>>n>>m;
// //   vector<int> a(n);
// //   vector<int> b(n);
// //   for(int i=0;i<n;i++) cin>>a[i];
// //   for(int i=0;i<n;i++) cin>>b[i];
// //   sort(a.begin(), a.end() , [](int x , int y ){  return x > y; });
// //   sort(b.begin() , b.end() , [](int x , int y ){  return x > y; });
// //   int turn = 1;
// //   while(1){
// //     if(turn == 1){
// //       if(a[0]==0){
// //         cout<<"Bob"<<endl;
// //         return;
// //       }
// //       if( b[0] <= a[0]){
// //         b[0] = 0;
// //       }else{
// //         b[0] = b[0] - a[0];
// //       }
// //       turn  = 2;
// //     }else if( turn == 2){
// //       if( b[0] == 0){
// //         cout<<"Alice"<<endl;
// //         return;
// //       }
// //       if( a[0] <= b[0]){
// //         a[0] = 0;
// //       }else {
// //         a[0] = a[0] - b[0];
// //       }
// //       turn =1;
// //     }
// //     sort(a.begin(), a.end() , [](int x , int y ){  return x > y; });
// //     sort(b.begin() , b.end() , [](int x , int y ){  return x > y; });
    
// //   }

// // }

// // int32_t main(){
// //   int t ;
// //   cin>>t;
// //   while(t--){
// //     dib();
// //   }
// // }


// //Radhe Radhe

// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// void dib(){
//     int n,m;
//     cin>>n>>m;

//     priority_queue<int> a,b;
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         a.push(x);
//     }

//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         b.push(x);
//     }
//     int turn=1;
//     while(1){
//         if(turn==1){
//             if(b.top()==0){
//                 cout<<"Alice"<<endl;
//                 return;
//             }
//             int x=a.top(); a.pop();
//             int y=b.top(); b.pop();

//             if(y<=x) y=0;
//             else y=y-x;
//             a.push(x);
//             b.push(y);

//             turn=2;
//         }

//         else{
//             if(a.top()==0){
//                 cout<<"Bob"<<endl;
//                 return;
//             }

//             int x=a.top(); a.pop();
//             int y=b.top(); b.pop();

//             if(x<=y) x=0;
//             else x=x-y;

//             a.push(x);
//             b.push(y);

//             turn=1;
//         }
//     }
// }

// int32_t main(){
//     int t;
//     cin>>t;
//     while(t--){
//         dib();
//     }
// }


#include <bits/stdc++.h>
using namespace std;
#define int long long

void dib(){
    int n,m;
    cin>>n>>m;

    priority_queue<int> a,b;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push(x);
    }

    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        b.push(x);
    }

    while(true){

        if(b.empty()){
            cout<<"Alice"<<endl;
            return;
        }

        int x=a.top(); 
        a.pop();
        int y=b.top(); 
        b.pop();

        if(y>x) b.push(y-x);
        a.push(x);

        if(b.empty()){
            cout<<"Alice"<<endl;
            return;
        }

        int p=b.top(); 
        b.pop();
        int q=a.top(); 
        a.pop();

        if(q>p) a.push(q-p);
        b.push(p);

        if(a.empty()){
            cout<<"Bob"<<endl;
            return;
        }
    }
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        dib();
    }
}