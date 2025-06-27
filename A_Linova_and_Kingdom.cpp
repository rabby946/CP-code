#include<bits/stdc++.h>
using namespace std;
#define int long long
void dfs(int v, int p, vector<int> &d, vector<int> *g, vector<int> &ss){
    ss[v] = 1;
    for(int u:g[v]){
        if(u != p){
            d[u] = d[v] + 1;
            dfs(u, v, d, g, ss);
            ss[v] += ss[u];  
        }
    }
}
void sol(){
    int n, m;
    cin >> n >> m;
    vector<int> g[n];
    for(int i = 1; i < n; i++){
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        g[u].push_back(v);
        g[v].push_back(u); 
    }
    vector<int> d(n, 0), ss(n, 0);
    dfs(0, 0, d, g, ss);
    vector<int> v;
    for(int i = 0; i < n; i++) {
        v.push_back(d[i] - ss[i] + 1);
    }
    sort(v.rbegin(), v.rend());
    cout << accumulate(v.begin(), v.begin() + m, 0ll) << '\n';
    return;
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
   // cin >> t;
    while(t--)	sol();
    return 0;
}