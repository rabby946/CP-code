// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#define int long long 
void sol(){
    int b, c, d, a = 0;
    cin >> b >> c >> d;
    for(int i = 0; i < 62; i++){
        int _b = ((b&(1ll<<i)) > 0)? 1:0;
        int _c = ((c&(1ll<<i)) > 0)? 1:0;
        int _d = ((d&(1ll<<i)) > 0)? 1:0;
        if(_b == _c and _c == _d ){
            continue;
        }
        else if(_b != _d){
            if(_b){
                if(_c == 0){
                    cout << "-1\n";
                    return;
                }
                a |= (1ll << i);
            }
            else{
                if(_c){
                    cout << "-1\n";
                    return;
                }
                a |= (1ll << i);
            }
        }
  
    }
    cout << a << '\n';
}
signed main() {
    // Write C++ code here
    int t;
    cin >> t;
    while(t--) sol();
    return 0;
}