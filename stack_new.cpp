#include<iostream>
using namespace std;

int main()
{
    int top,n,ch;
    int stacked[n]= {};
    cout<<"Enter size: ";
    cin>>n;
    cout<<endl;
    top=-1;
    while(1)
    {
        cout<<"***********************"<<endl;
        cout<<"Operations: "<<endl;
        cout<<"1.Insertion"<<endl;
        cout<<"2.Deletion"<<endl;
        cout<<"3.Display"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"Enter your choice:";
        cin>>ch;
        switch (ch)
        {
        case 1:
            if(top>=n-1)
            {
                cout<<("STACK OVER FLOW")<<endl;

            }
            else
            {
                int ele;
                cout<<"Enter the element: ";
                cin>>ele;
                top++;
                stacked[top]=ele;
            }
            break;
        case 2:
            if(top<=-1)
            {
                cout<<("STACK UNDER FLOW")<<endl;
            }
            else
            {
                cout<<"Element popped from stack";
                top--;
                cout<<endl;
            }
            break;
        case 3:
            cout<<"YOUR STACK:"<<endl;
            for(int i=0; i<=top; i++)
            {
                cout<<stacked[i]<<" "<<endl;
            }
            break;
        }
        if(ch==4)
        {
            exit(1);
        }
    }
}
