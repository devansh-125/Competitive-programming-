//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define int long long 

void dfs(vector<vector<int>> &adj , int node , stack<int> &st , vector<bool> &vist){
  vist[node] = true;
  for(int &v: adj[node]){
    if(!vist[v]){
      dfs(adj , v, st , vist);
    }
  }
  st.push(node);
}
void solve(){
 int n;
 cin>>n;
 vector<vector<int>> adj(n+1);
 for(int i=0;i<n-1;i++){
  int u,v,x,y;
  cin>>u>>v>>x>>y;
  if(x>y){
    adj[v].push_back(u);
  }else{
    adj[u].push_back(v);
  }
 }
 stack<int> st;
 vector<bool> vist(n+1 ,false );
 for(int i=1;i<=n;i++){
  if(!vist[i]){
    dfs(adj , i , st  , vist );
  }
 }
 int x=1;
 vector<int> ans(n+1);
 while(!st.empty()){
  ans[st.top()] = x;
  x++;
  st.pop();
 }
 for(int i=1;i<=n;i++){
  cout<<ans[i]<<" ";
 }
 cout<<endl;

}


int32_t main() {
  int t;
  cin>>t;
  while(t--){
    solve();
  }
}



  