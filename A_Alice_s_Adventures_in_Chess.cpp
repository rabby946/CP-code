#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, a, b;
        cin >> n >> a >> b;
        string s;
        cin >> s;
        int i = 100;
        int x = 0, y = 0;
        bool ck = false;
        while(i--){
            for(int i = 0; i < n; i++){
                if(s[i] == 'N'){
                    y++;
                }
                else if(s[i] == 'S'){
                    y--;
                }
                else if(s[i] == 'E'){
                    x++;
                }
                else if(s[i] == 'W'){
                    x--;
                }
                if(x == a && y == b){
                    ck = true;
                    break;
                }
            }
        }
        if(ck) cout << "YES\n";
        else cout << "NO\n";
    }
}