
#include<iostream>
using namespace std;

int main() {
   int i;

   cout << "Using break:\n";
   for (i = 1; i <= 10; i = i + 1) {
    if(i == 5) {
        break; // stops the loop
    }
    cout << i << " ";
   }
   cout << endl;

   cout << "Using continue:\n";
   for (i = 1; i <= 10; i = i + 1) {
    if(i == 5) {
        continue; // skips this iteration
    }
    cout << i << " ";
   }

    return 0;
}
