#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    int n, k;
    cin >> n >> k;
    if(k == 1){
        for(int i = 0; i < n; i++) {
            cout << i + 1 << ' ';
        }
        cout << '\n';
        return;
    }
    int a[n] {};
    int c = 1;
    for(int i = k - 1; i < n; i += k) a[i] = c++;
    for(int i = 0; i < n; i++) {
        if(a[i] == 0) a[i]  = c++;
    }
    for(auto it : a) cout << it << ' '; cout << endl;
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)	sol();
    return 0;
}