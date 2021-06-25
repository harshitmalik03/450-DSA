//program:5
//program to check whether a given no. is power of two
//solution:if the given no. lies in power of two the n&(n-1) would always result in zero.
#include <bits/stdc++.h>
using namespace std;
bool power_of_two(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return !(n & (n - 1));
}
//start of main function
int main()
{
    int n;
    cin >> n;
    int is_power = power_of_two(n);
    cout << is_power;
    return 0;
}
//time complexity:O(1)
//auxiliary space:O(1)