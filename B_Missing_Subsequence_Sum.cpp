#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    int n, k;
    cin >> n >> k;
    vector<int> v;
    int target = k - 1;
    for(int i = 1; i < (1 << 30) and target > 0; i <<= 1) {
        if(i >= target){
            v.push_back(target);
            break;
        }
        target -= i;
    }
    int sum = 2 * k;
    v.push_back(k + 1);
    while(sum < n){
        v.push_back(sum + 1);
        sum += v.back();
    }
    cout << v.size() << "\n";
    for(int i = 0; i < v.size(); i++) cout << v[i] << " ";
    cout << "\n";
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)	sol();
    return 0;
}