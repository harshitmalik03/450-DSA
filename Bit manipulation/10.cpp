//program:10
//generating the power set
#include <bits/stdc++.h>
using namespace std;
void power_set(string s)
{
    int n = s.length();
    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i & (1 << j))
            {
                cout << s[j];
            }
        }
        cout << endl;
    }
}
int main()
{
    string s;
    cin >> s;
    power_set(s);
    return 0;
}
//time complexity:O(n2^n)
//auxiliary space:O(1)