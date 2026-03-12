//Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

void dib(){
    int n,m;
		cin>>n>>m;
		vector<int> a(n);
    a[0] = 1;
		for(int i=1;i<n;i++) cin>>a[i];
    vector<int> b(n);
    for(int i=0;i<n;i++) cin>>b[i];
    sort(a.begin() , a.end());
    sort(b.begin() , b.end());
		int i = 0;
    int l = 0;
    while(l<n){
      if(a[i] >= b[l]){
        while(l<n && a[i] >= b[l]){
          l++;
        }
      }
      if(l==n) break;
      i++;
      l++;
    }
    cout<<n-i<<endl;

 
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) dib();
    return 0;
}