#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    set<int> s;
    int n;
    cin >> n;
    int a[n][n], p[n * 2] {};
    for(int i = 0; i < 2 * n; i++) s.insert(i + 1);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
            p[i + j + 1] = a[i][j];
            s.erase(p[i + j + 1]);
        }
    }
    //fill permutation
    for(int i = 0; i < 2 * n; i++) {
        if(p[i]) continue;
        p[i] = *s.begin();
        s.erase(p[i]);
    }
    s.clear();
    for(int i = 0; i < 2 * n; i++){
            cout << p[i] << " ";
    }
    cout << "\n";
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)	sol();
    return 0;
}