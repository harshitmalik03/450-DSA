//program :4
//Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo
#include <bits/stdc++.h>
using namespace std;
void sort_012(int arr[], int n)
{
    int count_0 = 0;
    int count_1 = 0;
    int count_2 = 0;
    for (int i = 0; i < n; i++)//counting the no. of zeroes,ones and twos
    {
        if (arr[i] == 0)
        {
            count_0++;
        }
        if (arr[i] == 1)
        {
            count_1++;
        }
        if (arr[i] == 2)
        {
            count_2++;
        }
    }
    for (int i = 0; i < count_0; i++) 
    {
        arr[i] = 0;
    }
    for (int i = 0; i < count_1; i++)
    {
        arr[i + count_0] = 1;
    }
    for (int i = 0; i < count_2; i++)
    {
        arr[i + count_0 + count_1] = 2;
    }
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
    sort_012(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
//time complexity:O(n)
//auxiliary space:O(1)