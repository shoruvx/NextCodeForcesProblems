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

int calc(pair<int,int> p1, pair<int,int> p2, pair<int,int> p3)
{
	int temp = (p1.first * (p2.second - p3.second)) + 
				(p2.first * (p3.second - p1.second)) +
				(p3.first * (p1.second - p2.second));

	return abs(temp);
}

void solve()
{
    int w,h; cin >> w >> h;

    vector<pair<int,int>> vp1;
    vector<pair<int,int>> vp2;
    vector<pair<int,int>> vp3;
    vector<pair<int,int>> vp4;

    int k; cin >> k;

    while(k--)
    {
    	int x; cin >> x;
    	vp1.push_back(make_pair(x,0));
    }

    cin >> k;

    while(k--)
    {
    	int x; cin >> x;
    	vp2.push_back(make_pair(x,h));
    }

    cin >> k;

    while(k--)
    {
    	int x; cin >> x;
    	vp3.push_back(make_pair(0,x));
    }

    cin >> k;

    while(k--)
    {
    	int x; cin >> x;
    	vp4.push_back(make_pair(w,x));
    }

    int maxVal = INT_MIN;

    maxVal = max(maxVal,calc(vp1[0],vp1[vp1.size()-1],vp2[0]));
    maxVal = max(maxVal, calc(vp3[0],vp3[vp3.size()-1],vp4[0]));
    maxVal = max(maxVal,calc(vp2[0],vp2[vp2.size()-1],vp1[0]));
    maxVal = max(maxVal, calc(vp4[0],vp4[vp4.size()-1],vp3[0]));

    cout << maxVal << endl;


}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}