// https://www.codechef.com/problems/BUYING7

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t; cin>>t;
	while(t--) {
	    int n,k; cin>>n>>k;
	    vector<int>a(n);
	    for(int i=0;i<n;i++) cin>>a[i];
	    sort(a.rbegin(), a.rend());
	    int res=0;
	    for(int i=0;i<k;i++) {
	        res+=a[i];
	    }
	    cout<<res<<"\n";
	}
	return 0;
}
