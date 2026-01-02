#include "bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fr(i,a,b) for(int i = a; i < b; i++)
#define in(v,n)  vi v(n); fr(i,0,n) cin>>v[i];
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

typedef vector<int> vi;

void solve()
{
    int n; cin >> n;
    string s; cin >> s;

    int five = 0, six = 0;

    string f= "2025";
    string si= "2026";

    if (s.find(f) != string::npos)
    {
    	five++;
    }

    if (s.find(si) != string::npos)
    {
    	six++;
    }

    if (!five || six)
    {
    	cout << 0 << endl;
    }
    else
    {
    	cout << 1 << endl;
    }
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}