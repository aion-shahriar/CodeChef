// https://www.codechef.com/problems/BESTMOVIE

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t; cin>>t;
	while(t--) {
	    int n; cin>>n;
	    vector<pair<int,int>>vp(n);
	    int cnt=0;
	    for(int i=0;i<n;i++) {
	        int x,y; cin>>x>>y;
	        vp[i].first=x;
	        vp[i].second=y;
	        if(x<7) cnt++;
	        
	    }
	    if(cnt==n) cout<<-1<<"\n";
	    else {
	        int mn=INT_MAX;
	        for(int i=0;i<n;i++) {
	            if(vp[i].first>=7) {
	                mn=min(mn, vp[i].second);
	            }
	        }
	        cout<<mn<<"\n";
	    }
	    
	}
	return 0;

}
