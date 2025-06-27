#include<bits/stdc++.h>
using namespace std;
#define int long long
class LazySegmentTree {
private:
    int n;
    vector<int> tree, lazy;
    void build(int node, int start, int end, const vector<int>& arr) {
        if(start == end) {
            tree[node] = arr[start];
        } 
        else{
            int mid = (start + end) / 2;
            build(2 * node, start, mid, arr);
            build(2 * node + 1, mid + 1, end, arr);
            tree[node] = min(tree[2 * node], tree[2 * node + 1]);
        }
    }
    void propagate(int node, int start, int end) {
        if(lazy[node] != 0) {
            tree[node] += lazy[node];
            if(start != end) { 
                lazy[2 * node] += lazy[node];
                lazy[2 * node + 1] += lazy[node];
            }
            lazy[node] = 0;
        }
    }
    void rangeUpdate(int node, int start, int end, int l, int r, int val) {
        propagate(node, start, end);
        if(start > r || end < l) return; 
        if(start >= l && end <= r) {
            lazy[node] += val;
            propagate(node, start, end);
            return;
        }
        int mid = (start + end) / 2;
        rangeUpdate(2 * node, start, mid, l, r, val);
        rangeUpdate(2 * node + 1, mid + 1, end, l, r, val);
        tree[node] = min(tree[2 * node], tree[2 * node + 1]);
    }
    int rangeQuery(int node, int start, int end, int l, int r) {
        propagate(node, start, end);
        if(start > r || end < l) return INT_MAX;
        if(start >= l && end <= r) return tree[node]; 
        int mid = (start + end) / 2;
        int leftMin = rangeQuery(2 * node, start, mid, l, r);
        int rightMin = rangeQuery(2 * node + 1, mid + 1, end, l, r);
        return min(leftMin, rightMin);
    }

public:
    LazySegmentTree(const vector<int>& arr) {
        n = arr.size();
        tree.resize(4 * n);
        lazy.resize(4 * n, 0);
        build(1, 0, n - 1, arr);
    }
    void update(int l, int r, int val) {
        rangeUpdate(1, 0, n - 1, l, r, val);
    }
    int query(int l, int r) {
        return rangeQuery(1, 0, n - 1, l, r);
    }
};

vector<int> calc(char s[]){
    vector<int> v;
    int vl = 0, c = 1;
    for(int i = 0; i < strlen(s); i++) {
        cout << s[i] << ' ';
        if(s[i] == '-'){
            c = -1;
            continue;
        }
        if(s[i] < '0' or s[i] > '9') {
            v.push_back(vl * c);
            c = vl = 0;
        }
        else {
            vl = vl * 10 + (s[i] - '0');
        }
    }
    cout << endl;
    return v;
}
void sol(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    LazySegmentTree segTree(a);
    int m;
    cin >> m;
    while(m--){
        char s[100];
        gets(s);
        vector<int> v = calc(s);
        int x, y, z;
        x = v[0], y = v[1];
        if(v.size() == 3) {
            z = v[2];
            if (x <= y) segTree.update(x, y, z);
            else{
                segTree.update(x, n - 1, z);
                segTree.update(0, y, z);
            }
            cout << segTree.query(0, n - 1) << ' ';
        }
        else
        {
            int res;
            if (x <= y) res = segTree.query(x, y);
            else res = min(segTree.query(x, n - 1), segTree.query(0, y));
            cout << res << "\n";
        }
    }
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
 //   cin >> t;
    while(t--)	sol();
    return 0;
}