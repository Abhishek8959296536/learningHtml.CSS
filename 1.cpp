#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,1,2,1};
    int i=0;
    int j=4;
    for(int i=0;i<5;i++){
        for(int j=i+1;i<j;j++){
            if (arr[i]!=arr[j])
        }
        cout<<"not a pallindrome"
    }
}