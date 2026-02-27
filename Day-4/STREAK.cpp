// https://www.codechef.com/problems/STREAK

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t; cin>>t;
	while(t--) {
	    int n; cin>>n;
	    vector<int>a(n);
	    for(int i=0;i<n;i++) cin>>a[i];
	    int cnt=0, mx_cnt=0;
	    for(int i=0;i<n;i++) {
	        if(a[i]!=0) {
	            cnt++;
	            if(cnt>mx_cnt) {
	                mx_cnt=cnt;
	            }
	        }
	        else {
	            cnt=0;
	        }
	    }
	    cout<<mx_cnt<<"\n";
	}
	return 0;

}
