//OJO: Linux kernel problems with math.h at time. Compile with -lm flag
#include <stdio.h>
#include <math.h>

double suma_cuadrados(double (*)(double x), int, int);
double inversa(double x);

int main(){
    double s;
    s = suma_cuadrados(sin, 1, 100);
    printf("suma de 1 a 100 de sin(i)^2 = %lf\n", s);

    s = suma_cuadrados(inversa,1,  100);
    printf("suma de 1 a 100 de sin(i)^2 = %lf\n", s);
    return 0;
 }

//Rückgabewert ist die Summe von sin(x)^2  darum f(x)*f(x)
double suma_cuadrados(double (*f)(double x), int i0, int i1 ){
	double s = 0,x;
	int i;
	for (i=i0; i<=i1; i++){
       x = i;
       s += f(x)*f(x); /* (*f)(x)*(*f)(x) en forma m�s expl�cita */
  }
    return s;
 }


double inversa(double x){
  return 1.0/x;
}
