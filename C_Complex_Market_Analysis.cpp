#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e6;
int isp[N];
void sol(){
    int n, k = 0, ans = 0;
    cin >> n >> k;
    int a[n], dp[n], x[n];
    for(int i = 0; i < n; i++){
        cin >> a[i]; 
    }
    memset(dp, 0, sizeof(dp));
    memset(x, 0, sizeof(x));
    for(int i = n - 1; i >= 0; i--){
        if(a[i] == 1) {
            dp[i] = 1;
            if(i + k < n) dp[i] += dp[i + k];
        }
    }
    for(int i = 0; i < n; i++){
        if(a[i] == 1) {
            x[i] = 1;
            if(i - k >= 0) x[i] += x[i - k];
        }
    }
    for(int i = 0; i < n; i++){
        if(isp[a[i]]) continue;
        if(i - k >= 0 and i + k < n) ans += (dp[i + k] + 1) * (x[i - k] + 1) - 1;
        else if(i - k >= 0) ans += x[i - k];
        else if(i + k < n) ans += dp[i + k];
    }
    cout << ans << "\n";
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    isp[0] = isp[1] = 1;
    for(int i = 2; i*i <= N; i++){
        if(isp[i] == 0){
            for(int j = i*i; j < N; j += i){
                isp[j] = 1;
            }
        }
    }
    int t = 1;
    cin >> t;
    while(t--)	sol();
    return 0;
}