#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    int n, k = 0;
    cin >> n >> k;
    int a[n], mx = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        mx = max(mx, a[i]); 
    }
    while(k--){
        char c;
        int l, r;
        cin >> c >> l >> r;
        if(c == '+'){
            if(l <= mx && mx <= r)  mx++;
        }
        else{
            if(l <= mx && mx <= r)  mx--;
        }
        cout << mx << " \n"[k == 0];
    }
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int t = 100000;
cout << t << endl;
    while(t--){
        cout << (t * t * t ) % 1000000000 << "\n";
    }
}