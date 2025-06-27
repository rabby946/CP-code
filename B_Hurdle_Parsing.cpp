#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    string s;
    cin >> s;
    vector<int> v;
    int c = 0;
    for(int i = 1; i < s.size(); i++){
        if(s[i] == '-')c++;
        else{
            v.push_back(c);
            c = 0;
        }
    }
    for(auto it : v) cout << it << ' '; cout << endl;
}   
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    while(t--)	sol();
    return 0;
}