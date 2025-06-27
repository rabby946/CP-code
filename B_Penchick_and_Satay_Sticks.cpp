#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5;
int a[N], h[N][100];
signed main(){
    int n, Q;
    cin >> n >> Q;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        for(int j = 1; j <= 50; j++)  h[i][j] = h[i - 1][j];
        h[i][a[i]]++;
    }   
    while(Q--){
        int l, r;
        cin >> l >> r;
        int c = 0;
        for(int i = 1; i <= 50; i++){
            if((h[r][i] - h[l - 1][i]) % 2) c++;
            if(c > 1) break;
        }
        if(c > 1) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}