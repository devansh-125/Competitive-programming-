
// Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

void dib(){
  int n;
  cin>>n;
  vector<int>a(n);
  for(int i=0;i<n;i++) cin>>a[i];
  if(n==1){
    cout<<1<<endl;
    cout<<a[0]<<endl;
  }else{
    vector<int> ans;
    for(int i=0;i<40;i++){
      int mx = *max_element(a.begin() , a.end());
      int mn = *min_element(a.begin(),a.end());
      if((mn+mx) == 0) break;
      if((mn+ mx)%2 !=0 ){
        cout<<-1<<endl;
        return;
      }
      int val =( mn+mx)/2;
      ans.push_back(val);
      for(int i=0;i<n;i++){
        a[i] = abs(val - a[i]);
      }
    }
    cout<<ans.size()<<endl;
    for(int x: ans){
      cout<<x<<" ";
    }
    cout<<endl;
  }
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) dib();
}