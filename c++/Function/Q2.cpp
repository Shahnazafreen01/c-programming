#include<iostream>
using namespace std;

void result(){
    int p,c,m,total;
    float percent;

    cout << "Physics = ";
    cin >> p;

    cout << "Chemistry = ";
    cin >> c;

    cout << "Mathematics = ";
    cin >> m;

    total = p + c + m;
    percent = (total / 300.0) * 100;

    cout << "Total = " << total << endl;
    cout << "Percentage = " << percent << "%" << endl;
}

    int main(){

        result();
        return 0;

    }

