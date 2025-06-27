#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    int n, k;
    cin >> n >> k;
    int c = 0, s = n - k + 1;
    if(s%2) c = k / 2 + k % 2;
    else c = k / 2;
    cout << (c % 2 == 0 ? "YES" : "NO") << '\n';
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)	sol();
    return 0;
}