#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    int n, k, z;
    cin >> n >> k >> z;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i]; 
    }
    int ans = a[0], cur_sum = a[0];
    for(int i = 1; i < n and k > 0; i++){
        cur_sum += a[i];
        int tmp = cur_sum;
        k--;
        int backTimes = min(z, k / 2);
        tmp += backTimes * a[i - 1];
        tmp += backTimes * a[i];
        if(k % 2) tmp -= a[i];
        ans = max(ans, tmp);
    }
    cout << ans << endl;
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)	sol();
    return 0;
}