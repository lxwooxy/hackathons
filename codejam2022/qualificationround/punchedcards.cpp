using namespace std;
#include <iostream>
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cout<<"Case #"<<i+1<<":"<<endl;
        int r, c;
        cin>>r>>c;
        int j=0;
        while(j<(2*r)+1)
        {
            string s = "";

            while(j<2)
            {
                if(j%2==0)
                {
                    s="..";
                    for(int k=0;k<c-1;k++)
                    {
                        s+="+-";
                    }
                    s+="+";
                    cout<<s<<endl;
                    j++;
                }
                else
                {
                    s="..";
                    for(int k=0;k<c-1;k++)
                    {
                        s+="|.";
                    }
                    s+="|";
                    cout<<s<<endl; 
                    j++;
                }
            }
            s="";
            if(j%2==0)
            {
                for(int k=0;k<c;k++)
                {
                    s+="+-";
                }
                s+="+";
                cout<<s<<endl;
                j++;
            }
            else
            {
                for(int k=0;k<c;k++)
                {
                    s+="|.";
                }
                s+="|";
                cout<<s<<endl; 
                j++;
            } 
        }
    } 
}