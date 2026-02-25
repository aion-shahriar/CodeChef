// https://www.codechef.com/problems/TRAINEVOD

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t; cin>>t;
	while(t--) {
	    int n; cin>>n;
	    int e_sum=0, o_sum=0;
	    for(int i=0;i<n;i++) {
	        int x; cin>>x;
	        if(i%2==0) e_sum+=x;
	        else o_sum+=x;
	    }
	    cout<<max(e_sum,o_sum)<<"\n";
	}
	
	return 0;

}
