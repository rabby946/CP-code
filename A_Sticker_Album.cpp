#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    int n, m;
    cin >> n >> m;
    vector<int> v[n];
    int a[n];
    for(int i = 0; i < n; i++){
        int l;
        cin >> l >> a[i];
        while(l--){
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }
    map<int, int>mp;
    int c = 0, ans = 0, l = 0, r;
    for(int i = 0; i < n; i++){
        for(int x:v[i]) mp[x]++;
        c += a[i];
        ans += a[i];
        if(mp.size() == m) {
            r = i;
            break;
        }
    }
    if(mp.size() < m) {
        cout << -1 << "\n";
        return;
    }
    int lx = l, rx = r;
    while(r < n and l <= r){
        while(l <= r){
            for(int x:v[l]) {
                mp[x]--;
                if(mp[x] == 0) mp.erase(x);
            }
            c -= a[l];
            l++;
            if(mp.size() == m) {
                if(ans > c) {
                    ans = c;
                    lx = l;
                    rx = r;
                }
            }
            else break;
        }
        r++;
        while(r < n){
            for(int x:v[r]) mp[x]++;
            c += a[r];
            if(mp.size() == m){
                if(ans > c) {
                    ans = c;
                    lx = l;
                    rx = r;
                }
                break;
            }
            r++;
        }
    }
    cout << ans << "\n" << lx + 1 << " " << rx + 1 << "\n";
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 100;
    cout << t << "\n";
    while(t--){
        cout << rand() % 100 + 2 << ' ' << rand() % 100 + 2 << ' ' << rand() % 33 + 3 << endl;
    }
    return 0;
}