
#include<iostream>
using namespace std;

void sum(int x[4],int y[4], int *z){
    int i;
    for(i=0;i<4;i=i+1){
        *(z+i)=x[i]+y[i];
    }
}
    void sum(float x[4],float y[4], float *z){
    int i;
    for(i=0;i<4;i=i+1){
        *(z+i)=x[i]+y[i];
    }
}

int main(){
    int a[4],b[4],c[4],i;
    float d[4], e[4], f[4];

    cout<<"enter the  value of a: ";
    for(i=0;i<4;i=i+1){
        cin>>a[i];
    }
     cout<<"enter the  value of b: ";
    for(i=0;i<4;i=i+1){
        cin>>b[i];

    } cout<<"enter the  value of d: ";
    for(i=0;i<4;i=i+1){
        cin>>d[i];
    } cout<<"enter the  value of e: ";
    for(i=0;i<4;i=i+1){
        cin>>e[i];
    }
    sum(a,b,c);
    sum(d,e,f);

    cout<<"Integer sum: ";
    for(i=0;i<4;i++)
        cout<<c[i]<<" ";

    cout<<endl;

    cout<<"Float sum: ";
    for(i=0;i<4;i++)
        cout<<f[i]<<" ";
}
