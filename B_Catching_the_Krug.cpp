// Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    int rk , ck , rd, cd;
    cin>>n>>rk>>ck>>rd>>cd;
    int ans = 0;
    if(rd > rk){
      ans = max(ans , rd);
    }else if( rd < rk){
      ans = max( ans , n - rd);
    }
    if( ck > cd){
      ans = max( ans , n - cd);
    }else if( ck < cd){
      ans = max( ans , cd );
    }
    cout<<ans<<endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
