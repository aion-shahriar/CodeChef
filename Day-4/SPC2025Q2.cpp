// https://www.codechef.com/problems/SPC2025Q2

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t; cin>>t;
	while(t--) {
	    int n,k,p; cin>>n>>k>>p;
	    long long int sum=0;
	    int mx=INT_MIN;
	    vector<int>a(n);
	    for(int i=0;i<n;i++) {
	        cin>>a[i];
	        sum+=a[i];
	        mx=max(mx,a[i]);
	    }
	    int varun=sum-mx+p;
	    int ved=mx+k;
	    if(varun==ved) cout<<"Equal\n";
	    else if(varun<ved) cout<<"Ved\n";
	    else cout<<"Varun\n";
	}
	return 0;

}
