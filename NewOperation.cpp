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
    in(v,n);

    int minVal, maxVal;

    if (n <= 2)
    {
    	minVal = v[0] + 2 * v[1];
    	maxVal = v[0] + 2 * v[1];

    	cout << minVal << " " << maxVal << endl;
    	return;
    }

    minVal = v[0];

    fr(i,1,n)
    {
    	minVal += 2 * v[i];
    }

    maxVal = v[n-1];

    for(int i = n-2; i >= 1; i--)
    {
    	maxVal = (2 * maxVal) + v[i];
    }

    maxVal = maxVal = (2 * maxVal) + v[0];

    cout << minVal << " " << maxVal << endl;

}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}