#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    int n, d, k;
    cin >> n >> k >> d;
    vector<int> v[d + 12];
    int c = 0, t[n], cur = n, bl[d + 12]{};
    for(int i = 0; i < n; i++) {
        cin >> t[i];
    }
    sort(t, t + n);
    for(int i = 0; i < n; i++) v[1].push_back(i);
    for(int i = 1; i <= d; i++){
        cur += bl[i];
        for(int ele:v[i]){
            if(cur == k) break;
            v[i + t[ele]].push_back(ele);
            bl[i + t[ele]]++;
            cur--;
            c++;
        }
    }
    cout << c << "\n";
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)	sol();
    return 0;
}