// // Radhe Radhe
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// void dib(){
//   int n;
//   cin>>n;
//   string s;
//   cin>>s;
//   string ns = s;
//   sort( ns.begin(), ns.end());
//   vector<int> used;
//   for( int i=0;i<n;i++){
//     while( !used.empty() && ( used[used.back()] < used[i])) used.pop_back();
//     used.push_back(i);
//   }
//   int bit = 0;
//   int first = used[0];
//   for(int i=0;i<n;i++){
//     if( s[i] == first) bit++;
//   }
//   for(int i=0;i<used.size()/2;i++){
//     swap( s[used[i]] ,s[used[used.size() -1 -i]])
//   }
//   if(s == ns) cout<<used.size() - bit<<endl;
//   else cout<<-1<<endl;
// }

// int32_t main(){

//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;

//     while(t--){
//         dib();
//     }
// }


// Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define int long long

void dib(){

    int n;
    cin >> n;

    string s;
    cin >> s;
    string sorted_s = s;
    sort(sorted_s.begin(), sorted_s.end());

    vector<int> idx;
    for(int i = 0; i < n; i++){
        while(!idx.empty() && s[i] > s[idx.back()])
            idx.pop_back();
        idx.push_back(i);
    }

    int m = idx.size();

    char first = s[idx[0]];
    int dup = 0;

    for(int i : idx){
        if(s[i] == first)
            dup++;
    }
    for(int i = 0; i < m/2; i++){
        swap(s[idx[i]], s[idx[m-1-i]]);
    }

    if(is_sorted(s.begin(), s.end()))
        cout << m - dup << endl;
    else
        cout << -1 << endl;
}

int32_t main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        dib();
    }
}
