#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 1, mod = 1e9 + 7;
int  dp[N][10];

void sol(){
    int s, n;
    cin >> s >> n;
    int ans = 0;
    while(s){
        ans += dp[n][s % 10];
        s /= 10;
        ans %= mod;
    }
    cout << ans << "\n";
    return;
}

signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;
    for(int i = 0; i < 9; i++) dp[i][1] = 1;
    dp[9][1] = 2;
    for(int i = 2; i < N; i++) {
        for(int j = 1; j < 9; j++) dp[i][j] = dp[i - 1][j - 1];
        dp[i][9] = (dp[i - 1][0] + dp[i - 1][1]) % mod;
    }
    while(t--)	sol();
    return 0;
}