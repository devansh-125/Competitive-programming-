
// Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

const long long MASK = (1LL << 31) - 1;

long long complement(long long x){
    return x ^ MASK;
}

void dib(){
  int n;
  cin >> n;
  map<int,int> m;
  vector<int>a(n);
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    a[i]=x;
    m[x]++;
  }
  int ans=n;
  for(int i=0;i<n;i++){
    int cp = complement(a[i]);
    if(m[a[i]] && m[cp]){
      ans--;
      m[a[i]]--;
      m[cp]--;
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
