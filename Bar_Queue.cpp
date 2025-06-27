#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    int n;
    string s;
    cin >> n >> s;
    int b = 0, g = 0;
    for(int i = 0; i < s.size() and b <= g * 2; i++){
        if(s[i] == 'G') g++;
        else b++;
    }
    cout << b + g << "\n";
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)	sol();
    return 0;
}