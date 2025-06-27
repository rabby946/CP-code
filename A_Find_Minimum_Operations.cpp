#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    int n, k;
    cin >> n >> k;
    if(k == 1) cout << n << "\n";
    else{
        vector<int> v;
        v.push_back(k);
        while(v.back() < n) v.push_back(v.back() * k);
        int ans = 0;
        for(int i = v.size() - 1; i >= 0; i--){
             //cout << v[i] << " " << n << endl;
            while(v[i] <= n){
                ans++;
                n -= v[i];
            }
            
        }
        cout << ans + n << "\n";
    }
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)	sol();
    return 0;
}