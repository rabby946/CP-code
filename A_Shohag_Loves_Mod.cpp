#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    int n, c = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cout << i + c + 1 << ' ';
        c++;
    }
    cout << endl;
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)	sol();
    return 0;
}