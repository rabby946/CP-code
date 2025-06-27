#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    int n;
    cin >> n;
    string s = "aeiou";
    int t = n / 5, r = n % 5;
    for(int i = 0; i < 5; i++){
        int _t = t;
        while(_t--) cout << s[i];
        if(r){
            cout << s[i];
            r--;
        }
    }
    cout  << endl;
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)	sol();
    return 0;
}