#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for(int &i : a) cin >> i;
    for(int &i : b) cin >> i;
    for(int vl = 0; vl < pow(2, 9); vl++){
        vector<int> v;
        for(int i = 1; i < (1 << 9); i <<= 1) {
            if((vl & i) == 0) v.push_back(i);
        }
        int ok = 1;
        for(int i:a){
            int got = 0;
            for(int j:b){
                int _val = i&j;
                int allok = 1;
                for(int p:v){
                    if(_val&p) {
                        allok = 0;
                        break;
                    }
                }
                if(allok) {
                    //cout << i << ' ' << j << endl;
                    got = 1;
                    break;
                }
            }
            if(!got) {
                ok = 0;
                break;
            }
        }
        if(ok){
            cout << vl << "\n";
            return;
        }
    }
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    while(t--)	sol();
    return 0;
}