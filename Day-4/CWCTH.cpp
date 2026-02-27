 //  https://www.codechef.com/problems/CWCTH

#include <bits/stdc++.h>
using namespace std;

// ---------------- FAST IO ----------------
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL)

// ---------------- MACROS ----------------
#define ll long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define print(x) cout << #x << '\n'

// ---------------- CONSTANTS ----------------
const ll MOD = 1e9 + 7;
const ll INF = 1e18;

// ---------------- VECTOR UTILITIES ----------------

// Vector Input (Generic)
template<typename T>
void inputVec(vector<T>& v) {
    for (auto &x : v)
        cin >> x;
}

// Sort Ascending
template<typename T>
void sortAsc(vector<T>& v) {
    sort(all(v));
}

// Sort Descending
template<typename T>
void sortDesc(vector<T>& v) {
    sort(all(v), greater<T>());
}

// Reverse Vector
template<typename T>
void reverseVec(vector<T>& v) {
    reverse(all(v));
}

// Print Vector
template<typename T>
void printVec(const vector<T>& v) {
    for (auto x : v)
        cout << x << " ";
    cout << endl;
}

// ---------------- SOLVE ----------------
void solve() {
    
    // int n; cin>>n;

    int n, m; cin>>n>>m;
    
    // int a,b,c; cin>>a>>b>>c;
    
    if(m>=3*n) print(Rain);
    else print(Dry);

    // vector<int> v(n);
    // inputVec(v);   // vectorinput


    // printVec(v);
    
}

// ---------------- MAIN ----------------
int main() {
    fastio();

    int t = 1;
    // cin >> t;  

    while (t--) {
        solve();
    }

    return 0;
}
