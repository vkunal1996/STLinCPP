#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
int main()
{
        vector<int> Integer;
        vector<double>Double;
        vector<long> Long;
        vector<float> Float;
        vector<char> Char;
        vector<string>String;

        int n,i;
        int number;
        float floatnumber;
        double doublenumber;
        long longnumber;
        char character;
        string str;

        cout<<endl<<"Enter the Number of Integer Values ";
        cin>>n;
            for(i=0;i<n;i++)
            {
                cout<<"Integer "<<i+1<<" : ";
                cin>>number;
                Integer.push_back(number);
            }
            cout<<"Traversing of Integer Vector "<<endl;
            for(i=0;i<Integer.size();i++)
            {
                cout<<Integer[i]<<" ";
            }
            cout<<endl<<"Enter the Number of Float Values ";
            cin>>n;
                for(i=0;i<n;i++)
                {
                    cout<<"Float : "<<i+1<<" : ";
                    cin>>floatnumber;
                    Float.push_back(floatnumber);
                }
            cout<<"Traversing of Floating Values "<<endl;
                for(i=0;i<Float.size();i++)
                {
                    cout<<Float[i]<<" ";
                }
            cout<<endl<<"Enter the numbers of Double Values ";
            cin>>n;
                for(i=0;i<n;i++)
                {
                    cout<<"Double "<<i+1<<" : ";
                    cin>>doublenumber;
                    Double.push_back(doublenumber);

                }
            cout<<"Traversing of the Double Values "<<endl;
                for(i=0;i<Double.size();i++)
                {
                    cout<<Double[i]<<" ";
                }
            cout<<endl<<"Enter the Number of Long Values ";
            cin>>n;
                for(i=0;i<n;i++)
                {
                    cout<<" Long "<<i+1<<" : ";
                    cin>>longnumber;
                    Long.push_back(longnumber);
                }
            cout<<"Traversing of Long Values are "<<endl;
            for(i=0;i<Long.size();i++)
            {
                cout<<Long[i]<<" ";
            }
            cout<<endl<<"Enter the number of Chars ";
            cin>>n;
                for(i=0;i<n;i++)
                {
                    cout<<"Character "<<i+1<<" : ";
                    cin>>character;
                    Char.push_back(character);
                }
                cout<<"Traversing of the Characters is "<<endl;
                for(i=0;i<Char.size();i++)
                {
                    cout<<Char[i]<<" ";
                }
            cout<<endl<<"Enter the Number of String Values : ";
            (cin>>n).ignore();;
                for(i=0;i<n;i++)
                {
                    cout<<"String "<<i+1<<" : ";
                    getline(cin,str);
                    String.push_back(str);
                }
                cout<<"Traversing of the String Values is "<<endl;
                    for(i=0;i<String.size();i++)
                    {
                        cout<<String[i]<<" ";
                    }

}
