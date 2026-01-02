#include "bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;

#define int long long
#define uint unsigned long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fr(i,a,b) for(int i = a; i < b; i++)
#define in(v,n)  vi v(n); fr(i,0,n) cin>>v[i];
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

typedef vector<int> vi;

vector<uint> v;

void solve()
{
    int a, b; cin >> a >> b;

    int ans  = 0;

    int tempA = a, tempB = b;
    int i = 0;
    int tempAns = 0;

    while(tempA >= v[i] && tempB >= v[i])
    {
    	if (i % 2 == 0)
    	{
    		tempA -= v[i];
    	}
    	else
    	{
    		tempB -= v[i];
    	}

    	i++;
    	tempAns++;
    	
    }

    if (tempA >= v[i] && i % 2 == 0)
    {
    	tempAns++;
    }
    else if (tempB >= v[i] && i % 2)
    {
    	tempAns++;
    }

    ans = max(ans,tempAns);
    tempAns = 0;

    i = 0;
    tempA = a, tempB = b;

    while(tempA >= v[i] && tempB >= v[i])
    {
    	if (i % 2 == 1)
    	{
    		tempA -= v[i];
    	}
    	else
    	{
    		tempB -= v[i];
    	}

    	i++;
    	tempAns++;
    	
    }

    if (tempA >= v[i] && i % 2)
    {
    	tempAns++;
    }
    else if (tempB >= v[i] && i % 2 == 0)
    {
    	tempAns++;
    }

    ans = max(ans,tempAns);

    
    cout << ans << endl;

}

int32_t main() 
{
    fastio;

    v.push_back(1);

    fr(i,1,1000001)
    {
    	v.push_back(v[i-1]*2);
    }

    int t; cin >> t;
    while(t--) solve();

    return 0;
}