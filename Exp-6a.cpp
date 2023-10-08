#include <iostream>
using namespace std;
int main()
{
    int myip;
    cout<<"Enter the number you want to find: ";
    cin>>myip;
    int arr[5]={15,20,30,15,17};
    for(int i=0;i<5;i++){
        if(myip==arr[i]){
            cout<<"The number exists at "<<i+1<<"\n";
        }
        else{
            cout<<"The number doesn't exist\n";
        }
    }
}