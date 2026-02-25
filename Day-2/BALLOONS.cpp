// https://www.codechef.com/problems/BALLOONS

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t; cin>>t;
	while(t--) {
	    int n; cin>>n;
	    vector<int>a(n);
	    for(int i=0;i<n;i++) cin>>a[i];
	    
	    long long int sum=0;
	    for(int i=0;i<n;i++) {
	        sum+=((i+1)*a[i]);
	    }
	    cout<<sum<<"\n";
	}
	return 0;

}
