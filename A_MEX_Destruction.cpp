#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    int n, k = 0;
    cin >> n;
    int a[n], c = 0, f = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i]; 
        if(a[i] == 0){
            c += f;
            f = 0;
        }
        else f = 1;
    }
    c += f;
    cout << min(c, 2ll) << endl;
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)	sol();
    return 0;
}