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
    in(vA,n);
    in(vB,n);
    in(vC,n);

    int count = 0;

    fr(i,0,2 * n)
    {
    	int tempCount = 0;
    	fr(j,0,2 * n)
    	{
    		fr(k,0,2 * n)
    		{
    			if (vA[i%n]< vB[j%n] && vB[j%n] < vC[k%n])
    			{
    				tempCount++;
    			}
    		}

    		if (tempCount >= n)
    		{
    			count++;
    		}
    	}
    }

    cout << count << endl;
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}