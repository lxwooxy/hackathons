#include <iostream>

using namespace std;

int eval()
{
    int pancakes;
    cin >> pancakes;
    int arr[pancakes];
    
    for(int i=0; i<pancakes; i++) 
    {
        cin >> arr[i];
    }
    
    int paid=0;
    int yuckiest=0;
    int left=0;
    int right=pancakes-1;
    
    while(left<=right) 
    {
        if(arr[left]>=arr[right]) 
        {
            if(arr[right]>=yuckiest) 
            {
                paid++;
                yuckiest=arr[right];
            }
            right--;
        } 
        else 
        {
            if(arr[left]>=yuckiest) 
            {
                paid++;
                yuckiest=arr[left];
            }
            left++;
        }
    }
    return paid;
}
int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        int ans = 0;
        ans = eval();
        cout<<"Case #"<<i+1<<": "<<ans<<endl;
        
    }
    return 0;
}