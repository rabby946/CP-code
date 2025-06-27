#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    int n, m, l, r;
    cin >> n >> m >> l >> r;
    int gap = abs(m - n);
    int cut = min(abs(l), gap);
    gap -= cut;
    l += cut;
    r -= gap;
    cout << l << " " << r << endl;
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)	sol();
    return 0;
}