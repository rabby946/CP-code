#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    int n, k = 0;
    cin >> n;
    int a[n], mx1 = 0, mx2 = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i]; 
        if(i % 2) mx1 = max(mx1, a[i]);
        else mx2 = max(mx2, a[i]);
    }
    int ans = (n + 1) / 2 + mx2;
    cout << max(ans, n / 2 + mx1) << endl;
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)	sol();
    return 0;
}