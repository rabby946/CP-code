#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    int n, k = 0;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i]; 
    }
    multiset<int>m;
    for(int i = 0; i < n - 1; i++) {
        int mn = min(a[i], a[i + 1]);
        int mx = max(a[i], a[i + 1]);
        if(mn * 2 > mx) {
            cout << 'Y' << 'e' << 's' << endl;
            return ;
        }
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