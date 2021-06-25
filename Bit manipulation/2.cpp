//program:2
//program to find the two unique elements
#include <bits/stdc++.h>
using namespace std;
void two_unique_elements(int arr[], int n) //function to find 2 unique elements
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    int x = 0;
    int y = 0;
    int set_bit = xorsum & ~(xorsum - 1);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] & set_bit)
        {
            x ^= arr[i];
        }
        else
        {
            y ^= arr[i];
        }
    }
    cout << x << " " << y;
}
//start of the main function
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    two_unique_elements(arr, n); //calling of the function
    return 0;
}
//time compleity:O(n)
//auxiliary space:O(1)