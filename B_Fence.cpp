#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, k = 0;
    cin >> n >> k;
    int a[n + 1], p[n + 1] {};
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        p[i] = p[i - 1] + a[i];
    }
    int mx = 1e18, ps = 0;
    for(int i = 1; i + k - 1 <= n; i++){
        if(p[i + k - 1] - p[i - 1] <= mx){
            mx = p[i + k - 1] - p[i - 1];
            ps = i;
        }
    }
    cout << ps << endl;

    return 0;
}