// //Radhe Radhe
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// void dib(){
//    int n;
//    cin>>n;
//    string s;
//    cin>>s;
//    vector<int> ans(n);
//    stack<int> st;
//    int ct = 1;
//    for(int i=0;i<n;i++){
//     ans[i] = ct;
//     if( s[i] == '('){
//       if( st.top() == -1){
//         st.pop();
//       }else{
//         st.push(1);
//       }
//     }else{
//       if( st.top() == 1){
//         st.pop();
//       }else{
//         st.push(-1);
//       }
//     }
//     if( st.size() == 0){
//       ct++;
//     }
//    }
//    if( st.size() != 0) cout<<-1<<endl;
//    else{
//     cout<<ct<<endl;
//     for(int i=0;i<n;i++){
//       cout<<ans[i]<<" ";
//     }
//     cout<<endl;
//    }
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
   int n;
   cin>>n;
   string s;
   cin>>s;
   vector<int> ans(n);
   stack<int> st;

   int ct = 0;
   int val = 1;
   int one = 0;
   int second = 0;

   for(int i=0;i<n;i++){
        if(s[i] == '('){
            if(st.empty()){
                st.push(1);
                if( val == 2) val = 1;
            }else{
                if( st.top() == -1)  st.pop();
                else st.push(1);
            }
            ans[i] = val;
        }
        else{
            if(st.empty()){
                st.push(-1);
                if( val == 1) val = 2;
            }else{
                if( st.top() == 1)  st.pop();
                else st.push(-1);
            }
            ans[i] = val;
        }
        if( val == 1) one++;
        else second++;
        if(st.empty()){
            ct++;
        }
   }

   if(!st.empty()) cout<<-1<<endl;
   else{
        if( ct == 1 || second == 0 || one == 0){
            cout<<1<<endl;
            for(int i=0;i<n;i++){
                cout<<1<<" "; 
            }
            cout<<endl;
        }
        else{
            cout<<2<<endl;
            for(int i=0;i<n;i++) cout<<ans[i]<<" ";
            cout<<endl;
        }

   }
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--) dib();
}