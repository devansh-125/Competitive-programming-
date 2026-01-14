#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
   int n;
   cin>>n;
   vector<int>a(n);
   int mn = 1e9;
   for(int i=0;i<n;i++) {
    cin>>a[i];
    mn = min(mn , a[i]);
   }
   vector<int> b;
   b = a;
   sort(b.begin(),b.end());
   bool flag  = false;
   bool flag2= true;
   if(a == b){
    cout<<0<<endl;
    return;
   }
   int pre = mn;
   int ans =0;
   int ct=0;
   for(int i=0;i<n;i++){
    if(a[i] == mn ){
        ct++;
        flag = true;
        if(ct == 1) ans=i;
    }
    if(flag){
        if(a[i]<pre) {flag2= false; break;}
        pre = a[i];
    }
   }
   if(flag2){
    cout<<ans<<endl;
   }else cout<<-1<<endl;

}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    cin >> t;
    while (t--) solve();
}
