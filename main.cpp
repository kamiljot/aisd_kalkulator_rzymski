#include <iostream>
using namespace std;
//Compiler version g++ 6.3.0

struct result{
    int res, rem;
};

result calc(int a, int b, int sign){
    result result1{};

    switch (sign){
        case 43:
            result1.res = a + b;
            result1.rem = 0;
            break;
        case 45:
            result1.res = a - b;
            result1.rem = 0;
            break;
        case 42:
            result1.res = a * b;
            result1.rem = 0;
            break;
        case 47:
            result1.res = a / b;
            result1.rem = a % b;
            break;
    }
    return result1;
}

int string_lenght(char roman[]){
    int l = 0;
    while (roman[l] != '\0')
        ++l;
    return l;
}

int roman_to_arabic(int ascii[], int lenght){
    int * ascii_str;
    ascii_str = new int[lenght];
    int a = 0;

    for (int i = 0; i < lenght; i++) {
        switch (ascii[i]) {
            case 73:
                ascii_str[i] = 1;
                break;
            case 86:
                ascii_str[i] = 5;
                break;
            case 88:
                ascii_str[i] = 10;
                break;
            case 76:
                ascii_str[i] = 50;
                break;
            case 67:
                ascii_str[i] = 100;
                break;
            case 68:
                ascii_str[i] = 500;
                break;
            case 77:
                ascii_str[i] = 1000;
                break;
        }
        cout << ascii_str[i] << endl;
    }
    if (lenght == 1){
        a = ascii_str[0];
    }
    else{
        if (lenght == 2){
            if (ascii_str[0] >= ascii_str[1]){
                a = ascii_str[0] + ascii_str[1];
            }
            else {
                a = ascii_str[1] - ascii_str[0];
            }
        }
        else{
            if(ascii_str[0] >= ascii_str[1]){
                a = ascii_str[0];
            }
            for (int i = lenght - 1; i > 0; i--){
                if (ascii_str[i-1] >= ascii_str[i]){
                    a += ascii_str[i];
                }
                else{
                    a += ascii_str[i] - ascii_str[i-1];
                    i--;
                }
            }
        }
    }
    delete [] ascii_str;
    return a;
}

int main()
{

    char roman_a[16], roman_b[16];
    int lenght_a, lenght_b, ascii_a[16], ascii_b[16], arabic_str_a[16], arabic_str_b[16], arabic_a = 0, arabic_b = 0;
    int sign = getchar();
    result result1{};

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

    arabic_a = roman_to_arabic(ascii_a, lenght_a);
    arabic_b = roman_to_arabic(ascii_b, lenght_b);

    cout << arabic_a << endl << arabic_b << endl;


    result1 = calc(arabic_a, arabic_b, sign);

    if (result1.rem == 0){
        cout << result1.res << endl;
    }
    else{
        cout << result1.res << " " << result1.rem << endl;
    }
//    for (int i = 0; i < lenght_a; i++){
//        arabic_str_a[i] = roman_to_arabic(ascii_a[i]);
        //test */        cout << i << " " << arabic_str_a[i] << endl;
//    }

//    for (int i = 0; i < lenght_b; i++){
//        arabic_str_b[i] = roman_to_arabic(ascii_b[i]);
        //test */         cout << i << " " << arabic_str_b[i] << endl;
//    }


    //test */      cout << lenght_a << " " << lenght_b << endl;








//test */    cout << sign << endl << roman_a << endl << roman_b;


return 0;
}