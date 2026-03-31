#include<iostream>
using namespace std;
int main(){
    int n,sum=0,temp,d;
    cin>>n;
    temp=n;

    while(n!=0){
    d=n%10;
    sum+=d*d*d;
    n/=10;
    }

      if(sum==temp){
             cout<<"Armstrong";
      }
       else{
           cout<<"Not Armstrong";
       }
}
