#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string word;
        cin>>word;
        string newword;
        int size = word.size();

        for (int i = size-1; i >= 0; i--) 
        {
            //cout<<word[i]+newword<<"\t"<<word[i]+(word[i]+newword)<<endl<<endl;
            newword = min(word[i] + newword, word[i] + (word[i] + newword));
        }
        cout<<"Case #"<<i+1<<": "<<newword<<endl;
    }
}
