#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    long double pi = acos(-1.0L);
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int r,a,b;
        cin>>r>>a>>b;
        double ans=r*r;

        while (r>0)
        {
            r*=a;
            ans+=r*r;
            r/=b;
            ans+=r*r;
        }
        cout<<"Case #"<<i+1<<": "<< fixed << setprecision(12)<<ans*pi<<endl;
    }
}