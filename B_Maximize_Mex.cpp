#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    int n, k = 0;
    cin >> n >> k;
    int a[n];
    map<int, int> m;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        m[a[i]]++; 
    }
    int mex = 0;
    while(m[mex]){
        m[mex + k] += m[mex] - 1;
        mex++;
    }
    cout << mex << "\n";
    return;
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)	sol();
    return 0;
}