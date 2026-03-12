// //Radhe Radhe
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// void dib(){
//   int n,m;
//   cin>>n>>m;
//   char a[n][m];
//   for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//       cin>>a[i][j];
//     }
//   }
//   for(int i=0;i<n;i++){
//     int ct = 0;
//     for( int j=0;j<m;j++){
//       if( a[i][j] == 'U') ct++;
//     }
//     if( ct%2 == 1) {
//       cout<<-1<<endl;
//       return;
//     }
//   }
//   for( int i=0;i<m;i++){
//     int ct = 0;
//     for(int j=0;j<n;j++){
//       if( a[j][i] == 'L') ct++;
//     }
//     if(ct%2 ==1){
//       cout<<-1<<endl;
//       return;
//     }
//   }
//   for(int i=0;i<n;i++){
//     int flag = 1;
//     for(int j=0;j<m;j++){
//       if(a[i][j] == 'U'){
//         if( flag==1){
//           a[i][j] = 'W';
//           a[i+1][j] = 'B';
//           flag = 2;
//         }else{
//           a[i][j] = 'B';
//           a[i+1][j] = 'W';
//           flag = 1;
//         }
//       }
//     }
//   }
//   for(int i=0;i<m;i++){
//     int flag = 1;
//     for(int j=0;j<n;j++){
//       if(a[j][i] == 'L'){
//         if( flag == 1){
//           a[j][i] = 'W';
//           a[j+1][i] = 'B';
//           flag = 2;
//         }
//       }else{
//         a[j][i] = 'B';
//         a[j][i+1] = 'W';
//         flag = 2;
//       }
//     }
//   }

//   for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//       cout<<a[i][j];
//     }
//     cout<<endl;
//   }

   
// }

// int32_t main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while(t--) dib();
// }


//Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

void dib(){
    int n,m;
    cin>>n>>m;

    vector<string> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++){
        int ct = 0;
        for(int j=0;j<m;j++){
            if(a[i][j]=='U') ct++;
        }
        if(ct%2){
            cout<<-1<<endl;
            return;
        }
    }

    for(int j=0;j<m;j++){
        int ct = 0;
        for(int i=0;i<n;i++){
            if(a[i][j]=='L') ct++;
        }
        if(ct%2){
            cout<<-1<<endl;
            return;
        }
    }

    for(int i=0;i<n;i++){
        int flag=0;
        for(int j=0;j<m;j++){
            if(a[i][j]=='U'){
                if(flag==0){
                    a[i][j]='W';
                    a[i+1][j]='B';
                }
                else{
                    a[i][j]='B';
                    a[i+1][j]='W';
                }
                flag^=1;
            }
        }
    }

    for(int j=0;j<m;j++){
        int flag=0;
        for(int i=0;i<n;i++){
            if(a[i][j]=='L'){
                if(flag==0){
                    a[i][j]='W';
                    a[i][j+1]='B';
                }
                else{
                    a[i][j]='B';
                    a[i][j+1]='W';
                }
                flag^=1;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--) dib();
}