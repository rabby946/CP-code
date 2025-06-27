#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    int ans = 0;
    int s = 0;
    for(int i = 1;  i < n; i++){
        ans += v[i] - v[i - 1];
        ans -= v[i] * i;
        ans += s;
        s += v[i];
    }
    cout << ans << endl;
}
signed main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}