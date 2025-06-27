#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    int c = 0;
    for(int i = 0; i < n - 2; i++){
        c += (s.substr(i, 3) == "ABC");
    }
    while(q--){
        int i;
        char toReplace;
        cin >> i >> toReplace;
        i--;
        if(s[i] == 'A'){
            if(i + 2 < n and s[i + 1] == 'B' && s[i + 2] == 'C') c--;
        }
        if(s[i] == 'B'){
            if(i > 0 and i < n - 1 and s[i + 1] == 'C' and s[i - 1] == 'A') c--;
        }
        if(s[i] == 'C'){
            if(i > 1 and s[i - 1] == 'B' and s[i - 2] == 'A') c--;
        }
        if(toReplace == 'A'){
            if(i + 2 < n and s[i + 1] == 'B' && s[i + 2] == 'C') c++;
        }
        if(toReplace == 'B'){
            if(i > 0 and i < n - 1 and s[i + 1] == 'C' and s[i - 1] == 'A') c++;
        }
        if(toReplace == 'C'){
            if(i > 1 and s[i - 1] == 'B' and s[i - 2] == 'A') c++;
        }
        s[i] = toReplace;
        cout << c << endl;
    }
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    //cin >> t;
    while(t--)	sol();
    return 0;
}