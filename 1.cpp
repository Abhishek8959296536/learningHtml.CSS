#include<iostream>
using namespace std;
int fibo(){
    int i,n;
    int ft=0;
    int st=1;
    int next;
    i=0;n=7;
    while(i<n)
    {
        if(i==0)
        {
            cout<<ft;
            i++;
        }
        if(i==1)
        {
            cout<<st;
            i++;
        }
        next=ft+st;
        ft=st;
        st=next;
        i++;
        cout<<next;
    }
    return 0;
    }
    int main(){
   fibo();
   }
