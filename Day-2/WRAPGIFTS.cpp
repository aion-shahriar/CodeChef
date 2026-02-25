// https://www.codechef.com/problems/WRAPGIFTS

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t; cin>>t;
	while(t--) {
	    int h,l,w; cin>>h>>l>>w;
	    int area=(h*l+l*w+w*h)*2;
	    int gift_cnt=1000/area;
	    cout<<gift_cnt<<"\n";
	}
	return 0;

}
