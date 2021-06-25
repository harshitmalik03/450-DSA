//proegram:7
//copy set bits in a range
//approach:copying set bits one by one
#include <bits/stdc++.h>

using namespace std;
int new_x(int x, int y, int l, int r)//function for copying all the set bits in range [l,r] in  y to x
{
    for (int i = l; i <= r; i++)
    {
        int mask = 1 << (i - 1);
        if (y & mask)
        {
            x |= mask;
        }
    }
    return x;
}
//start of the main funtion
int main()
{
    int x, y, l, r;
    cin >> x >> y >> l >> r;
    int newx = new_x(x, y, l, r);
    cout << newx;
    return 0;
}