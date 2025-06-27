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
    sort(a, a + n);
    multiset<int> m;
    for(int i = 1; i < n; i++) k = __gcd(k, a[i]  - a[i - 1]);
    // cout << k << endl;
    for(int i = 0; i < n; i++) {
        m.insert(a[i]);
    }
    int c = 0, ls = -1, gap = *(--m.end()) - *m.begin();
    gap /= k;
    gap *= n;
    while(*m.begin() != *(--m.end())) {
        if(c > gap) {
            cout << "-1\n";
            return;
        }
        ls = *m.begin();
        int hi = *(--m.end());
        if(c % 2 == 0){
            m.erase(m.begin());
            m.insert(ls + k);
        }
        else{
            m.erase(--m.end());
            m.insert(hi - k);
        }
        c++;
    }
    cout << c << "\n";
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
 //   cin >> t;
    while(t--)	sol();
    return 0;
}