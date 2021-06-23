//program :2
//program to find the maximum and minimum in the array
#include <bits/stdc++.h>
using namespace std;
int maximum(int arr[], int n)//function to find max value in the array
{
    int max_val = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= max_val)
        {
            max_val = arr[i];
        }
    }
    return max_val;
}
int minimum(int arr[], int n)//function to find min val in the array
{
    int min_val = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= min_val)
        {
            min_val = arr[i];
        }
    }
    return min_val;
}
//start of main function
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max_val = maximum(arr, n);//calling the maximum() to get the maximum value
    int min_val = minimum(arr, n);//calling the minimum() to get minimum value
    cout << max_val << " " << min_val;
    return 0;
}
//time complexity:O(n)
//auxiliary space:O(1)
