// https://www.codechef.com/problems/MULT3

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n; cin>>n;
	
	if(n%3==0) cout<<n<<"\n";
	else if((n+1)%3==0) cout<<n+1<<"\n";
	else cout<<n-1<<"\n";
	
	return 0;

}
