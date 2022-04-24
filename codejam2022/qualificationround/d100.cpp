#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int count=1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>=count)
            count++;
        }
        cout<<"Case #"<<i+1<<": "<<count-1<<endl;
    }
}