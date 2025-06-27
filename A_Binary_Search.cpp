#include <bits/stdc++.h>
using namespace std;

bool binarySearch(int n, int x, int a[]){
    int low = 0, high = n - 1;
    while(high >= low){
        int mid = (low + high) / 2;
        if(a[mid] == x)
            return true;
        if(a[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return false;  
}
int main(){
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    while(k--){
        int x;
        cin >> x;
        if(binarySearch(n, x, a)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}