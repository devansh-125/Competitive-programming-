// #include<bits/stdc++.h>
// using namespace std;
// #define int long long 

// void solve(){
//   int n,k;
//   cin>>n>>k;
//   set<int> s;
//   for(int i=0;i<n;i++){
//     int x;
//     cin>>x;
//     s.insert(x);
//   }
//   set<int> ans;
//   bool fg = true;
//   for(auto &it: s){
//     if(ans.empty()){
//       ans.insert(it);
//       int temp = it;
//       while(temp<=k){
//         if(s.find(temp)==s.end()){
//           fg = false;
//           break;
//         }
//         // cout<<temp<<endl;
//         temp+=it; 
//       }
//       // cout<<(s.find(6)==s.end())<<endl;
//     // }else{
//       bool flag = true;
//       for(auto &v: ans){
//         if(it%v == 0){
//           flag = false;
//           break;
//         }
//       }
//       if(flag){
//         ans.insert(it);
//         int temp = it;
//        while(temp<=k){
//         if(s.find(temp)==s.end()){
//           fg=false;
//           break;
//         }
//         temp+=it; 
//       }
//       }
//     }
//   }
//   if(fg){
//     cout<<ans.size()<<endl;
//     for(auto &it: ans){
//       cout<<it<<" ";
//     }
//     cout<<endl;
//   }else{
//    cout<<-1<<endl;
// }
 
// }

// int32_t main() {
//   int t;
//   cin>>t;
//   while(t--){
//     solve();
//   }
// }

// Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n; 
    cin >> n;

    ll k;
    cin >> k;

    vector<ll> a(n);
    for (ll &x : a) cin >> x;

    map<ll,ll> track;
    for (ll x : a) {
       track[x]++;
    }

    map<ll,ll> vst;
    vector<ll> ans;

    for (auto &it : track) {
        ll x = it.first;

        if (vst[x] <= 0) {
            ll num = x;
            ll ok = 1;

            while (num <= k) {
                if (track[num] <= 0) {
                    ok = 0;
                    break;
                }
                vst[num]++;
                num += x;
            }

            if (!ok) {
                cout << -1 << endl;
                return;
            }

            ans.push_back(x);
        }
    }

    cout << ans.size() << endl;
    for (ll x : ans) cout <<x<<" ";
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while (t--) solve();
}
