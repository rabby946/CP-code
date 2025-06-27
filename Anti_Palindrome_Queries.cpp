#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    int n, k = 0;
    cin >> n >> k;
    int a[n + 1];
    int p[n + 1][3];
    memset(p, 0, sizeof p);
    for(int i = 1; i <= n; i++){
        cin >> a[i]; 
        p[i][0] = p[i - 1][0];
        p[i][1] = p[i - 1][1];
        p[i][2] = p[i - 1][2];
        p[i][a[i] - 1]++;
    }
    while(k--){
        int l, r;
        cin >> l >> r;
        int x = p[r][0] - p[l-1][0], y = p[r][1] - p[l-1][1], z = p[r][2] - p[l-1][2];
        vector<int> v;
        v.push_back(x);
        v.push_back(y);
        v.push_back(z);
        sort(v.begin(), v.end());
        x = v[2], y = v[1], z = v[0];
        bool ok = true;
        if(x * 2 - 1 > x + y + z) ok = false;
        if(y + z != x and y + z != x - 1) ok = false;
        //cout << x << ' ' << y << ' ' << z << endl;
        if(ok and (r - l + 1) % 2 == 0) cout << "Yes\n";
        else cout << "No\n";
    }
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)	sol();
    return 0;
}