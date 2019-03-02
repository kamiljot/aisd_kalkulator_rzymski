#include <iostream>
using namespace std;
//Compiler version g++ 6.3.0

int string_lenght(char roman[]){
    int l = 0;
    while (roman[l] != '\0')
        ++l;
    return l;
}

int main()
{

char roman_a[14], roman_b[14];
int arabic_a[14], arabic_b[14], lenght_a, lenght_b, ascii_a[14], ascii_b[14];
char sign = getchar();
int l = 0;

cin >> roman_a >> roman_b;

lenght_a = string_lenght(roman_a);
lenght_b = string_lenght(roman_b);



cout << lenght_a << " " << lenght_b << endl;




for (int i = 0; i < lenght_a; i++){
ascii_a[i] = (int) roman_a[i];
cout << i << " " << ascii_a[i] << endl;
}
for (int i = 0; i < lenght_b; i++){
ascii_b[i] = (int) roman_b[i];
cout << i << " " << ascii_b[i] << endl;
}



cout << sign << endl << roman_a << endl << roman_b;


return 0;
}