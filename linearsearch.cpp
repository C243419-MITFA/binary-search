#include<iostream>
using namespace std;

int main()
{
    int n, search, i;

    cout<<"Enter size: ";
    cin>>n;

    int arr[n];

    cout<<"Enter elements: ";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter number to search: ";
    cin>>search;

    for(i=0; i<n; i++)
    {
        if(arr[i]==search)
        {
            cout<<"Found at position "<<i+1;
            return 0;
        }
    }

    cout<<"Not Found";

    return 0;
}
