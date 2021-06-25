//program :8
//Divide two integers without using multiplication, division and mod operator
//approach:repeatedly subtract dividend from the divisor till divisor is less than dividend
//in each iteration increment quotient by 1
#include <bits/stdc++.h>
using namespace std;
int divide(int dividend, int divisor)
{
    int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;//for determining the sign of the result
    int quotient = 0;
    while (dividend >= divisor)//finding the quotient
    {
        dividend -= divisor;
        ++quotient;
    }
    return sign * quotient;
}
//start of the main function
int main()
{
    int dividend, divisor;
    cin >> dividend >> divisor;
    int result = divide(dividend, divisor);
    cout << result;
    return 0;
}
//time complexity:O(n)
//auxiliary space:O(1)