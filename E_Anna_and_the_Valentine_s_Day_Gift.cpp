#include <bits/stdc++.h>
using namespace std;
#define int long long

int func(int n){
  int temp = n;
  int ct =0;
  while(temp%10 ==0){
    temp /= 10;
    ct++;
  }
  return ct;
}
int total(int n){
  int temp = n;
  int ct=0;
  while(temp){
    temp/=10;
    ct++;
  }
  return ct;
}

void solve() {
   int n,m;
   cin>>n>>m;
   vector<int> a(n);
   for(int i=0;i<n;i++) cin>>a[i]; 
   sort(a.begin() , a.end() , [](int x , int y){
    return func(x)> func(y);
   });
   int ans = 0;
   bool flag = true;
   for(int i=0;i<n;i++){
    if( flag ){
      ans += total(a[i]) - func(a[i]);
      flag = false;
    }else{
      ans+= total(a[i]);
      flag = true;
    }
   }
  //  for(int i=0;i<n;i++){
  //   cout<<a[i]<<" ";
  //  }
  //  cout<<endl;
  //  cout<<ans<<endl;
   if((ans-1) >= m){
    cout<<"Sasha"<<endl;
   }else{
    cout<<"Anna"<<endl;
   }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    cin >> t;
    while (t--) solve();
}
