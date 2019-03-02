#include <iostream>
using namespace std;
//Compiler version g++ 6.3.0

int string_lenght(char roman[]){
    int l = 0;
    while (roman[l] != '\0')
        ++l;
    return l;
}

int roman_to_arabic(int ascii){

        switch(ascii){
            case 73:
                return 1;

            case 86:
                return 5;

            case 88:
                return 10;

            case 76:
                return 50;

            case 67:
                return 100;

            case 68:
                return 500;

            case 77:
                return 1000;

        }
}

int main()
{

    char roman_a[16], roman_b[16];
    int lenght_a, lenght_b, ascii_a[16], ascii_b[16], arabic_a[16], arabic_b[16];
    int sign = getchar();

    cin >> roman_a >> roman_b;


    lenght_a = string_lenght(roman_a);
    lenght_b = string_lenght(roman_b);

    for (int i = 0; i < lenght_a; i++){
        ascii_a[i] = (int) roman_a[i];
        //test */         cout << i << " " << ascii_a[i] << endl;
    }
    for (int i = 0; i < lenght_b; i++){
        ascii_b[i] = (int) roman_b[i];
        //test */         cout << i << " " << ascii_b[i] << endl;
    }


    for (int i = 0; i < lenght_a; i++){
        arabic_a[i] = roman_to_arabic(ascii_a[i]);
        //test */        cout << i << " " << arabic_a[i] << endl;
    }

    for (int i = 0; i < lenght_b; i++){
        arabic_b[i] = roman_to_arabic(ascii_b[i]);
        //test */         cout << i << " " << arabic_b[i] << endl;
    }


    //test */      cout << lenght_a << " " << lenght_b << endl;








//test */    cout << sign << endl << roman_a << endl << roman_b;


return 0;
}