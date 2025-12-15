// // Radhe Radhe
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// void dib(){
//    int n,k;
//    cin>>n>>k;
//    vector<int> a;
//    map<int,int> m;
//    for(int i=0;i<n;i++){
//     int x;
//     cin>>x;
//     if(!m[x]){
//       a.push_back(x);
//     }
//     m[x]++;
//    }
//    sort(a.begin() , a.end());
//    int ans=0;
//    for(int i=0;i<a.size();i++){
//     int temp=k;
//     int j=i;
//     int sum=0;
//     while(temp){
     
//       if(j<a.size()) sum+= m[a[j]];
//       if( j == a.size()-1 || (a[j+1] != (a[j] + 1)) ){
//         ans = max(ans , sum);
//         i = j;
//         break;
//       }
//       ans = max(sum,ans);
//       //  cout<<a[j]<<" "<<a[j+1] << " "<<temp<<" "<<ans<< endl;
//       temp--;
//       j++;
//     }
//     // cout<<ans<<" "<<a[i]<<endl;
//     ans = max(ans , m[a[a.size()-1]]);
//    }
//    cout<<ans<<endl;
   
// }

// int32_t main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while(t--) dib();
// }



// Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

void dib(){
    int n, k;
    cin >> n >> k;

    map<int,int> m;
    for(int i = 0; i < n; i++){
        int x; 
        cin >> x;
        m[x]++;
    }

    vector<int> a;
    for(auto &it : m) a.push_back(it.first);

    int l = 0;
    int sum = 0;
    int ans = 0;

    for(int r = 0; r < a.size(); r++){
        sum += m[a[r]];
        if(r > 0 && a[r] != a[r-1] + 1){
            l = r;
            sum = m[a[r]];
        }
        while(r - l + 1 > k){
            sum -= m[a[l]];
            l++;
        }

        ans = max(ans, sum);
    }

    cout << ans << endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) dib();
}
