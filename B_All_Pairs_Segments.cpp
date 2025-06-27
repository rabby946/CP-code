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
    sort(a, a + n);
    int cnt = 0, lp = -1;
    map<int, int>m;
    for(int i = 0; i < n; i++){
        if(i) m[cnt] += a[i] - a[i - 1] - 1; 
        cnt += (n - i - 1);
        m[cnt]++;
        cnt -= i;
    }
    while(k--){
        int x;
        cin >> x;
         cout << m[x] << " \n"[k == 0];
    }
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)	sol();
    return 0;
}