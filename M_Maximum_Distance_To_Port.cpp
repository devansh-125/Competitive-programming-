// #include<bits/stdc++.h>
// using namespace std;
// #define int long long 

// void solve(){
//   int n,m, k;
//   cin>>n>>m>>k;
//   vector<int> have(n+1);
//   for(int i=1;i<=n;i++) cin>>have[i];
//   vector<vector<int>> adj(n+1);
//   for(int i=0;i<m;i++){
//     int x,y;
//     cin>>x>>y;
//     adj[x].push_back(y);
//   }
//   vector<int> dist(n+1,-1);
//   queue<int>q;
//   q.push(1);
//   dist[1]=0;
//   while(!q.empty()){
//     int node = q.front();
//     q.pop();
//     for(int v : adj[node]){
//       if(dist[v]== -1){
//         dist[v] = dist[node] +1;
//         q.push(v);
//       }
//     }
//   }
//   vector<int>ans(k+1,0);
//   for(int i=1;i<=n;i++){
//     int p = have[i];
//     ans[p] = max(ans[p] , dist[i]);
//   }
//   // for(int i=1;i<n;i++){
//   //   cout<<dist[i]<<" ";
//   // }

//   for(int i=1;i<=k;i++){
//     cout<<ans[i]<<" ";
//   }
//   cout<<endl;



// }

// int32_t main(){
//   // int  t;
//   // cin>>t;
//   // while(t--){
//   //   solve();
//   // }
//   solve();

// }


#include<bits/stdc++.h>
using namespace std;
#define int long long 

void solve(){
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> have(n+1);  
    for(int i = 1; i <= n; i++) cin >> have[i];
    vector<vector<int>> adj(n+1);
    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);  
    }

    vector<int> dist(n+1, -1);
    queue<int> q;

    q.push(1);
    dist[1] = 0;

    while(!q.empty()){
        int node = q.front();
        q.pop();

        for(int v : adj[node]){
            if(dist[v] == -1){
                dist[v] = dist[node] + 1;
                q.push(v);
            }
        }
    }

    vector<int> ans(k+1, 0);

    for(int i = 1; i <= n; i++){
        int p = have[i];
        if(dist[i] != -1)  
            ans[p] = max(ans[p], dist[i]);
    }
    for(int i = 1; i <= k; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}

int32_t main() {
    solve();
}
