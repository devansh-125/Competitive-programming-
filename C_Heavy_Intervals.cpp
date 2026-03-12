// //Radhe Radhe
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// void dib(){
//   int n;
//   cin>>n;
//   vector<int> l(n);
//   vector<int> r(n);
//   vector<int> c(n);
//   for(int i=0;i<n;i++) cin>>l[i];
//   for(int i=0;i<n;i++) cin>>r[i];
//   for(int i=0;i<n;i++) cin>>c[i];
//   sort( l.begin(),l.end());
//   sort(r.begin() , r.end());
//   sort( c.begin() , c.end());
//   reverse( c.begin() , c.end());
//   int ans = 0;
//   vector<int> used;
//   for( int i=0;i<n;i++){
//     used.push_back( r[i] - l[i]);
//   }
//   sort(used.begin() , used.end());
//   for( int i=0;i<n;i++){
//     ans += used[i] * c[i];
//   }
//   cout<<ans<<endl;
//   // for(int i=0;i<n;i++){
//   //   cout<<l[i]<<" "<<r[i]<<" "<<" "<< r[i] - l[i] << " "<< used[i]<< " "<<c[i]<< endl;
//   // }
// }

// int32_t main(){
//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);

//   int t;
//   cin >> t;
//   while(t--) dib();
// }


//Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

void dib(){
    int n;
    cin>>n;

    vector<int> l(n), r(n), c(n);

    for(int i=0;i<n;i++) cin>>l[i];
    for(int i=0;i<n;i++) cin>>r[i];
    for(int i=0;i<n;i++) cin>>c[i];

    sort(r.begin(), r.end());

    multiset<int> st;
    for(int i=0;i<n;i++) st.insert(l[i]);

    vector<int> len;

    for(int i=0;i<n;i++){
        auto it = st.lower_bound(r[i]);

        if(it == st.begin()){
            it = st.begin();
        } 
        else{
            it--;
        }

        int x = *it;
        len.push_back(r[i] - x);
        st.erase(it);
    }

    sort(len.begin(), len.end());
    sort(c.begin(), c.end());
    reverse(c.begin(), c.end());

    int ans = 0;

    for(int i=0;i<n;i++){
        ans += len[i] * c[i];
    }

    cout<<ans<<endl;
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