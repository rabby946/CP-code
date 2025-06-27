#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    int n;
    cin >> n;
    if(n > 2 and n % 2 == 0)  cout << "YES\n";
    else cout << "NO\n";
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    while(t--)	sol();
    return 0;
}