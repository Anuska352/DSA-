#include<iostream>
using namespace std;

int Sum(int arr[],int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    int size;
    cout<<"Enter size of an array"<<endl;
    cin>>size;

    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"Sum of all elements in an array is "<<Sum(arr,size)<<endl;
    return 0;
}