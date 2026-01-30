#include "bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fr(i,a,b) for(int i = a; i < b; i++)
#define rfr(i,a,b) for(int i = a - 1; i >= b; i--)
#define in(v,n)  vi v(n); fr(i,0,n) cin>>v[i];
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define pb push_back
#define mp make_pair
#define sz(x) (int)(x).size()
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

typedef vector<int> vi;
typedef vector<pair<int,int>> vip;
typedef map<int,int> mi;

int calculate(int n)
{
	int temp = n % 4;

	if (temp == 0)	return n;
	else if (temp == 1)	return 1;
	else if (temp == 2)	return n + 1;
	else return 0;
}


void solve()
{
    int a,b; cin >> a >> b;

    int temp = calculate(a-1);


    if (temp == b)
    {
    	cout << a << endl;
    }
    else if ( (temp ^ b) != a)
    {
    	cout << a + 1 << endl;
    }
    else
    {
    	cout << a + 2 << endl;
    }

    
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}