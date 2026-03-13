// https://www.codechef.com/problems/CARDGAME1

#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL)

#define ll long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define print(x) cout << #x << '\n'


const ll MOD = 1e9 + 7;
const ll INF = 1e18;


// Vector Input (Generic)
template<typename T>
void inputVec(vector<T>& v) {
    for (auto &x : v)
        cin >> x;
}

// Print Vector
template<typename T>
void printVec(const vector<T>& v) {
    for (auto x : v)
        cout << x << " ";
    cout << endl;
}

void solve() {
    
    //int n; cin>>n;

    // int n, m; cin>>n>>m;
    
    // int a,b,c; cin>>a>>b>>c;
    
    

    // vector<int> v(n);
    // inputVec(v);   


    // printVec(v);
    
    int n,x; cin>>n>>x;
    
    int cnt=0;
    
    for(int i=1;i<=n;i++) {
        if(i==x) continue;
        if((i+x)%2==0) cnt++;
    }
    cout<<cnt<<endl;
    
}


int main() {
    fastio();

    int t = 1;
    cin >> t;  

    while (t--) {
        solve();
    }

    return 0;
}
