#include<iostream>
using namespace std;

int marks(int p, int c, int m){
    int total;
    total = p + c + m;
    return total;
}

float percentage(float total){
    float percent;
    percent = (total / 300.0) * 100;
    return percent;

}

int main(){
    int p,c,m,total;
    float percent;

    cout << "Physics = ";
    cin >> p;

    cout << "Chemistry = ";
    cin >> c;

    cout << "Mathematics = ";
    cin >> m;

    total = marks(p, c, m);
    cout << "Total = " << total << endl;

    percent = percentage(total);
    cout << "Percentage = " << percent << endl;


    return 0;

}
