
// Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

void dib(){
    int n;
    cin>>n;
    vector<int> ans;
    for(int i=63;i>=0;i--){
      if(n & (1LL << i) ){
        int val = n - (1LL << i);
        if(val)  ans.push_back( n - (1LL << i) );
      }
    }
    ans.push_back(n);
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
    }
    cout<<endl;

    }


int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) dib();
}
