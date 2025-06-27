#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    int n, m, q;
    cin >> n >> m >> q;
    int a[m];
    for(int i = 0; i < m; i++) cin >> a[i];
    sort(a, a + m);
    while(q--){
        int p, ans;
        cin >> p;
        if(a[0] > p) ans = a[0] - 1;
        else if(a[m - 1] < p) ans = n - a[m - 1];
        else{
                int y = upper_bound(a, a + m, p) - a;
                int x = y - 1;
                int gao = a[y] - a[x];
                ans = gao / 2;
        }
        cout << ans << "\n";
    }
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)	sol();
    return 0;
}