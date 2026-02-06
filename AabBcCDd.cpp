#include "bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;

#define int long long
#define uint unsigned long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fr(i,a,b) for(int i = a; i < b; i++)
#define rfr(i,a,b) for(int i = a - 1; i >= b; i--)
#define in(v,n)  vi v(n); fr(i,0,n) cin>>v[i];
#define out(v) do { for (auto x : v) cout << x << ' '; cout << '\n'; } while(0)
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define pb push_back
#define mp make_pair
#define sz(x) (int)(x).size()
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

typedef vector<int> vi;
typedef vector<pair<int,char>> vip;
typedef unordered_map<char,int> mi;

void solve()
{
    int n; cin >> n;
    string s; cin >> s;

    mi m;

    for ( auto &x : s)
    {
    	x = tolower(x);
    	m[x]++;
    }

    vi v;

    for (auto x : m)
    {
    	v.pb(x.second);
    }

    v.pb(0);

    sort(rall(v));
    // out(v);

    cout << v[0] + v[1] << endl;


}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}