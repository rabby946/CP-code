#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    int n, k = 0;
    cin >> n;
    int a[n];
    set<int> set;
    for(int i = 0; i < n; i++){
        cin >> a[i]; 
        set.insert(a[i]);
    }
    if(set.size() == 1){
        cout << -1 << "\n";
        return;
    }
    int c = 1, mx = n;
    for(int i = 1; i < n; i++){
        if(a[i] == a[0]) c++;
        else {
            mx = min(c, mx);
            c = 0;
        }
    }
    mx = min(c, mx);
    cout << mx << endl;
    return;
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)	sol();
    return 0;
}