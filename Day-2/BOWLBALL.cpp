// https://www.codechef.com/problems/BOWLBALL

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t; cin>>t;
	while(t--) {
	    int n,x,y;
	    cin>>n>>x>>y;
	    int cnt=0;
	    for(int i=0;i<n;i++) {
	        int num; cin>>num;
	        if(num>=x && num<=y) cnt++;
	    }
	    cout<<cnt<<"\n";
	}
	return 0;
}
