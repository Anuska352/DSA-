#include<iostream>
using namespace std;

char toLowerCase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        ch= ch - 'A' + 'a';
        return ch;
    }
}

bool checkPalindrome(char name[],int n){
    int s=0,e=n-1;

    while(s<=e){
        if(name[s] != name[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

void reverse(char name[],int n){
    int s=0;
    int e=n-1;

    while(s<e){
       swap(name[s++],name[e--]);
    }
}

char getMaxOccCharacter(string s){
    int arr[26]={0};

    for(int i=0;i<s.length();i++){
        char ch = s[i];

        int number = 0;
        number = ch -'a';
        arr[number]++;
    }

    int maxi=-1,ans=0;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }

    char finalAns = 'a'+ans;
    return finalAns;
}

int getLength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}

int main(){

    char name[20];

    cout<<"Enter your name"<<endl;
    cin>>name;
    

    // cout<<"Your name is"<<endl;
    // cout<<name<<endl;;
    // cout<<"Length is "<<getLength(name)<<endl;
    // reverse(name,6);

    // cout<<"Reversed array is "<<name<<endl;
    
    // cout<<checkPalindrome(name,6)<<endl;

    // cout<<toLowerCase('A')<<endl;
    // cout<<toLowerCase('a')<<endl;

    cout<<"Max number of characters "<<getMaxOccCharacter(name)<<endl;


    return 0;
}