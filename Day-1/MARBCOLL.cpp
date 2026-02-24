// https://www.codechef.com/problems/MARBCOLL

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--) {
	    int n,m; cin>>n>>m;
	    set<int>s;
	    for(int i=0;i<n;i++) {
	        int x; cin>>x;
	        s.insert(x);
	    }
	    cout<<m-s.size()<<"\n";
	    
	    
	}
	
	return 0;

}
