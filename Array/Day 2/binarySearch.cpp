#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int key){
    int start = 0;
    int end = n-1;
    int mid;
    while(start<=end){
            // mid = (start+end)/2;
            mid = start + (end-start)/2;
            if(arr[mid] == key){
                return mid;
            }
            else if(key > arr[mid]){
               start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
    return -1;
}

int main(){
    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3,8,11,14,16};

    int evenIndex = binarySearch(even,6,20);
    cout<<"Index of 20 is "<<evenIndex<<endl;

    int oddIndex = binarySearch(odd,5,16);
    cout<<"Index of 16 is "<<oddIndex<<endl;

    return 0;
}
