#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    int n, k = 0;
    cin >> n;
    int a[n];
    map<int, int> m;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        m[a[i]]++;
    }
    int _n = n - 2;
    for(int i = 1; i*i < _n; i++){
        if(_n%i) continue;
        if(m[i] and m[_n/i]){
            cout << i << ' ' << _n / i << "\n";
            return;
        }
    }
    cout << sqrt(_n) << ' ' << sqrt(_n) << '\n';
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)	sol();
    return 0;
}