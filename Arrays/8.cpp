//program :8
//program to find the maximum sum contigous subarray
#include <bits/stdc++.h>
using namespace std;
//start of the main function
//based on the kadanes algorithm
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int curr_sum = 0;
    int max_till_now = 0;
    for (int i = 0; i < n; i++)
    {
        curr_sum += arr[i];
        max_till_now = max(curr_sum, max_till_now);
        if (curr_sum < 0)
        {
            curr_sum = 0;
        }
    }
    cout << max_till_now;
    return 0;
}
//time complexity:O(n)
//auxiliary space:O(1)