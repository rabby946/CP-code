#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    string s;
    cin >> s;
    for(char c:s){
        if(c != '.') cout << c;
    }
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
 //   cin >> t;
    while(t--)	sol();
    return 0;
}