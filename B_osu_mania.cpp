#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
  int n;
  cin >> n;
  string s[n]   ;
  for(int i=0;i<n;i++) cin >> s[i];
  for(int i = n - 1; i >= 0; i--){
    for(int j = 0; j < 4; j++){
        if(s[i][j] == '#'){
            cout << j + 1 << ' ';
        }
    }
  }
  cout << '\n';
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)	sol();
    return 0;
}