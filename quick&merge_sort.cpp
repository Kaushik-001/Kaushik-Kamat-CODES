#include <bits/stdc++.h>
using namespace std;

// 1- MERGE SORT (DIVIDE AND MERGE CONCEPT)

void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;

    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for(int i = low ; i<=high ;i++){
        arr[i] = temp[i-low];
    }
}

void Merge_sort(vector<int> &arr, int low, int high)
{
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    Merge_sort(arr, low, mid);
    Merge_sort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

// 2 - QUICK SORT (CHOOSE AN PIVOT ELEMENT AND LEFT<PIVOT , RIGHT>PIVOT , DIVIDE AND CONQUER)

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int Partition_index(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j)
    {
        while (arr[i] <= pivot && i <= high)
            i++;
        while (arr[j] > pivot && j >= low)
            j--;
        if (i <= j)
            swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);

    return j;
}

void quick_sort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int PI = Partition_index(arr, low, high);
        quick_sort(arr, low, PI - 1);
        quick_sort(arr, PI + 1, high);
    }
}

// THIS IS THE MAIN CODE FOR BOTH THE QUICK AND MERGE SORT IMPLEMENTATION
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr.push_back(x);
    }

    quick_sort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
