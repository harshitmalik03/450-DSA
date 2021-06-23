//program 3
//progrm to find the kth smallest and kth largest element considering k<=n and all the elements of the array are distinct
#include <bits/stdc++.h>
using namespace std;
int k_smallest(map<int, int> m, int k) //finding the kth smallest element using map
{
    int freq = 0;
    for (auto it = m.begin(); it != m.end(); it++)
    {
        freq += (it->second);
        if (freq >= k)
        {
            return (it->first);
        }
    }
    return -1;
}

//main function
int main()
{
    int n;
    cin >> n;

    int k;
    cin >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    map<int, int> m;
    for (int i = 0; i < n; i++)//getting frequencies of all the elements
    {
        m[arr[i]] += 1;
    }
    int kth_smallest = k_smallest(m, k);//calling the function to get the kth smallest element 

    cout << kth_smallest;
    return 0;
}