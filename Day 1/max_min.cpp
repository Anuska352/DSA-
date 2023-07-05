#include<iostream>
#include <limits.h>
using namespace std;

int getMin(int num[],int n){
    int mini= INT_MAX;
    for(int i=0;i<n;i++){
        // if(num[i] < min){
        //     min=num[i];
        // }
        mini = min(num[i],mini);
    }
    return mini;
}

int getMax(int num[],int n){
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        // if(num[i]>max){
        //     max=num[i];
        // }
         maxi = max(num[i],maxi);
    }
    return maxi;
}

int main(){
    int size;
    cout<<"Enter size of the array"<<endl;
    cin >> size;

    int num[100];
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    cout<<"Maximum number in array is "<<getMax(num,size)<<endl;
    cout<<"Minimum number in array is "<<getMin(num,size)<<endl;
    return 0;
    
}