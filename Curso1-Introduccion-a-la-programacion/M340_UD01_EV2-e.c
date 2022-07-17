/*
Variable en punto flotante de 4 bytes: a=-8.2, b=0.005
2. Variables enteras: x=129, y=87, z=-22
3. Variables de carácter: c1=’w’, c2=’p’
4. Variable real en punto flotante de 8 bytes d1=2.88x10-8, d2=-8.4x10-5
5. Variable entera larga: grande=123456789
6. Variable real en punto flotante de 10 bytes: c=0,3333333333
7. Variable carácter: eol=salto de línea “\n”
*/
#include <stdio.h>

int main(){
  float a=-8.2,b=0.005;
  int x=129,y=87, z=-22;
  char c1='w', c2='p';
  double d1=2.88E-8, d2=-8.4E-5;
  long int grande = 123456789;
  long double c=0.3333333333;
  char eol="\n";

  printf("%c\n", eol);

  return 0;
}
