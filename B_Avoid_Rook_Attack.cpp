#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    string s[8];
    for(int i = 0; i < 8; i++) cin >> s[i];
    map<int, int> l, r;
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(s[i][j] == '#'){
                l[i] = 1;
                r[j] = 1;
            }
        }
    }
    int ans = 0;
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(s[i][j] == '.'){
                if(l[i] == 1 or r[j] == 1) continue;
                ans++;
            }
        }
    }   
    cout << ans << "\n";
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    while(t--)	sol();
    return 0;
}