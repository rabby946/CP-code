#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e9 + 7;
int get(int l, int r){
    int ret = 1;
    while(l <= r){
        ret *= l;
        ret %= N;
        l++;
    }
    return ret;
}
const int md = 1e9 + 7;
int mod_exp(int base, int exp, int mod) {
    int result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (1LL * result * base) % mod;
        }
        base = (1LL * base * base) % mod;
        exp /= 2;
    }
    return result;
}
 
int p_q(int p, int q) {
    int q_inv = mod_exp(q % md, md - 2, md);
    return (1LL * p * q_inv) % md;
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    int ans = (get(n, n * 2 - 1) * 2) % N;
    cout << (p_q(ans, get(1, n)) - n + N) % N;
    return 0;
}