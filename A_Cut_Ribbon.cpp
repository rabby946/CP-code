// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int dp[n + 1] = {0}, reachable[n + 1] = {0};
    reachable[0] = 1;
    dp[n] = 1;
    for(int i = 1; i <= n; i++){
        if(i - a >= 0){
            dp[i] = max(dp[i], dp[i - a] + 1);
        }
        if(i - b >= 0){
            dp[i] = max(dp[i], dp[i - b] + 1);
        }
        if(i - c >= 0){
            dp[i] = max(dp[i], dp[i - c] + 1);
        }
        if(dp[i] > 0) reachable[i] = 1;
    }
    cout << dp[n];
    return 0;
}