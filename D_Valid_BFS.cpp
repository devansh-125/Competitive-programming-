// Radhe Radhe 
#include <bits/stdc++.h>
using namespace std;
#define int long long

void dib(){
    int n; 
    cin >> n;
    vector<vector<int>> adj(n + 1);
    for(int i = 0; i < n - 1; i++){
        int x, y; 
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    if(a[0] != 1){
        cout << "No\n";
        return;
    }
    vector<int> vis(n + 1, 0);
    queue<int> q;
    q.push(1);
    vis[1] = 1;
    int idx = 1;
    while(!q.empty()){
        int sz = q.size();
        while(sz--){
            int u = q.front(); 
            q.pop();
            unordered_set<int> children;
            for(auto &v : adj[u]){
                if(!vis[v]){
                    vis[v] = 1;
                    children.insert(v);
                }
            }
             int need = children.size();
              for(int i = idx; i < idx + need; i++){
                  if(children.find(a[i]) == children.end()){
                      cout << "No\n";
                      return;
                  }
                  q.push(a[i]);
              }
              idx += need;
        } 
    }

    cout << "Yes\n";
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    dib();
}
