//program :3
//You are given two numbers A and B. The task is to count the number of bits needed to be flipped to convert A to B
//the no. of flips would be the no. of set bits in the xorsum of 2 nos.
#include <bits/stdc++.h>
using namespace std;
int count_of_set_bits(int n)//count no. of set bits
{
    int count = 0;
    while (n != 0)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}
int no_of_flips(int a, int b)//counting the no. of flips
{
    int xorsum = a ^ b;
    int flips_required = count_of_set_bits(xorsum);
    return flips_required;
}
//start of the main function
int main()
{
    int a, b;
    cin >> a >> b;
    int flips_required = no_of_flips(a, b);//calling the no_of_flips()
    cout << flips_required;
    return 0;
}