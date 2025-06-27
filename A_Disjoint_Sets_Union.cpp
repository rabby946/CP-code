#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5;
int par[N];
int get(int u){
    if(par[u] == u) return u;
    return par[u] = get(par[u]);
}
void add(int u, int v){
    par[u] = get(u);
    par[v] = get(v);
    if(par[u] == par[v]){
        if(par[v] == 0) {
            par[u] = v;
            par[v] = v;
        }
    }
    else par[par[u]] = par[v];
}
void check(int u, int v){
    par[u] = get(u);
    par[v] = get(v);
    if(par[u] == par[v]) cout << "YES\n";
    else cout << "NO\n";
}
int getDifference(string s, string str){
        int hour = stoi(str.substr(0, 2)) - stoi(s.substr(0, 2));
        int mint = stoi(str.substr(3, 2)) - stoi(s.substr(3, 2));
        cout << hour << ":" << mint << endl;
        return hour * 60 + mint;
    }
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cout << getDifference("01:01", "02:02");
    int n, m;
    cin >> n >> m;
    for(int i = 0; i <= n; i++) par[i] = i;
    while(m--){
        string s;
        int u, v;
        cin >> s >> u >> v;
        if(s == "union") add(u, v);
        else check(u, v);
    }
    return 0;
}