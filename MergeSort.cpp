#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int l, int mid, int h)
{
    vector<int> temp;
    int i = l, j = mid + 1;
    while (i <= mid && j <= h)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }
    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while (j <= h)
    {
        temp.push_back(arr[j]);
        j++;
    }
    for (int i = l; i <= h; i++)
    {
        arr[i] = temp[i - l];
    }
}

void mergeSort(vector<int> &arr, int l, int h)
{
    if (l >= h)
    {
        return;
    }

    int mid = l + (h - l) / 2;

    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, h);
    merge(arr, l, mid, h);
}

/*
Time Complexity
Worst Case - O(n * log(n))
Best Case - O(n * log(n))
Average Case - O(n * log(n))

Space Complexity - O(n)
*/

int main()
{
    int n = 5;
    vector<int> arr = {5, 4, 3, 2, 1};

    cout << "Before Sorting:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    mergeSort(arr, 0, n - 1);

    cout << "After Sorting:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}