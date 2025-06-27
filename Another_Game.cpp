#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    int n, k = 0;
    cin >> n;
    int a[n + 1], pos[n + 1], h[n + 1]{};
    for(int i = 1; i <= n; i++){
        cin >> a[i]; 
        pos[a[i]] = i;
    }
    int c = 0, ans = 0;
    for(int i = n; i > 0; i--){
        if(i == a[i]) continue;
        ans = max(ans, a[i]);
    }
    if(ans == 0) ans--;
    cout << ans + 1 << "\n";
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)	sol();
    return 0;
}