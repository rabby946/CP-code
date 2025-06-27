#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    int n; cin >> n;
    int arr[n + 2];
    for(int i = 1; i <= n; i++) cin >> arr[i];
    int ans = 0;
    for(int i = 2; i <= n; i++){
        int z = i + (i - 1);
        if(arr[i] > z) continue;
        int x = (z % arr[i] + 1);
        int y = i - x;
        while(y >= 1){
            if(y + i == arr[i] * arr[y]) ans++;
            y -= arr[i]; 
        }
    }
    cout << ans << '\n';
}

signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)	sol();
    return 0;
}