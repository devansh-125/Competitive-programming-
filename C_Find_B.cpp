// //Radhe Radhe
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// void dib(){
//     int n,q;
//     cin>>n>>q;
//     vector<int> pre(n+1);
//     vector<int> one(n+1);
//     one[0] = 0;
//     pre[0] = 0;
//     for(int i=1;i<=n;i++){
//       int x;
//       cin>>x;
//       pre[i] = pre[i-1]+x;
//       one[i] = one[i-1];
//       if( x == 1) one[i]  += 1;
//     }
//     for(int i=0;i<q;i++){
//       int x , y;
//       cin>>x>>y;
//       int sum = pre[y] - pre[x-1];
//       int ct = one[y] - one[x-1];
//       int len = y-x +1;
//       // cout<<len<<" "<<sum << " "<< ct<<endl;
//       if( len == 1 ||  (sum < len*2 && sum<= ct*2)) cout<<"NO"<<endl;
//       else cout<<"YES"<<endl;
//     }

// }

// int32_t main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin>>t;

//     while(t--){
//         dib();
//     }
// }


// Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

void dib(){

    int n,q;
    cin>>n>>q;

    vector<int> pre(n+1,0);
    vector<int> one(n+1,0);

    for(int i=1;i<=n;i++){
        int x;
        cin>>x;

        pre[i] = pre[i-1] + x;
        one[i] = one[i-1] + (x==1);
    }

    while(q--){

        int l,r;
        cin>>l>>r;

        int sum = pre[r] - pre[l-1];
        int ones = one[r] - one[l-1];
        int len = r-l+1;

        if(len==1){
            cout<<"NO"<<endl;
            continue;
        }

        if(sum >= len + ones) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

int32_t main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        dib();
    }
}