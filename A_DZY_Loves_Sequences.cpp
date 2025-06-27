#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;
int binpow(int base, int exponent){
    int res = 1;
    while(exponent > 0){
        if(exponent % 2 == 1) res = (res * base) % mod;
        base = (base * base) % mod;
        exponent /= 2;
    }
    return res;
}
void sol(){
    string s;
    cin >> s;
    int ans = 1, flg = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '1') flg += 1;
        if(flg >= 1 && s[i] == '0') ans = (ans + binpow(2, s.size() - i - 1)) % mod;
    }
    if(flg == 1) ans = 0;
    cout << ans << "\n";
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;  
    while(t--)	sol();
    return 0;
}