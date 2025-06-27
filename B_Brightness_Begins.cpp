#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    int k;
    cin >> k;
    int lo = 1, hi = 2 * k, res = 2e18;
    while(lo <= hi){
        int mid = (lo + hi) / 2;
        int cnt = mid - floor(sqrt(mid));
        if(cnt >= k) {
            res = mid;
            hi = mid - 1;
        }
        else lo = mid + 1;
        
    }
    cout << res << "\n";
    return;
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)	sol();
    return 0;
}