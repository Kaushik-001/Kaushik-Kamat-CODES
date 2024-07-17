/#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[],int n)
{
    for(int i =0;i<=n-2;i++)
    {
        int mini = i;
        for(int j=i;j<=n-1;j++)
        {
            if(arr[j]<arr[mini])
                mini = j;
        }
        swap(arr[mini],arr[i]);
    }
}

void Bubble_sort(int a[] , int n)
{
    int did_swap = 0;
    for(int i = n-1;i>=1;i--)
    {
        for(int j = 0;j<=i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                did_swap+=1;
            }
        }
        if(did_swap==0)
            break;
        cout<<"runs\n";
    }
}

void Insertion_sort(int a[],int n)
{
    for(int i = 0;i<n;i++)
    {
        int j=i;
        while(j>0 && a[j-1]>a[j])
        {
            swap(a[j-1],a[j]);
            j--;
            cout<<"Runs";
        }
    }
}

void swap(int &a , int &b)
{
    a = a+b;
    b = a-b;
    a = a-b;
}

int main()
{
    int n ;
    cout << "Enter the size of the array :" ;
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    // selection_sort(arr,n);
    // Bubble_sort(arr,n);
    Insertion_sort(arr,n);
    for(int i = 0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
