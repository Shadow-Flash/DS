#include<iostream>
using namespace std;
int binarys(int arr[],int mid,int x)
{
    int ans;
    if (arr[mid]==x){
            ans=mid;
        cout<<"Element position is: "<<mid;
    }
    else if (arr[mid]<x){
        mid=7;
        if(arr[mid]==x){
                ans=mid;
            cout<<"Element position is: "<<mid;
        }
        else if(arr[mid]<x){
            mid=8;
            if(arr[mid]==x){
                    ans=mid;
                cout<<"Element position is: "<<mid;
            }
            else if(arr[mid+1]==x){
                    ans=mid+1;
                cout<<"Element position is: "<<mid+1;
            }
        }
        }
        else if(arr[mid-1]==x){
            ans=mid-1;
            cout<<"Element position is: "<<mid-1;
        }
        return ans;
    }

int main(){
    int arr[11]={2,6,8,12,16,18,19,20,34,36,40};
    int mid=5;
    int x=20;
    int ans;
    cout<<"Element pos:"<<ans;
}
