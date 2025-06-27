#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    int n, k = 0;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i]; 
    }
    map<int, int> m;
    for(int i = 0; i < n; i++){
        m[a[i]]++;
    }
    int mx = 0;
    for(auto x : m){
        mx = max(mx, x.second);
    }
    cout << n - mx << "\n";
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)	sol();
    return 0;
}