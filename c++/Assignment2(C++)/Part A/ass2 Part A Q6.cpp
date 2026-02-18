#include<iostream>
#include<cctype>
using namespace std;

int main(){
    char ch;

    cout << "Enter a Character : ";
    cin >> ch;

     ch = tolower(ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){

        cout << ch << " is a Vowel";

    }else if ( ch >= 'a' && ch <= 'z'){

        cout << ch << " is a consonant";

    }else{

        cout << ch << " is not a Character";
    }

    return 0;
}
