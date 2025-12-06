//Radhe Radhe

#include<bits/stdc++.h>
using namespace std;
#define int long long 

void Devansh(){
 int n;
 cin>>n;
 vector<int> a(n);
 int mx = 0;
 for(int i=0;i<n;i++){
  cin>>a[i];
  mx = max(mx , a[i]);

 }
 int ans= 0; 
 for(int i=0;i<n;i++){
  if(i==n-1){
    ans +=max(a[i],a[0]);
  }else{
     ans+=max(a[i], a[i+1]);

  }
 }
 cout<<ans-mx<<endl;
 
}

int32_t main() {
  int t;
  cin>>t;
  while(t--){
    Devansh();
  }
}
