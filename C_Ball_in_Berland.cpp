#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD=1000000007;

void radhe(){
    int n,c;
    cin>>n>>c;
    string s;
    cin>>s;
    if(s[n-1]=='0'){
      cout<<-1<<endl;
      return;
    }
    int am=1,
    ac=(  c==1 ? 0 : 1%c);

    for(int i=1;i<=n-1;i++){
        int ch;
        if( s[i-1] =='1') ch=2;
        else ch =i-1;

        am = (am*( ch%MOD))%MOD;

        if(c != 1) ac  =(ac*(ch%c))%c;
    }
    if( ac%c !=0) cout<<am<<endl;
    else cout<<-1<<endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--)radhe();
    return 0;
}
