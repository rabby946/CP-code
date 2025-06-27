#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
#define int long long
int hi = 1e18;
void sol(){
    int n, k;
    cin >> n >> k;
    int a[n], b[n], c[n]{};
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }
    multiset<pair<pair<int, int>, int>> m;
    for(int i = 0; i < n; i++) {
        m.insert({{a[i] - b[i], hi - b[i]}, i});
    }
    //for(auto it:m) cout << it.first << endl;
    while(k--){
        auto it = *(--m.end());
        int rem = it.first.first;
        int _b = hi - it.first.second;
        int idx = it.second;
        c[idx]++;
        m.erase((--m.end()));
        m.insert({{rem - _b, hi - _b}, idx});
        // cout << idx << endl;
        if(rem < 0){
            for(int i = 0; i < n; i++) {
                cout << "0 ";
            }
            cout << endl;
            return;
        }
        cout << rem << ' ' << idx << endl;
    }
    for(auto it : c) cout << it << ' '; cout << endl;
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
 //   cin >> t;
    while(t--)	sol();
    return 0;
}