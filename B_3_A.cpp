#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    vector<int> v, vc;
    int vl = 1;
    for(int i = 0; i <= 10; i++) {
        v.push_back(vl);
        vl *= 3;
    }
    int n;
    cin >> n;
    while(n){
        while(v.back() > n) v.pop_back();
        vc.push_back(v.size() - 1);
        n -= v.back();
    }
    cout << vc.size() << endl;
    for(int x: vc) cout << x << " ";
    cout << "\n";
    return;  //remove this line to submit solution
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
 //   cin >> t;
    while(t--)	sol();
    return 0;
}