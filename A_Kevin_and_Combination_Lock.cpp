#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
#define int long long
bool is_div(string s){
    int mv = 0, flg = 0;
    for(char c:s){
        if(c == '.') continue;
        flg = 1;
        mv = mv * 10 + (c - '0');
    }
    return mv % 33 == 0 and flg == 1;
}
bool is_pos(string &s){
    int n = s.length();
    vector<int> v;
    for(int i = 0; i < n; i++){
        if(s[i] == '3') v.push_back(i);
    }
    if(v.size() < 2) return is_div(s);
    bool ok = false;
    n = v.size();
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++){
            s[v[i]] = '.';
            s[v[j]] = '.';
            if(is_div(s)) ok = true;
            s[v[i]] = '3';
            s[v[j]] = '3';
        }
    }
    return ok or is_div(s);
}
void sol(){
    string s;
    cin >> s;
    // buffer remover
    cin.ignore();
    cout << (is_pos(s)? "YES" : "NO") << "\n";
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)	sol();
    return 0;
}