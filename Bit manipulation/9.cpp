//program:9
//Calculate square of a number without using *, / and pow()
//there are basically two methof to solve this problem
//1)repeatedly add the given no. n times ,where n is the given no.
//2)using recursion
#include <bits/stdc++.h>
using namespace std;
int find_square(int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += n;
    }
    return s;
}
int main()
{
    int n;
    cin >> n;
    int square = find_square(n);
    cout << square;
    return 0;
}
//for iterative solution:
//time complexity:O(n);
//auxiliary space:O(1)

//for recursive solution:-
//time complexity:O(logn)
//auxiliary space:O(n)