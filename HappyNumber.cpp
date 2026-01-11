#include "bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fr(i,a,b) for(int i = a; i < b; i++)
#define in(v,n)  vi v(n); fr(i,0,n) cin>>v[i];
#define yes cout<<"Yes"<<'\n'
#define no cout<<"No"<<'\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

typedef vector<int> vi;

void solve()
{
    int n; cin >> n;

    int i = 1000;

	int temp = n;

    while(i--)
    {
    	temp = 0;
    	
    	while(n)
    	{
    		int lastDig = n % 10;
    		temp += lastDig * lastDig;
    		n /= 10;
    	}

    	if (temp == 1)
    	{
    		yes;
    		return;
    	}

    	n = temp;
    }

    no;
}

int32_t main() 
{
    fastio;

	solve();

    return 0;
}