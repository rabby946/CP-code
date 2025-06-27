#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    cout << (s == "ABC" ?  "Yes" : "No") << endl;
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    while(t--)	sol();
    return 0;
}