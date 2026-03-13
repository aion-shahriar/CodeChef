// https://www.codechef.com/problems/QBGI

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
    
    int n; cin>>n;

    // int n, m; cin>>n>>m;
    
    // int a,b,c; cin>>a>>b>>c;
    
    

    // vector<int> v(n);
    // inputVec(v);   


    // printVec(v);
    
    string s; cin>>s;
    int g=0, b=0,cnt=0;
    
    for(int i=0;i<n;i++) {
        if(s[i]=='G') g++;
        else b++;
        cnt++;
        
        if(b>2*g) {
            cnt=i+1;
            break;
        }
        
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
