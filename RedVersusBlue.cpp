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
    int n, r, b; cin >> n >> r >> b;
    string s = "";

    int div = r / (b + 1);
    int rem = r % (b + 1);
    int black = b;

    fr(i,0,b+1)
    {
    	fr(j,0,div)
    	{
    		s += 'R';
    	}

    	if (rem > 0)
    	{
    		s+='R';
    		rem--;
    	}
    	if (black > 0)
    	{
    		s+='B';
    		black--;
    	}
    }

    cout << s << endl;


}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}