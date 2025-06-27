#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol(){
    long long n,m;
		cin>>n>>m;
		map<int, int>mp;
		for(int i=1;i<=n;i++){
			int a;
			cin>>a;
			mp[a]++;
		}
		multiset<int>st;
		for(auto b:mp){
			st.insert(b.second);
		}
		int ans=st.size();
		for(int a:st){
			if(m>=a)ans--,m-=a;
		}cout<<max(1ll,ans)<<'\n';
}
signed main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)	sol();
    return 0;
}

