#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    int n, m;
    cin >> n >> m;
    map<pair<int, int>, int> mp;
    int c = 0;
    while(m--){
        int x, y;
        cin >> x >> y;
        // knights move
        if(x + 2 <= n && y + 1 <= m) mp[{x + 2, y + 1}]++;
        if(x + 2 <= n && y - 1 >= 1) mp[{x + 2, y - 1}]++;
        if(x - 2 >= 1 && y + 1 <= m) mp[{x - 2, y + 1}]++;
        if(x - 2 >= 1 && y - 1 >= 1) mp[{x - 2, y - 1}]++;
        //more 4
        if(x + 1 <= n && y + 2 <= m) mp[{x + 1, y + 2}]++;
        if(x + 1 <= n && y - 2 >= 1) mp[{x + 1, y - 2}]++;
        if(x - 1 >= 1 && y + 2 <= m) mp[{x - 1, y + 2}]++;
        if(x - 1 >= 1 && y - 2 >= 1) mp[{x - 1, y - 2}]++;
        
    }
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    while(t--)	sol();
    return 0;
}