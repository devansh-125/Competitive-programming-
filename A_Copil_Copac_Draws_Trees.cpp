


// //Radhe Radhe
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// void dib(){
//     int n;
//     cin >> n;

//     vector<pair<int,int>> a(n-1);
//     for(int i=0;i<n-1;i++){
//         cin >> a[i].first >> a[i].second;
//     }

//     vector<int> p(n+1,-1);
//     p[1] = 1;

//     int ct = 0;
//     int ans = 0;

//     set<int> s;
//     for(int i=0;i<n-1;i++) s.insert(i);

//     while(ct != n-1){
//         for(auto it = s.begin(); it != s.end(); ){
//             int i = *it;
//             if(p[a[i].first] == 1 && p[a[i].second] == -1){
//                 ct++;
//                 p[a[i].second] = 1;
//                 it = s.erase(it);
//             }
//             else{
//                 it++;
//             }
//         }
//         ans++;
//     }

//     cout << ans << endl;
// }

// int32_t main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;

//     while(t--){
//         dib();
//     }
// }


//Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

map<pair<int,int>, int> idx;

void dfs(int node,int par,vector<vector<int>>&adj,vector<int>&dp){
    for(auto &v:adj[node]){
        if(v==par) continue;

        if(idx[{par,node}] < idx[{node,v}])
            dp[v]=dp[node];
        else
            dp[v]=dp[node]+1;

        dfs(v,node,adj,dp);
    }
}

void dib(){
    int n;
    cin>>n;

    vector<vector<int>> adj(n+1);

    for(int i=1;i<=n-1;i++){
        int u,v;
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);

        idx[{u,v}] = i;
        idx[{v,u}] = i;
    }

    vector<int> dp(n+1,0);
    dp[1]=1;

    dfs(1,-1,adj,dp);

    int ans=1;
    for(int i=1;i<=n;i++)
        ans=max(ans,dp[i]);

    cout<<ans<<endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--) dib();
}