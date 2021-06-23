//Program :1
//Program to  reverse an array
#include <bits/stdc++.h>
using namespace std;
//function to  reverse the array using 2 variables
void rev(int arr[], int n)
{
    int low = 0;
    int high = n - 1;
    while (low < high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
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
    rev(arr, n); //calling the function
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }//printing the reversed array
    return 0;
}
//time complexity:O(n)
//auxiliary space :O(1)