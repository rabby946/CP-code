#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
#define int long long
string s[10];
int n, m, d;
int get(pair<int, int> x, pair<int, int> y){
    int c = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            int dixFromX = abs(x.first  - i) + abs(x.second - j);
            int dixFromY = abs(y.first  - i) + abs(y.second - j);
            if(dixFromX <= d || dixFromY <= d) c += s[i][j] == '.';
        }
    }
    return c;  
}
void sol(){
    cin >> n >> m >> d;
    for(int i = 0; i < n; i++) {
        cin >> s[i];
    }
    vector<pair<int, int>> v;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(s[i][j] == '.') {
                v.push_back({i, j});
            }
        }
    }
    int ans = 0;
    for(int i = 0; i < v.size(); i++) {
        for(int j = 0; j < v.size(); j++) ans =  max(ans, get(v[i], v[j]));
    }
    cout << ans << "\n";
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    // cin >> t;
    while(t--)	sol();
    return 0;
}