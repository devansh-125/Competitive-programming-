// Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

void dib(){
   int n,k;
   cin>>n>>k;
   vector<int> a(n+1);
   int mx = 0;
   int ct=n;
   for(int i=1;i<=n;i++){
    a[i] = i;
    mx += abs(ct-i);
    ct--;

   }
   if(k%2 != 0 || k>mx){
    cout<<"NO"<<endl;
   }else{
    int val = k/2;
    int l=1;
    int r=n;
    while(val){
       if(val > r-l){
      a[l] = r;
      a[r] = l;
      val-= (r-l);
      r--;
      l++;
    }else if(val == r-l){
      a[l] = r;
      a[r] = l;
      val-=(r-l);
    }else{
      while(val){
        if(val < r-l && r>l){
          r--;
        }else if(val == r-l){
          // cout<<val<<" "<<r<<" "<<l<<endl;
          a[r] = l;
          a[l] = r;
          val-= r-l;
        }
      }
    }

    }
    cout<<"YES"<<endl;
    for(int i=1;i<=n;i++){
      cout<<a[i]<<" ";
    }
    cout<<endl;

   }
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) dib();
}
