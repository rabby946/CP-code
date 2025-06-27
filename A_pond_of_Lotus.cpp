#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    int n, p, c = 0;
    cin >> n >> p;
    while(n) {
        c += (n & 1) > 0;
        n >>= 1;
    }
    cout << (c * p) << endl;   
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)	sol();
    return 0;
}