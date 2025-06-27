#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    int n, k = 0;
    cin >> n >> k;
    int a[n], c = 0, p = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i]; 
        if(a[i] >= k) p += a[i];
        if(a[i] == 0 and p) p--, c++; 
    }
    cout << c << endl;
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)	sol();
    return 0;
}