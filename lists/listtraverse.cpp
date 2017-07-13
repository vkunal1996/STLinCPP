#include <iostream>
#include<list>
using namespace std;

int main()
{
    list<string> Names;
    list<string>::iterator pos;
    int n,i;
    string name;
        cout<<"Enter the number of names ";
        cin>>n;
            for(i=0;i<n;i++)
            {
                getline(cin,name);
                Names.push_back(name);
            }
            cout<<"Displaying names using foreach loop "<<endl;
                for(auto const& elem : Names)
                {
                    cout<<elem<<" ";
                    cout<<endl;
                }

                cout<<"Displaying names using Iterators "<<endl;
                for(pos=Names.begin();pos!=Names.end();++pos)
                {
                    cout<<*pos;
                    cout<<endl;
                }
}


