// // Radhe Radhe
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// void dib(){
//   int n,k;
//   cin>>n>>k;
//   vector<int> a(n);
//   for(int i=0;i<n;i++) cin>>a[i];
//   int l=0;
//   int r=n-1;
//   int temp=k;
//   int ans=0;
//   bool flag = true;
//   while(temp && l<=r){
//     // cout<<l<<" "<<ans<<" "<<r<<" "<<temp<<endl;
//     int x = a[l];
//     int y = a[r];
//     if(l==r){
//       if(temp>=x){
//         ans++;
//         break;
//       }else{
//         break;
//       }
//     }
//     if(x<y){
//       if(flag){
//         if(temp>= (x*2-1)){
//           temp-= x*2 -1;
//           // cout<<temp<< " " << x<<endl;
//           ans++;
//           l++;
//           flag = false;
//           a[r]-=x-1;
//         }else{
//           break;
//         }
//       }else{
//         if(temp >= x*2){
//           temp-=x*2;
//           ans++;
//           l++;
//           a[r]-=x; 
//         }else{
//           break;
//         }
//       }
//     }else if(x==y){
//       if(flag){
//         if(temp>=(x*2 -1) ){
//         temp-=x*2 -1;
//         ans++;
//         flag = (!flag);
//         a[r]-=x-1;
//         l++;
//       }else{
//         break;
//       }
//       }else{
//          if(temp>=(x*2 -1) ){
//         temp-=x*2 -1;
//         ans++;
//         flag = (!flag);
//         a[l]-=x-1;
//         r--;
//        }else{
//          break;
//       }
//       }
      
//     }else{
//       if(flag){
//         if(temp >=y*2){
//           temp-=y*2;
//           ans++;
//           r--;
//           a[l]-=y;
//         }else break;
//       }else{
//         if(temp >=( y*2 -1)){
//           temp -= y*2 -1;
//           ans++;
//           a[l]-= y-1;
//           r--;
//           flag = true;
//         }else break;
//       }
//     }
//   }
//   cout<< ans<< endl;
// }

// int32_t main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) dib();
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int val =0;
	    map<int,int> m;
	    for(int i=1;i<=n;i++){
	        int x;
	        cin>>x;
	        if(x>1 && i!=n) val++;
	    }
	    // for(auto &it: m){
      //   cout<<it.first<<" "<<mx<<endl;
	    //     if(it.first != mx){
	    //         if(it.second>1) val++;
	    //     }
	    // }
	    cout<<val+1<<endl;
	}

}
