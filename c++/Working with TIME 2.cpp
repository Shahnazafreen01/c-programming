#include<iostream>
using namespace std;

class Time {
public:
    int hh, mm, ss;

    void input();
    void add(Time,Time);
    void display();
};

void Time::input() {
    cin >> hh >> mm >> ss;
}

void Time::add(Time t1, Time t2) {
    ss = t1.ss + t2.ss;
    mm = t1.mm + t2.mm;
    hh = t1.hh + t2.hh;

    if (ss >= 60) {
        mm = mm + ss / 60;
        ss = ss % 60;
    }

    if (mm >= 60) {
        hh = hh + mm / 60;
        mm = mm % 60;
    }
}

void Time::display() {
    cout << hh << " hour " << mm << " minute " << ss << " second ";
}

int main() {
    Time t1, t2, sum;

    cout << "Enter first time (hh mm ss): ";
    t1.input();

    cout << "Enter second time (hh mm ss): ";
    t2.input();

    sum.add(t1, t2);

    cout << "Total time = ";
    sum.display();

    return 0;
}
