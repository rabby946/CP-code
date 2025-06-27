#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    int l, r, n;
    cin >> l >> r;
    if(l % 2 == 0) l++;
    n = (r - l + 1);
    int s = n / 3;
    s = n / 4;
    s += (n % 4 == 3);
    cout << s << "\n";
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)	sol();
    return 0;
}