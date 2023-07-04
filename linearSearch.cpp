#include<iostream>
using namespace std;

bool linearSearch(int arr[], int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    
    int key;
    cout<<"Enter number to be searched"<<endl;
    cin>>key;

    bool found = linearSearch(arr,10,key);
    if(found){
        cout<<"Element is present in the array";
    }
    else{
        cout<<"Element is not present in the array";
    }
}