#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    int n, k = 0;
    cin >> n;
    int a[n], s = 0;
    map<int, int> m;
    for(int i = 0; i < n; i++){
        cin >> a[i]; 
        m[a[i]]++;
        if(m[a[i]] % 2 == 0) s++;
    }
    cout << s << endl;
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)	sol();
    return 0;
}