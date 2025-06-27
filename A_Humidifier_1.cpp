#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    int n;
    cin >> n;
    int a[n], t[n];
    for(int i = 0; i < n; i++) {
        cin >> t[i] >> a[i];
    }
    int s = 0, j = 0;
    for(int i = 1; i <= t[n - 1]; i++) {
        if(i == t[j]) s += a[j++];
        s -= i < t[n - 1];
        s = max(0ll, s);
    }
    cout << s << "\n";
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    while(t--)	sol();
    return 0;
}