#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
#define int long long
int get(int n){
    if(n < 4) return 1;
    return get(n / 4) * 2;
}
void sol(){
    int n;
    cin >> n;
    cout << get(n) << '\n';
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)	sol();
    return 0;
}