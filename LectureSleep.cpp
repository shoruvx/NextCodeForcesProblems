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
    int n, k; cin >> n >> k;

    in(v1,n);
    in(v2,n);

    vi left;
    vi right(n);

    int sum = 0;

    fr(i,0,n)
    {
    	if (v2[i]==1)
    	{
    		sum += v1[i];
    	}

    	left.push_back(sum);
    }

    sum = 0;

    for (int i = n - 1; i >= 0; i--)
    {
    	if (v2[i]==1)
    	{
    		sum += v1[i];
    	}

    	right[i] = sum;
    }

    vi ans;

    int tempSum = 0;

    fr(i,0,k)
    {
    	tempSum += v1[i];
    }

    ans.push_back(tempSum);

    int j = 0;

    fr(i, 1, n - k + 1)
    {
    	tempSum += v1[i+k-1] - v1[j];
    	ans.push_back(tempSum);
    	j++;
    }

    int maxVal = 0;

    fr(i,0,ans.size())
    {
    	int temp = ans[i];

    	if (i > 0)
    	{
    		temp += left[i-1];
    	}

    	if (i + k < n)
    	{
    		temp += right[i+k];
    	}
    	
    	maxVal = max(maxVal, temp);
    }

    cout << maxVal << endl;


}

int32_t main() 
{
    fastio;
	solve();

    return 0;
}