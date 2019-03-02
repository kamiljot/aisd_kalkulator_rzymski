#include <iostream>
using namespace std;
//Compiler version g++ 6.3.0


int main()
{

char roman_a[14], roman_b[14];
int arabic_a[14], arabic_b[14], lenght_a, lenght_b, ascii_a[14], ascii_b[14];
char sign = getchar();
int l = 0;

cin >> roman_a >> roman_b;

while (roman_a[l] != '\0')
++l;

lenght_a = l;

l = 0;

while (roman_b[l] != '\0')
++l;

lenght_b = l;


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