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

int nextPrime(int n)
{
	while(++n)
	{

		if (n <= 2)
		{
			return n;
		}
		int isPrime = 1;

		fr(i,2, sqrt(n)+1)
		{
			if (n % i == 0)
			{
				isPrime = 0;
				break;
			}
		}

		if(isPrime)
		{
			return n;
		}
	}

	return n;
}

void solve()
{
    int n; cin >> n;

    
    int a = nextPrime(n);
    int b = nextPrime(n+a-1);

    // cout << a << " , " << b << endl;

    cout << min(a*a*a, a*b) << endl;
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}