#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    int n, k = 0;
    cin >> n;
    int a[n];
    map<int, int>m;
    vector<int> v;
    for(int i = 0; i < n; i++){
        cin >> a[i]; 
        m[a[i]]++;
        if(m[a[i]] % 2 == 0) v.push_back(a[i]);
    }
    sort(v.begin(), v.end());
    if(v.size() < 4) cout << "NO\n";
    else{
        cout << "YES\n";
        n = v.size()  - 1;
        cout << v[0] << " " << v[1] << " " << v[0] << " " << v[n] << " ";
        cout << v[n - 1] << " " << v[1] << " " << v[n - 1] << " " << v[n] << "\n";
    }
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)	sol();
    return 0;
}