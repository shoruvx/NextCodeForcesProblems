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
    string s; cin >> s;

    int n = stoll(s);

    int lastDig = s[s.size()-1] - '0';



   	if (lastDig % 2 == 1)
    {
    	cout << 0 << endl;
    }
    else if (n < 10)
    {
    	cout << -1 << endl;
    }
    else
    {

    	int odd = 0, even = 0;

    	fr(i,0,s.size())
    	{
    		if ((s[i]-'0') % 2 == 1)
    		{
    			odd++;
    		}
    		else
    		{
    			even++;
    		}
    	}

    	if(odd)
    	{
    		cout << 1 << endl;
    	}
    	else
    	{
    		cout << even << endl;
    	}

    }


}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}