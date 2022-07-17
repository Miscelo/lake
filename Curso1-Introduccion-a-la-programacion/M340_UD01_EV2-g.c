/*
Imagina un programa en C con las siguientes variables inicializadas:
int i=8, j=5;
float x=0.005, y=-0.01;
char c=’c’, d=’d’;
Determina el resultado de las siguientes expresiones. Utiliza el valor de las
variables dado en la inicialización de las mismas.
p.E (3 * i – 2 * j) % (2 * d – c)
*/
#include <stdio.h>

int main(){
  int i=8,j=5;
  float x=0.005, y=-0.01;
  char c='c', d='d';  //c = 99 ASCII y d = 100 ASCII


  printf(" 1. %d\n", (3*i-2*j) % (2*d-c));

  printf(" 2. %d\n", (2*((i/5)+(4*(j-3))))%(i+j-2)); //error

  printf(" 3. %f\n", (i-3*j % (c+2*d))/(x-y));

  printf(" 4. %d\n", -(i+j));

  printf(" 5. %d\n", ++i);

  printf(" 6. %d\n", i++);

  printf(" 7. %d\n", --j);

  printf(" 8. %f\n", ++x);  //error, 1005 ¿?

  printf("Error %f",y);
  printf(" 9. %f\n", y--); // error , porque?

  printf("10. %d\n", i<=y);

  printf("11. %d\n", c>d);

  printf("12. %d\n", x>=0);

  printf("13. %d\n", x<y);

  printf("14. %d\n", j!=6);

  printf("15. %d\n", c==99);

  printf("16. %d\n", (5*(i+j))>'c');

  x=0.005;
  y=-0.01;
  printf("17. %d\n", (2*x+y)==0);

  printf("18. %f\n", (2*x)+(y==0));

  printf("19. %d\n", 2*x+y==0);

  printf("20. %d\n", !(i<=j));   // true

  printf("21. %d\n", !(c==99));    // false

  printf("22. %d\n", !(x>0));    // false

  i=8;
  j=5;
  printf("i=%d und j=%d\n",i,j);
  printf("23. %d\n", ((i>0)&&(j<5)));  // true, i=10 und j=4

  printf("24. %d\n", (i>0)||(j<5));   // true value

  printf("25. %d\n", (x>y)&&(i>0)||(j<5));    // false



  printf("x=%f, y=%f, i=%d, j=%d\n",x,y,i,j);
  printf("26. %d\n", (x>y)&&(i>0)||(j<5));







  return 0;
}
