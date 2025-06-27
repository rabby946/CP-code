#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
#define int long long
pair<int, int> fun(int x, int d){
    if(x < d) return {0, 0};
    int mid = (x + 1) / 2;
    int up = x / 2, div = (x + 1) / 2;
    pair<int, int> nw = fun(up, d);
    int ans = nw.first + nw.first + nw.second * div;
    if(x % 2) return {ans + div, nw.second * 2 + 1};
    return {ans, nw.second * 2};
}
void sol(){
    int x, d;
    cin >> x >> d;
     cout << fun(x, d).first << '\n';
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)	sol();
    return 0;
}