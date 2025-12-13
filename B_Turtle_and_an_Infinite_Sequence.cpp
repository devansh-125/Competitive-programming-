// Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

bool isSet(int x, int bit){
    return (x & (1LL << bit));
}

void dib(){
    int n,m;
    cin>>n>>m;

    int l = max(0LL, n-m);
    int r = n+m;
    int ans = 0;
    for(int i=0;i<31;i++){
        int val = (1LL << i);

        if(r - l >= val){
            ans += val;
        }
        else if(isSet(l,i) || isSet(r,i)){
            ans += val;
        }
    }

    cout<<ans<<endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) dib();
}
