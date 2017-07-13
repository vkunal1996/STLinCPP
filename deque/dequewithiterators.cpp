#include <iostream>
#include<deque>
using namespace std;


/*Traversing from both front and back of a doubly ended queue*/


int main()
{
    deque<int> Mydeque;
    deque<int>::iterator pos;
    int n,i,number;
        cout<<"Enter the number of Elements ";
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>number;
            Mydeque.push_front(number);
        }
        cout<<"After Pushing from Front : ";
            for(pos=Mydeque.begin();pos<Mydeque.end();pos++)
            {
                cout<<*pos<<" ";
            }
            cout<<endl<<"Enter the Number of Elements Again ";
                cin>>n;
                    for(i=0;i<n;i++)
                    {
                        cin>>number;
                        Mydeque.push_back(number);
                    }
                    cout<<endl<<"After pushing into Back : ";
                    for(pos=Mydeque.begin();pos<Mydeque.end();pos++)
                    {
                        cout<<*pos<<" ";
                    }
}


