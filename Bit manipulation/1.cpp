//program:1
//program to count total no. of set bits in  a no
#include <bits/stdc++.h>
using namespace std;
int set_bits(int n)//function to count no. of set bits

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
    int no_of_set_bits = set_bits(n);//calling of the function
    cout << no_of_set_bits;
    return 0;
}
//time complexity:O(d) 
//d:no of set bits ih the no.
//auxiliary space:O(1)