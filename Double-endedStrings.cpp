#include "bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fr(i,a,b) for(int i = a; i < b; i++)
#define rfr(i,a,b) for(int i = a - 1; i >= b; i--)
#define in(v,n)  vi v(n); fr(i,0,n) cin>>v[i];
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define pb push_back
#define mp make_pair
#define sz(x) (int)(x).size()
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

typedef vector<int> vi;
typedef vector<pair<int,int>> vip;
typedef map<int,int> mi;

void solve()
{
    string a,b; cin >> a >> b;
    int sizeA = sz(a);
    int sizeB = sz(b);

    int count = 0;

    fr(i,0,sizeA)
    {
    	

    	fr(j,0,sizeB)
    	{
            int temp = 0;
            
    		if(a[i]==b[j])
            {

                int start = i;
                int second = j;

                fr(z, start, max(sizeA,sizeB))
                {
                    if(a[start]==b[second])
                    {
                        temp += 2;
                        // cout << a[start] << " ";
                    }
                    else
                    {
                        count = max(count,temp);
                        break;
                    }
                    start++;
                    second++;

                    if (start >= sizeA || second >= sizeB)
                    {
                        break;
                    }
                }
            }

            count = max(count,temp);
    	}
    }

    cout << (sizeA+sizeB) - count << endl;
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}