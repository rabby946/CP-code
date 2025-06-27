#include<bits/stdc++.h>
using namespace std;
#define int long long
bool all(int a[]){
    for(int i = 0; i < 5; i++){
        if(a[i] == 0) return false;
    }
    return true;
}
bool isv(char s){
    return s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u';
}
long long countOfSubstrings(string s, int k) {
        string pat = "aeiou";
        int vc = 0, got, a[5] {};
        int l = 0, r = 0, cnt = 0;
        while(r < k + vc and r < s.size()){
             got = 0;
                for(int p = 0; p < 5; p++){
                    if(pat[p] == s[r]){
                        a[p]++;
                        got = 1;
                        break;
                    }
                }
            vc += got;
            r++;
        }
        if(s.size() == r) {
            if(s.size() - vc != k) return 0;
        }
        cnt += all(a);
        while(l <= r){
            got = 0;
                for(int p = 0; p < 5; p++){
                    if(pat[p] == s[l]){
                        a[p]--;
                        got = 1;
                        break;
                    }
                }
                if(got == 0) break;
                cnt += all(a);
                l++;
        }
       // return r;
       cout << r << ' ';
        while(r < s.size()){
            got = 0;
            while(r < s.size()){
                got = 0;
                for(int p = 0; p < 5; p++){
                    if(pat[p] == s[r]){
                        a[p]++;
                        got = 1;
                        break;
                    }
                }
                r++;
                if(got == 0) break;
                cnt += all(a);
            }
            if(r == s.size() and isv(s.back())) {
                //cnt += all(a);
                break;
            }
            while(l < r){
                got = 0;
                for(int p = 0; p < 5; p++){
                    if(pat[p] == s[l]){
                        a[p]--;
                        got = 1;
                        break;
                    }
                }
                l++;
                if(got == 0) break;
                cnt += all(a);
            }
            cnt += all(a);
        }
        return cnt;
    }

signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   cout << countOfSubstrings("iqeaouqi", 2);
    return 0;
}