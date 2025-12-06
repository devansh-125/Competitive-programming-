// Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> parent;
vector<int> a, b;

int findp(int x){
    if(parent[x] == x) return x;
    return parent[x] = findp(parent[x]);
}

bool unite(int x, int y){
    x = findp(x);
    y = findp(y);
    if(x == y) return false; 
    parent[y] = x;
    return true;
}

void solve(){
    int n;
    cin >> n;

    a.resize(n+1);
    b.resize(n+1);

    int mx = 0;

    for(int i = 1; i <= n; i++){
        cin >> a[i] >> b[i];
        mx = max(mx, b[i]);
    }

    parent.assign(mx + 1, 0);
    for(int i = 1; i <= mx; i++) parent[i] = i;

    vector<int> ans;

    for(int i = 1; i <= n; i++){
        if(unite(a[i], b[i])){
            ans.push_back(i);
        }
    }

    cout << ans.size() << endl;
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] <<" ";
    }
    cout<<endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) solve();
}
