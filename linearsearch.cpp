#include<iostream>
using namespace std;
int main()
{
    int arr[10]= {1,22,55,8,6,5,666,79,68,24},i,j=0,k;
    cout<<"Enter the element for which you want the position:";
    cin>>k;
    for(i=0; i<10; i++)
    {
        if(arr[i]==k)

            cout<<"GIVEN ELEMENT POSITION IS: "<<i;


    }
}





