#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    int n, m;
    cin >> n >> m;
    map<int, int>mp;
    while(m--){
        int v;
        char c;
        cin >> v >> c;
        if(c == 'F' or mp[v] == 1){
            cout << "No\n";
            continue;
        }
        cout << "Yes\n";
        if(c == 'M') mp[v] = 1;
    }
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
   //cin >> t;
    while(t--)	sol();
    return 0;
}