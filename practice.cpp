// // Radhe Radhe
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

//   void maxSelectedElements(vector<int>& nums) {
//         int n = nums.size();
//         sort(nums.begin() , nums.end());
//         vector<int>dp(n+1 , 1);
//         int mx = nums[0];
//         int ct = 1;
//         for(int i=2;i<=n;i++){
//             int diff = nums[i-1] - mx; 
//             if(diff<0){
//                 dp[i] = dp[i-1];
//             }
//              else if(diff==0 || diff==1){
//                 ct++;
//                 dp[i] = max(dp[i-1] , ct);
//                 mx++;
//             }else if(mx == nums[i-2] && diff == 2){
//                 ct++;
//                 dp[i] = max(dp[i-1] , ct);
//                 mx = nums[i-1];
//             }else {
//                 dp[i] = dp[i-1];
//                 ct = 1;
//                 mx = nums[i-1];
//             }
//             if(i==12){
//                 cout<<ct<<" "<<dp[i]<<" "<<mx<<endl;
//             }
//         }

//         cout<< dp[n-1]<<endl;
//     }


// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin >> n;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++) cin >> a[i];

//     maxSelectedElements(a);
// }
