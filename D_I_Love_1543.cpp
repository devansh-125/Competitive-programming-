// // Radhe Radhe
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// bool isSafe(vector<vector<int>> &adj , int x, int y , int n ,int m){
//   if(x<0 || x>=n || y<0 || y>=m ) return false;
//   return true;
// };

// bool check(vector<vector<int>> &adj , int x, int y , int n , int  m){
//   if(isSafe(adj , x-1 , y , n, m ) && adj[x-1][y]==5) {
//     if(isSafe(adj , x-2 , y ,n, m) && adj[x-2][y] == 4){
//        if(isSafe(adj , x-3 , y ,n, m) && adj[x-3][y] == 3){
//         return true;
//        }
//        if(isSafe(adj , x-2 , y+1 ,n, m) && adj[x-2][y+1] == 3){
//         return true;
//        }
//     }
//     if(isSafe(adj , x-1 , y+1 ,n, m) && adj[x-1][y+1] == 4){
//       if(isSafe(adj , x-1 , y+2 ,n, m) && adj[x-1][y+2] == 3){
//         return true;
//       }
//       if(isSafe(adj , x , y+1 ,n, m) && adj[x][y+1] == 3){
//         return true;
//        }
//     }

//   }else if(isSafe(adj , x , y+1 , n, m ) && adj[x][y+1]==5) {
//     if(isSafe(adj , x , y+2 ,n, m) && adj[x][y+2] == 4){
//        if(isSafe(adj , x , y+3 ,n, m) && adj[x][y+3] == 3){
//         return true;
//        }
//        if(isSafe(adj , x+1 , y+2 ,n, m) && adj[x+1][y+2] == 3){
//         return true;
//        }
//     }
//     if(isSafe(adj , x+1 , y+1 ,n, m) && adj[x+1][y+1] == 4){
//       if(isSafe(adj , x+2 , y+1 ,n, m) && adj[x+2][y+1] == 3){
//         return true;
//       }
//       if(isSafe(adj , x+1 , y ,n, m) && adj[x][y+1] == 3){
//         return true;
//        }
//     }
//   }else if(isSafe(adj , x+1 , y , n, m ) && adj[x+1][y]==5) {
//     if(isSafe(adj , x+2 , y ,n, m) && adj[x+2][y] == 4){
//        if(isSafe(adj , x+3 , y ,n, m) && adj[x+3][y] == 3){
//         return true;
//        }
//        if(isSafe(adj , x-2 , y+1 ,n, m) && adj[x-2][y+1] == 3){
//         return true;
//        }
//     }
//   }else if(isSafe(adj , x , y-1 , n, m ) && adj[x][y-1]==5) {
//     if(isSafe(adj , x , y-2 ,n, m) && adj[x][y-2] == 4){
//        if(isSafe(adj , x , y-3 ,n, m) && adj[x][y-3] == 3){
//         return true;
//        }
//        if(isSafe(adj , x-1 , y-2 ,n, m) && adj[x-1][y-2] == 3){
//         return true;
//        }
//     }
//     if(isSafe(adj , x-1 , y-1 ,n, m) && adj[x-1][y-1] == 4){
//       if(isSafe(adj , x-2 , y-1 ,n, m) && adj[x-2][y-1] == 3){
//         return true;
//       }
//       if(isSafe(adj , x-1 , y ,n, m) && adj[x-1][y] == 3){
//         return true;
//        }
//     }
  
//   }
//   return false;
// };

// void dib(){

//    int n,m;
//    cin>>n>>m;
//    vector<string>a(n);
//    for(int i=0;i<n;i++){
//     cin>>a[i];
//    }

//    vector<vector<int>> adj( n , vector<int> (m));
//    for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//       adj[i][j] = a[i][j] - '0';
//     }
//    }
//    int ans = 0;
//    for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//       if(adj[i][j] ==1){
//         if(check(adj , i , j , n , m)) ans++;
//       }
//     }
//    }
//    cout<<ans<<endl;
  
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

bool isSafe(int x, int y, int n, int m){
    if(x < 0 || x >= n || y < 0 || y >= m) return false;
    return true;
}

bool check(vector<vector<int>> &adj, int x, int y, int n, int m){

    if(isSafe(x-1, y, n, m) && adj[x-1][y] == 5){
        if(isSafe(x-2, y, n, m) && adj[x-2][y] == 4){
            if(isSafe(x-3, y, n, m) && adj[x-3][y] == 3) return true;
            if(isSafe(x-2, y+1, n, m) && adj[x-2][y+1] == 3) return true;
        }
        if(isSafe(x-1, y+1, n, m) && adj[x-1][y+1] == 4){
            if(isSafe(x-1, y+2, n, m) && adj[x-1][y+2] == 3) return true;
            if(isSafe(x, y+1, n, m) && adj[x][y+1] == 3) return true;
        }
    }
    if(isSafe(x, y+1, n, m) && adj[x][y+1] == 5){
        if(isSafe(x, y+2, n, m) && adj[x][y+2] == 4){
            if(isSafe(x, y+3, n, m) && adj[x][y+3] == 3) return true;
            if(isSafe(x+1, y+2, n, m) && adj[x+1][y+2] == 3) return true;
        }
        if(isSafe(x+1, y+1, n, m) && adj[x+1][y+1] == 4){
            if(isSafe(x+2, y+1, n, m) && adj[x+2][y+1] == 3) return true;
            if(isSafe(x+1, y, n, m) && adj[x+1][y] == 3) return true;
        }
    }
    if(isSafe(x+1, y, n, m) && adj[x+1][y] == 5){
        if(isSafe(x+2, y, n, m) && adj[x+2][y] == 4){
            if(isSafe(x+3, y, n, m) && adj[x+3][y] == 3) return true;
            if(isSafe(x+2, y+1, n, m) && adj[x+2][y+1] == 3) return true;
        }
    }

    if(isSafe(x, y-1, n, m) && adj[x][y-1] == 5){
        if(isSafe(x, y-2, n, m) && adj[x][y-2] == 4){
            if(isSafe(x-1, y-2, n, m) && adj[x-1][y-2] == 3) return true;
        }
        if(isSafe(x-1, y-1, n, m) && adj[x-1][y-1] == 4){
            if(isSafe(x-2, y-1, n, m) && adj[x-2][y-1] == 3) return true;
            if(isSafe(x-1, y, n, m) && adj[x-1][y] == 3) return true;
        }
    }

    return false;
}

void dib(){
    int n, m;
    cin >> n >> m;

    vector<string> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    vector<vector<int>> adj(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            adj[i][j] = a[i][j] - '0';
        }
    }

    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(adj[i][j] == 1){
                if(check(adj, i, j, n, m)) ans++;
            }
        }
    }
    // cout << ans << endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) dib();
}
