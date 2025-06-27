#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    int n, m;
    cin >> n >> m;
    int c = 0;
    for(int i = 1; i <= min((n << 1), m); i++){
        int vl = i ^ n;

        c += (vl % n == 0 or vl % i == 0);
    }
    cout << c << "\n";
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)	sol();
    return 0;
}