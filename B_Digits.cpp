#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
#define int long long
int factorialMod6(int n) {
    if (n <= 2) return n; 
    return 0;
}
int sumMod7(int nFactorialMod6) {
    int powerCycle[] = {3, 2, 6, 4, 5, 1};
    int cycleLength = 6;
    int sum = 0;
    for (int i = 0; i < nFactorialMod6; i++) {
        sum = (sum + powerCycle[i]) % 7;
    }
    return sum;
}
bool isDivisibleBy7(int n, int d) {
    int nFactorialMod6 = factorialMod6(n);
    int sum = sumMod7(nFactorialMod6);
    int result = (d * sum) % 7;
    return result == 0;
}
bool is_7(int n, int d){
    return isDivisibleBy7(n, d);
}
void sol(){
    int n, d;
    cin >> n >> d;
    
    for(int i = 1; i < 10; i+=2) {
        if(d % i == 0) cout << i << " ";
        else{
            if(i == 3 and n > 1) cout << i << " ";
            else if(i == 7) {
                if(n >= 6) cout << i << " ";
                else if(is_7(n, d)) cout << i << ' ';

            }
            else if(i == 9) {
                if(n >= 6) cout << i << " ";
                else{
                    int f = 1;
                    for(int j = 1; j <= n; j++) f *= j;
                    f *= d;
                    if(f % 9 == 0) cout << i << " ";
                }
            }
        }
    }
    cout << "\n";
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)	sol();
    return 0;
}