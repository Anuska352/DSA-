#include<iostream>
using namespace std;

int firstOccurence(int arr[],int n,int key){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    int ans = -1;

    while(start <= end){
        if(arr[mid] == key){
           ans = mid;
           end = mid - 1;
        }
        else if(key > arr[mid]){
             start = mid + 1;         
        }
        else{
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int lastOccurence(int arr[],int n,int key){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    int ans = -1;

    while(start <= end){
        if(arr[mid] == key){
           ans = mid;
           start = mid + 1;
        }
        else if(key > arr[mid]){
             start = mid + 1;         
        }
        else{
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int main(){
    int arr[6]={1,2,3,3,3,5};
    
    cout<<"First Occcurence "<<firstOccurence(arr,6,3)<<endl;
    cout<<"Last Occcurence "<<lastOccurence(arr,6,3)<<endl;

}