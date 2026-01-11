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

    vi v;

    fr(i,1, sqrt(n) + 1)
    {
    	v.push_back(i);
    }

    int size = v.size();

    
    map<int, int> m;

    for(int i = 0; i < size; i++)
    {
    	if (v[i] * v[i] > n)
    		break;

    	for(int j = i + 1; j < size; j++)
    	{
    		int temp = v[i] * v[i] + v[j] * v[j];

    		if (temp <= n)
    		{
    			m[temp]++;
    			
    		}    

    		if (temp > n)
    		{
    			size = j + 1;
    			break;
    		}
    	}
    }

    set<int> s;
    for (auto x : m)
    {
    	if (x.second == 1)
    	{
    		s.insert(x.first);
    	}
    }

    cout << s.size() << endl;

    for (auto x : s)
    {
    	cout << x << " ";
    }

    cout << endl;
}

int32_t main() 
{
    fastio;

	solve();

    return 0;
}