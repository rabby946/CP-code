#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    int n, a, b, c;
    cin >> n >> a >> b;
    c = min(a, b);
    cout << n / c + (n % c > 0) << endl;
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)	sol();
    return 0;
}