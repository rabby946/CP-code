#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    int n;
    string s;
    cin >> n >> s;
    int i  = 0, j = n - 1;
    while(i < n and s[i] != 'p') i++;
    while(j >= 0 and s[j] != 's') j--;
    // cout << i << ' ' << j << endl;
    if (!(i > j or i == n or j == -1)) cout << "NO" << endl;
    else{
        int a[n], lp = -1, c = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == 'p'){
                for(int j = i; j > lp; j--) a[j] = ++c;
                lp = i;
            }
        }
        for(int j = n - 1; j > lp; j--) a[j] = ++c;
        set<int>st;
        for(int i = n - 1; i >= 0; i--){
            st.insert(a[i]);
            if(s[i] == 's'){
                if(st.size() != n - i or *(--st.end()) > n - i) {
                    cout << 'N' << 'o' << endl;
                    return ;
                }
            }
        }
        {
        cout << 'Y' << 'e' << 's' << endl;
        return ;
    }
    }
    
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)	sol();
    return 0;
}