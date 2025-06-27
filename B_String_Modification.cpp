#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    int n;
    string s;
    cin >> n >> s;
    string str = s;
    int res = 1;
    for(int i = 1; i < n; i++) {
        string s1 = s.substr(0, i), s2 = s.substr(i, n - i);
        if((n - i) % 2) reverse(s1.begin(), s1.end());
        string _s = s2 + s1;
        if(_s < str) {
            str = _s;
            res = i + 1;
        }
    }
    cout << str << endl;
    cout << res << endl;
    
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)	sol();
    return 0;
}