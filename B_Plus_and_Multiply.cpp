#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    int a, b, n;
    cin >> a >> b >> n;
    int base = 1;
    while(base <= n){
        if((n - base) % b == 0) {
            cout << 'Y' << 'e' << 's' << endl;
            return ;
        }
        base *= a;
    }
    {
        cout << 'N' << 'o' << endl;
        return ;
    }
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)	sol();
    return 0;
}