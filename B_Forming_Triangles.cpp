#include <iostream>
#include <random>
#include <stack>
#include <string>
#define int long long
using namespace std;

// Function to generate a random integer within a specified range
int generate_random_integer(int min, int max) {
    int vl = rand()%1000000;
    return vl*vl*vl;
}
// Function to generate a random valid expression
void generate_random_expression(int depth) {
    int t = 1e3;
    while(t--){   
        if(t%77){
            cout <<'(';
        cout << rand()  + 1;
        cout << '+';
        cout << rand() + 1;
        if(t) cout << '-';
        }
        else{
            cout <<'(';
        cout << rand()  + 1;
        cout << '+';
        cout << rand()  + 1;
        if(t) cout << '+';
        }
    }
    t = 1e3;
    while(t--){
        cout << '-';
        cout << rand() % 9 + 1;
        cout << '+';
        cout << rand()  + 1;
        cout << ')';
    }
}

int32_t main() {
    int t = 50;
    cout << t << endl;
    while(t--){
        int depth = 10; // Adjust the depth as needed
        generate_random_expression(depth);
    
        //cout << expression << endl;
    }
    

    return 0;
}