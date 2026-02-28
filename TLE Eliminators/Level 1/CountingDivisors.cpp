#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        set<int> ans;
        int n; cin >> n;

        for (int i = 1; i*i <= n; i++)
        {
            if (n % i == 0)
            {
                ans.insert(i);
                ans.insert(n/i);
            }
        }

        cout << ans.size() << endl;
    }

    return 0;
}