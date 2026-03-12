//Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

void dib(){
    int n;
		cin>>n;
		vector<int> a(n);
		for(int i=0;i<n;i++) cin>>a[i];
		set<int> first;
		set<int> last;
		set<int> s;
		map<int,int> m;
		for(int i=0;i<n;i++){
			if( s.count(a[i]) == 0) first.insert(i);
			s.insert(a[i]);
			m[a[i]] = i;
		}
		for(int i=0;i<n;i++){
			last.insert( m[a[i]]);
		}
		int ct = 0;
		int ans = 0;
		for(int i=n-1;i>=0;i--){
			if(last.count(i) != 0) ct++;
			if( first.count(i)) ans+=ct;
		}
		cout<<ans<<endl;
 
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) dib();
    return 0;
}