#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    map<int , int> mpp; // map<key/value,frquency>
    for(int i = 0;i<n;i++)
    {
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    for(auto it:mpp)
    {
        cout<<it.first<<"--"<<it.second<<endl;
    }
    int number;
    cin >> number;
    while(number--)
    {
        int query;
        cin >> query;

        cout << mpp[query]<<endl;
    }

    return 0;
}