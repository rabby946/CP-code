#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    int n, m, k;
    cin >> n >> m >> k;
    int a[n + 1];
    map<int, int> p, h;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        p[a[i]] = i;
    }
    int b[m + 1];
    for(int i = 1; i <= m; i++){
        cin >> b[i];
    }
    int id = 1;
    for(int i = 1; i <= m; i++){
        if(h[b[i]]) continue;
        h[b[i]] = 1;
        if(b[i] != a[id]){
            cout << "TIDAK\n";
            return;
        }
        h[b[i]] = 1;
        id++;
    }
    cout << "YA\n";
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)	sol();
    return 0;
}