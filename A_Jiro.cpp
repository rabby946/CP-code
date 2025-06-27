#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
 // ab, ac, bc
    char a, b, c;   
    cin >> a >> b >> c;
    int A = 0, B = 0, C = 0;
    if(a == '>') A += 1;
    else B += 1;
    if(b == '>') A += 1;
    else C += 1;
    if(c == '>') B += 1;
    else C += 1;
    if(A == 1) cout << 'A';
    else if(B == 1) cout << 'B';
    else cout << 'C';
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    // cin >> t;
    while(t--)	sol();
    return 0;
}