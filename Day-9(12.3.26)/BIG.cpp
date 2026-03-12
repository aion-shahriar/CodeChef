// https://www.codechef.com/problems/BIG

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
    
    
    
    // vector<int>ans;
    
    // ans.push_back(1);
    
    // int cnt=0;
    // for(int i=1;i<n;i++) {
    //     for(int j=0;j<i;j++) {
    //         if(v[i]>v[j]) cnt++;
    //         else cnt=0;
    //     }
    //     if(cnt==i) ans.push_back(1);
    //     else ans.push_back(0);
    //     cnt=0;
    // }
    
    // printVec(ans);
    
    
    
    int max_score=INT_MIN;
    
    for(int i=0;i<n;i++) {
        if(v[i]>max_score) {
            cout<<1<<" ";
            max_score=v[i];
        }
        else {
            cout<<0<<" ";
        }
    }
    cout<<endl;
    
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
