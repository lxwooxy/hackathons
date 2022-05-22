#include <iostream>
#include <cmath>
#include <iomanip>
#include <cctype>
using namespace std;
bool isspecial(char c)
{
    if(c=='#'||c=='@'||c=='*'||c=='&')
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool isnum(char c)
{
    if(c=='1'||c=='2'||c=='3'||c=='4'||c=='5'||c=='6'||c=='7'||c=='8'||c=='9'||c=='0')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        bool length = false;
        bool upper = false;
        bool lower = false;
        bool num = false;
        bool special = false;
        int len;
        cin>>len;
        string old;
        cin>>old;
        if(len>=7)
        {
            length=true;
        }
        for(int j=0;j<len;j++)
        {
            if(isupper(old[j]))
            {
                upper=true;
            }
            if(islower(old[j]))
            {
                lower=true;
            }
            if(isnum(old[j]))
            {
                num=true;
            }
            if(isspecial(old[j]))
            {
                special=true;
            }
        }
        string updated;
        updated = old;
        
        if(!lower)
        {
            updated.append("a");
        }
        if(!num)
        {
            updated.append("1");
        }
        
        if(!upper)
        {
            updated.append("A");
        }
        if(!special)
        {
            updated.append("*");
        }

        if(!length &&updated.length()<7)
        {
            int remainder = 7-updated.length();
            for(int x=0;x<remainder;x++)
            {
                updated.append("1");
            }
        }
        cout<<"Case #"<<i+1<<": "<<updated<<endl;
    }
}