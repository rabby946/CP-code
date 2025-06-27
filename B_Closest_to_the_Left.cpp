#include <bits/stdc++.h>
using namespace std;
int ans;

void binarySearch(int n, int x, int a[]){
    int low = 0, high = n - 1;
    while(high >= low){
        int mid = (low + high) / 2;
        if(a[mid] <= x){
                ans = mid + 1;
                low = mid + 1;
            }
        else
            high = mid - 1;
    }
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
        ans = 0;
        binarySearch(n, x, a);
        cout << ans << endl;
    }
}