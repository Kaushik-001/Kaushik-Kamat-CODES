#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin >> arr[i];
    }

    // precompute
    int hash[13] = {0};
    for(int i = 0;i<n;i++)
    {
        hash[arr[i]] +=1;
    }

    int number;
    cin >> number;
    while(number--)
    {
        int query;
        cin >> query;

        cout << hash[query]<<endl;
    }

    return 0;
}