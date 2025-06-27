#include<bits/stdc++.h>
using namespace std;
#define int long long
char qry(int l, int r, int x, int y){
    cout << "? " << l << ' ' << r << ' ' << x << ' ' << y << "\n";
    char ans;
    cin >> ans;
    return ans;
}
void out(int l, int r){
    printf("! %lld %lld\n", l, r);
    return;
}
void sol(){
    int n;
    cin >> n;
    int mx = 0, lastPick = 0;
    for(int i = 1; i < n; i++){
        char ch = qry(mx, mx, i, i);
        if(ch == '<'){
            mx = i;
            lastPick = i;
        }
    }
    vector<int> v;
    int mn = 0;
    for(int i = 0; i < n; i++){
        char ch = qry(mx, mn, mx, i);
        if(ch == '<') {
            v.clear();
            v.push_back(i);
            mn = i;
        }
        else if(ch == '='){
            v.push_back(i);
        }
    }

    mn = v.front();
    for(int i = 1; i < v.size(); i++){
        char ch = qry(mn, mn, v[i], v[i]);
        if(ch == '>'){
            mn = v[i];
        }
    }
    out(mx, mn);
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)	sol();
    return 0;
}