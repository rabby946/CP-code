#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    string s;
    cin >> s;
    for(int i = 1; i < s.length(); i++){
        if(s[i] == s[i-1]){
            cout << s[i] << s[i]  << '\n';
            return;
        }
    }
    for(int i = 1; i < s.size() - 1; i++) {
        if(s[i] != s[i + 1] and s[i] != s[i - 1] and s[i - 1] != s[i + 1]){
            cout << s[i - 1] << s[i] << s[i + 1] << '\n';
            return;
        }
    }
    cout << "-1\n";
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)	sol();
    return 0;
}