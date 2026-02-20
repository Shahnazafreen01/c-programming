#include<iostream>
using namespace std;

int main(){
    int num;

    cout << "Enter a Integer : ";
    cin >> num;

    if (num > 0){
        cout << "This number is Positive.";

    }else if (num < 0){
        cout << "This number is Negative.";

    }else{
        cout << "This number is Zero.";

    }

    return 0;
}
