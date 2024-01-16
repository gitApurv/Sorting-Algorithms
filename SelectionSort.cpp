#include <bits/stdc++.h>
using namespace std;

// Selection Sort Function
void selectionSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        int t = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = t;
    }
}

/*
Time Complexity
Worst Case - O(n^2)
Best Case - O(n^2)
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

    selectionSort(arr, n);

    cout << "After Sorting:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}