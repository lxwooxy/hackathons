#include <iostream>
using namespace std;

#include <iostream>
using namespace std;


void sort2(double& x, double& y) 
{
    double posx, posy;
        
    if (x > y) 
    {
        posx = y;
        posy = x;
        x = posx;
        y = posy;
    }
}
double smol(double a, double b, double c) 
{
    double pos1, pos2, pos3;
    sort2(a,c); 
    sort2(b,c); 
    sort2(a,b); 

    return a;

}
void combi(double& c, double& m, double& y, double& k, double final)
{
    
    while((c+m+y+k)>final)
    {
        if(c>=1)
        {
            c--;
        }
        else if(m>=1)
        {
            m--;
        }
        else if(y>=1)
        {
            y--;
        }
        else if(k>=1)
        {
            k--;
        }
    }
}
int main()
{
    int t;
    cin>>t;
    double final = 1000000;
    for(int i=0;i<t;i++)
    {
        double c1,m1,y1,k1;
        cin>>c1>>m1>>y1>>k1;
        double c2,m2,y2,k2;
        cin>>c2>>m2>>y2>>k2;
        double c3,m3,y3,k3;
        cin>>c3>>m3>>y3>>k3;

        double c = smol(c1,c2,c3);
        double m = smol(m1,m2,m3);
        double y = smol(y1,y2,y3);
        double k = smol(k1,k2,k3);

        cout<<"Case #"<<i+1<<": ";
        
        double ink = c+m+y+k;
        if(ink==final)
        {
            cout<<c<<" "<<m<<" "<<y<<" "<<k<<endl;
        }
        else if(ink>final)
        {
            combi(c,m,y,k,final);
            cout<<c<<" "<<m<<" "<<y<<" "<<k<<endl;
        }
        else
        {
            cout<<"IMPOSSIBLE"<<endl;
        }
    } 
}