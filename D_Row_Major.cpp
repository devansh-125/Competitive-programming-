//Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

void dib(){
  int n;
  cin>>n;
  int x = 1;
  while( n%x == 0) x++;
  string s = "";
  for(int i=0;i<n;i++) s += ('a' + (i%x));
  cout<<s<<endl;
  }
  

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--) dib();
}