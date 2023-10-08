#include <iostream>
using namespace std;
int main(){
    int sum,avg,i,size;
    cout<<"Enter size of array:-";
    cin>>i;
    int* arr = new int[size];
    for(int j=0;j<i;++j){
        cout<<"\nEnter terms:-";
        cin>>arr[i];
    }
    for (int j = 0; j < i; ++j) {
        sum += arr[i];
    }
    avg=sum/i;
    cout<<"The sum of the array is:-"<<sum;
    cout<<"\nThe average of the array is:-"<<avg;
}