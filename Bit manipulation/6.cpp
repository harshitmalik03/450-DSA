//program:6
//Given a number N having only one ‘1’ and all other ’0’s in its binary representation, find position of the only set bit. If there are 0 or more than 1 set bit the answer should be -1. Position of  set bit '1' should be counted starting with 1 from LSB side in binary representation of the number
#include <bits/stdc++.h>
using namespace std;
int count_of_set_bits(int n) //count no. of set bits
{
    int count = 0;
    while (n != 0)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}
//start of the main function
int main()
{
    int n;
    cin >> n;
    if (count_of_set_bits(n) != 1)
    {
        cout << "-1";
    }
    else 
    {
        int count = 0;
        while (n)     //getting the position of rightmost set bit
        {
            n >>= 1;
            ++count;
        }
        cout << count; //printing the position of rightmost set bit
    }
    return 0;
}
//time complexity:O(d)
//d:no. of bits in the no.
//auxiliary space :O(1)