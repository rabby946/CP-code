#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    int n;
    cin >> n;
    map<pair<int, int>, int> c;
    vector<pair<int, int>> v(n);
    int a[n * 2 + 2]{};
    for(int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
        if(v[i].first == v[i].second) a[v[i].first]++;
        c[v[i]]++;
    }
    set<int>s;
    for(int i = 1; i < n * 2 + 2; i++) {
        if(a[i] == 0) s.insert(i);
    }
    for(int i = 0; i < n; i++) {
        if(v[i].second - v[i].first == 0){
            if(c[v[i]] == 1) cout << "1";
            else cout << "0";
        }
        else if(*s.lower_bound(v[i].first) > v[i].second) {
            cout << "0";
        }
        else cout << "1";
    }
    cout << '\n';
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)	sol();
    return 0;
}