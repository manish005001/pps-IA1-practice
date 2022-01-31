#include<stdio.h>
typedef struct complex 
{
  float real;
  float imaginary;
 
} complex;
complex add(complex n1,complex n2);
int main()
{
  complex n1,n2,sum;
  printf("enter the real & imaginary part:");
  scanf("%f %f", &n1.real, &n1.imaginary);
  printf("enter the real & imaginary part:");
   scanf("%f %f", &n2.real, &n2.imaginary);
   sum=add(n1,n2);
    printf("Sum = %.1f + %.1fi", sum.real, sum.imaginary);
    return 0;
}
complex add (complex n1,complex n2)
{
  complex sum;
  sum.real=n1.real+n2.real;
  sum.imaginary=n1.imaginary + n2.imaginary;
  return (sum);
}