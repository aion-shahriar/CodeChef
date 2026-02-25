// https://www.codechef.com/problems/PIZZACOMP?tab=statement

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t; cin>>t;
	while(t--) {
	    int a,b; cin>>a>>b;
	    double a_cost=a/100.0;
	    double b_cost=b/225.0;
	    
	    if(a_cost==b_cost) cout<<"Equal\n";
	    else if(a_cost<b_cost) cout<<"Small\n";
	    else cout<<"Large\n";
	    
	}
	return 0;

}
