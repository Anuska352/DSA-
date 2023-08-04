#include<iostream>
using namespace std;

int findUnique(int arr[], int size)
{
    //Write your code here
    int ans = 0;
    for(int i=0;i<size;i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main(){
    int arr[7]={1,1,4,5,4,6,6};
    cout<<findUnique(arr,7)<<endl;
}
