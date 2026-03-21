#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{

        map<char, int> m;

        string s; cin >> s;

        for (auto x : s)
        {
            m[x]++;
        }

        int odds = 0, evens = 0;

        for (auto x : m)
        {
            if (x.second & 1)
            {
                odds++;
            }
            else
            {
                evens++;
            }
        }

        if (s.length() & 1 && odds != 1)
        {
            cout << "NO SOLUTION\n" << endl;
        }
        else if ((s.length() & 1) == 0 && odds)
        {
            cout << "NO SOLUTION\n" << endl;
        }
        else
        {
            string ans = "";
            
            for (auto &x : m)
            {
                if (x.second & 1)
                {
                    while(x.second--)
                    {
                        ans += x.first;
                    }
                }
            }

            for (auto &x : m)
            {
                while (x.second > 0)
                {
                	int mid = x.second / 2;
                    while (mid--)
                    {
                        ans += x.first;
                    }

                    mid = x.second / 2;

                    while (mid--)
                    {
                        ans = x.first + ans;
                    }

                    x.second = 0;
                }
            }

            cout << ans << endl;
        }
    

    return 0;
}