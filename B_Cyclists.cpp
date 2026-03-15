// #include <bits/stdc++.h>
// using namespace std;

// int play(int n, int k, int p, int m, vector<int> &v){

//     vector<pair<int,bool>> d;

//     for(int i=0;i<n;i++){
//         if(i==p-1) d.push_back({v[i],true});
//         else d.push_back({v[i],false});
//     }

//     int money = m;
//     int win = 0;

//     while(true){

//         int w = min(k,(int)d.size());
//         int pos = -1;

//         for(int i=0;i<w;i++){
//             if(d[i].second){
//                 pos = i;
//                 break;
//             }
//         }
//         if(pos!=-1){
//             if(d[pos].first <= money){

//                 money -= d[pos].first;

//                 auto x = d[pos];
//                 d.erase(d.begin()+pos);
//                 d.push_back(x);

//                 win++;
//                 continue;
//             }
//             else break;
//         }

//         int idx = -1;

//         for(int i=0;i<w;i++){
//             if(d[i].first <= money){
//                 if(idx==-1 || d[i].first < d[idx].first){
//                     idx = i;
//                 }
//             }
//         }

//         if(idx==-1) break;

//         auto x = d[idx];

//         money -= x.first;

//         d.erase(d.begin()+idx);
//         d.push_back(x);
//     }

//     return win;
// }

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;

//     while(t--){
//         int n,k,p,m;
//         cin >> n >> k >> p >> m;

//         vector<int> v(n);
//         for(int i=0;i<n;i++) cin >> v[i];

//         cout << play(n,k,p,m,v) << endl;
//     }

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n,k,p,m;
    cin >> n >> k >> p >> m;

    vector<pair<int,bool>> d;

    for(int i=0;i<n;i++){
        int x;
        cin >> x;

        if(i==p-1) d.push_back({x,true});
        else d.push_back({x,false});
    }

    int win = 0;

    while(true){

        int w = min(k,(int)d.size());
        int pos = -1;

        for(int i=0;i<w;i++){
            if(d[i].second){
                pos = i;
                break;
            }
        }

        if(pos!=-1){

            if(m >= d[pos].first){

                m -= d[pos].first;

                auto x = d[pos];
                d.erase(d.begin()+pos);
                d.push_back(x);

                win++;
            }
            else break;
        }
        else{

            int idx = -1;
            int mn = 1e9;

            for(int i=0;i<w;i++){
                if(d[i].first < mn){
                    mn = d[i].first;
                    idx = i;
                }
            }

            if(idx!=-1 && m>=mn){

                m -= mn;

                auto x = d[idx];
                d.erase(d.begin()+idx);
                d.push_back(x);
            }
            else break;
        }
    }

    cout << win << endl;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}