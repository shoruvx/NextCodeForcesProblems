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

map<int, int> m;

void solve()
{
    int k; cin >> k;

    if (m.find(k) != m.end())
    {
    	cout << 'b' << endl;
    }
    else
    {
    	cout << 'a' << endl;
    }

}

int32_t main() 
{
    fastio;

    m[2]++;

    int x = 3;
    int prev = 2;

    fr(i,0,1000000)
    {
    	m[prev+x]++;
    	prev += x;
    	x++;
    }


    int t; cin >> t;
    while(t--) solve();

    return 0;
}