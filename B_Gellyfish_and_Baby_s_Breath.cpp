     
//Radhe Radhe

#include<bits/stdc++.h>
using namespace std;
#define int long long 

const int MOD = 998244353;
const int N = 100000 + 5;
int pw[N];

void precompute() {
    pw[0] = 1;
    for (int i = 1; i < N; i++) {
        pw[i] = (pw[i - 1] * 2) % MOD;
    }
}

void Devansh() {

    int n;
    cin >> n;

    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    int idxA = 0, idxB = 0; 
    vector<int> ans(n);

    for (int i = 0; i < n; i++) {
        if (a[i] > a[idxA]) idxA = i;
        if (b[i] > b[idxB]) idxB = i;

        
        int maxA = a[idxA];
        int maxB = b[idxB];
        if (maxA != maxB) {
            if (maxA > maxB) {
                ans[i] = (pw[maxA] + pw[b[i - idxA]]) % MOD;
            } 
            else {
                ans[i] = (pw[maxB] + pw[a[i - idxB]]) % MOD;
            }
        } 
        else {
            int val = max(b[i - idxA], a[i - idxB]);
            ans[i] = (pw[maxA] + pw[val]) % MOD;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int32_t main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    precompute();

    int t;
    cin >> t;
    while (t--) {
        Devansh();
    }

}

