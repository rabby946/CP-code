#include <bits/stdc++.h>
using namespace std;
set<int> S;
const int N = 300500;
int P[N];
int main()
{
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++) S.insert(i);
    int lx = 0;
    for(int i = 0; i < m; i++){   
        int l, r, x;
        cin >> l >> r >> x;
        set<int>::iterator itl = S.lower_bound(l);
        set<int>::iterator itr = S.upper_bound(r);
        for(set<int>::iterator it = itl; it != itr; it++){
            if(x != *it) P[*it] = x;
        }
        S.erase(itl, itr);
        S.insert(x);
    }
    for (int i = 1; i <= n; i++) cout << P[i] << ' ';
    return 0;
}
