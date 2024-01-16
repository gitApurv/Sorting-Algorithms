#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int j = i;
        int ele = arr[j];
        while (j > 0 && arr[j - 1] > ele)
        {
            arr[j] = arr[j - 1];
            j--;
        }
        arr[j] = ele;
    }
}

/*
Time Complexity
Worst Case - O(n^2)
Best Case - O(n)
Average Case - O(n^2)
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

    insertionSort(arr, n);

    cout << "After Sorting:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}