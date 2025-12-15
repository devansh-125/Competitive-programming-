// Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

void dib(){
  int n;
  cin>>n;
  if(n%2 != 0){
     if (n<27) cout<<-1<<endl;
            else {
                cout<<"1 3 3 4 4 5 5 6 6 1 2 7 7 8 8 9 9 10 10 11 11 12 12 13 13 1 2 ";
                for (int i=14;i<=n/2;i++) cout<<i<<" "<<i<<" ";
                cout<<endl;
                return ;
            }
  }else{
    for(int i=1;i<=n/2;i++){
      cout<<i<<" "<<i<<" ";
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
