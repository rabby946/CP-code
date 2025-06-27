#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    int n, k = 0;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i]; 
    }
    for(int i = 0; i < n; i++){
        bool b = true;
        for(int j = 0; j < n; j++) {
            if(i != j) b &= (abs(a[i] - a[j]) % k > 0);
        }
        if(b) {
            {
                cout << 'Y' << 'e' << 's' << endl;
                cout << i + 1 << endl;
                return ;
            }
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