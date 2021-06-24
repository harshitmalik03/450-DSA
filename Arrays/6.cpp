//program :6
//program to find the union and intersection of 2 arrays
#include <bits/stdc++.h>
using namespace std;
//start of main function
int main()
{
    int n;
    int m;
    cin >> n >> m;
    int arr[n];
    int arr1[m];
    //taking the inputs
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    //finding the union
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }
    for (int i = 0; i < m; i++)
    {
        s.insert(arr1[i]);
    }
    //printing the union of two arrays
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;
    //finding intersection
    map<int, int> p;
    for (int i = 0; i < n; i++)
    {
        p[arr[i]]++;
    }
    for (int i = 0; i < m; i++)
    {
        p[arr1[i]]++;
    }
    //printing the inersection of two arrays
    for (auto it = p.begin(); it != p.end(); it++)
    {
        if (it->second >= 2)
        {
            cout << it->first << " ";
        }
    }

    return 0;
}
//time complexity:O(n+m)
//auxiliary space :O(n+m)