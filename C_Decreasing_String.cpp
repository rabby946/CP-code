#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    string s, str;
    int pos;
    cin >> s >> pos; 
    int sz = s.length();
    int n = sz;    
    while(pos > sz){
        pos -= sz;
        sz--;
    }
    vector<int> v[26];
    for(int i = n - 1; i >= 0; i--){
        v[s[i] - 'a'].push_back(i);
    }
    int lastPick = -1;
    while(sz){
        for(int i = 0; i < 26; i++){
            if(v[i].empty()) continue;
            vector<int> &vc = v[i];
            while(vc.size() > 0 and vc.back() <= lastPick) vc.pop_back();
            if(vc.size() > 0){
                if(vc.back() > n - sz) continue;
                str.push_back(s[vc.back()]);
                lastPick = vc.back();
                vc.pop_back();
                break;
            }
        }
        sz--;
    }
    cout << str[pos - 1];
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)	sol();
    return 0;
}