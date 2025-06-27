#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
#define int long long
int minOpe[10005];
int dp[1005][12005];

void sol(){
    int n, k;
    cin >> n >> k;
    int b[n + 1], c[n + 1];
    for(int i = 1; i <= n; i++) cin >> b[i];
    for(int i = 1; i <= n; i++) cin >> c[i];
    k = min(k, n * 12);
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= k; j++) dp[i][j] = 0;
    }
    for(int i = 1; i <= n; i++) b[i] = minOpe[b[i]];
    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= k; j++){
            dp[i][j] = dp[i - 1][j];
            if(j >= b[i]) dp[i][j] = max(dp[i][j], dp[i - 1][j - b[i]] + c[i]);
        }
    }
    int res = 0;
    for(int i = 0; i <= k; i++) res = max(res, dp[n][i]);
    cout << res << "\n";
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;
    for(int i = 0; i <= 1000; i++){
        minOpe[i] = 1e18;
    }

    minOpe[1] = 0;
    int maxVal = 0;
    for(int i = 1; i <= 1000; i++){
        for(int x = 1; x <= 1000; x++){
            int val = i + i / x;
            minOpe[val] = min(minOpe[val], minOpe[i] + 1);
        }

        maxVal = max(maxVal, minOpe[i]);
    }
    while(t--)	sol();
    return 0;
}


