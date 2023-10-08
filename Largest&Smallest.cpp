#include <iostream>
using namespace std;
int main(){
    int i,size,max,min;
    cout<<"Enter size of array:-";
    cin>>i;
    int* arr = new int[size];
    for(int j=0;j<i;++j){
        cout<<"\nEnter terms:-";
        cin>>arr[i];
    }
    for(int j=0;j<i;++j){
        if(arr[i]>arr[i+1]){
            max==arr[i];
            min==arr[i+1];
        }
        else{
            return 0;
        }
    }
    cout<<"The biggest number is "<<max;
    cout<<"The smallest number is "<<min;
}
