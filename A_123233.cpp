#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    if(s == "122333") cout << "Yes" << endl;
    else cout << "No" << endl;
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    while(t--)	sol();
    return 0;
}