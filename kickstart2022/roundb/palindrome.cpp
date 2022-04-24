#include <iostream>
using namespace std;

bool palindrome(string number)
{
    bool check= true;
    bool is_palindrome=true;
    while(check)
    {
        for(int x=0;x<number.size();x++)
        {
            if(number[x]!=number[(number.size()-x)-1])
            {
                check=false;
                is_palindrome=false;
            }
        }
        check=false;
    }
    if(!is_palindrome)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main() 
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int num;
        cin>>num;
        int ans=0;
        for(int j=1; j <= num; j++) 
        {
            if (num % j == 0)
            {
                string number = to_string(j);
                if(number.size()<2)
                {
                    ans++;
                }
                else
                {
                    if(palindrome(number))
                    {
                        ans++;
                    }
                }
            }
        }
        cout<<"Case #"<<i+1<<": "<<ans<<endl;
    }
}