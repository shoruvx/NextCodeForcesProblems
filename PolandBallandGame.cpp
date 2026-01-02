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
    int n, m;
    cin >> n >> m;

    vector<string> v1;
    vector<string> v2;

    while(n--)
    {
    	string s; cin >> s;
    	v1.push_back(s);
    }

    while(m--)
    {
    	string s; cin >> s;
    	
    	v2.push_back(s);
    }

    // sort(all(v1));
    // sort(all(v2));

    int a = v1.size();
    int b = v2.size();
    int found = 0;

    for (auto x : v1)
    {
    	if (find(all(v2),x) != v2.end())
    	{
    		
    		if (found % 2)
    		{
    			a--;
    		}
    		else
    		{
    			b--;
    		}

    		found++;
    	}

    }

    if (a > b) yes;
    else no;

}

int32_t main() 
{
    fastio;

	solve();

    return 0;
}