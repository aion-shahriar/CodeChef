// https://www.codechef.com/problems/STOPCOUNT

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t; cin>>t;
	while(t--) {
	    int n; cin>>n;
	    string s; cin>>s;
	    int o=0, z=0;
	    int cnt=0;
	    for(int i=0;i<n;i++) {
	        if(s[i]=='1') o++;
	        else z++;
	        
	        if(o>z) cnt++;
	    }
	    cout<<cnt<<"\n";
	}
	return 0;

}
