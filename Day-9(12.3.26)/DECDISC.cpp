// https://www.codechef.com/problems/DECDISC

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
    
    

     vector<int> v(n);
     inputVec(v);   


    // printVec(v);
    
    int ans1=INT_MAX;
    
    for(int i=0;i<n-1;i++) {
        int sum=v[i]+v[i+1]/2;
        ans1=min(ans1,sum);
    }
    
    int ans2=INT_MAX;
    
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            int sum=v[i]+v[j];
            ans2=min(ans2,sum);
        }
    }
    
    cout<<min(ans1,ans2)<<endl;
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
