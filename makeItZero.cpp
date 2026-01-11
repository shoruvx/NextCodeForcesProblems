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
	in(v,n)
		if (n % 2 == 0)
		{
			cout << 2 << endl; 
			cout << 1 << " " << n << endl; 
			cout << 1 << " " << n << endl;
		}
		else
		{
			cout << 4 << endl; 
			cout << 1 << " " << n - 1 << endl;
			cout << 1 << " " << n - 1 << endl;
			cout << n - 1 << " " << n << endl;
			cout << n - 1 << " " << n << endl;
		}
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}