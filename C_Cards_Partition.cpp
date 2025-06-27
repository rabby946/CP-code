#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    int n, k = 0, sum = 0, m;
    cin >> n >> m;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i]; 
        k = max(k, a[i]);
        sum += a[i];
    }
    int next = (sum / k + 1) * k;
    if(next <= sum + m)
        cout << min((sum + m) / k , n) << endl;
    else{
        int sz = sum / k;
        // if(sum % k == 0){
        //     cout << sz << endl;
        //     return;
        // }
        for(int i = sz; i > 0; i--){
            if(sum % i == 0){
                cout << i << endl;
                return;
            }
            next = (sum / i + 1) * i;
            if(sum + m >= next){
                cout << i << endl;
                return;
            }
        }
    }
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)	sol();
    return 0;
}