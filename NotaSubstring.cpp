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
typedef vector<pair<int,int>> vip;
typedef unordered_map<int,int> mi;

void solve()
{
    string s; cin >> s;
    int n = sz(s);
    
    string a = "";
    string b = "";

    fr(i,0,n)
    {
        a.pb('(');
        b.pb('(');
        b.pb(')');
    }
    fr(i,0,n)
    {
        a.pb(')');
    }

    if (a.find(s) == string::npos)
    {
        yes;
        cout << a << endl;
    }
    else if (b.find(s) == string::npos)
    {
        yes;
        cout << b << endl;
    }
    else
    {
        no;
    }
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}