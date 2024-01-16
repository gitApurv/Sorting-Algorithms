#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int l, int h)
{
    int pivot = arr[l];
    int i = l;
    int j = h;
    while (i < j)
    {
        while (i < h && arr[i] <= pivot)
        {
            i++;
        }
        while (j > l && arr[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            int t = arr[i];
            arr[i] = arr[j];
            arr[j] = t;
        }
    }
    int t = arr[l];
    arr[l] = arr[j];
    arr[j] = t;
    return j;
}

void quickSort(vector<int> &arr, int l, int h)
{
    if (l < h)
    {
        int part = partition(arr, l, h);
        quickSort(arr, l, part - 1);
        quickSort(arr, part + 1, h);
    }
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

    quickSort(arr, 0, n - 1);

    cout << "After Sorting:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}