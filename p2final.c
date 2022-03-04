/*2. Write a program to find the smallest of three fractions.
struct _fraction
{
int num,den;
};
typedef _fraction Fraction
Fraction input_fraction();
Fraction Largest_fraction(Fraction f1, Fraction f2, Fraction f3)
void output(Fraction f1, Fraction f2, Fraction f3, Fraction largest)

*/
#include<stdio.h>
struct _fraction
{
int num,den;
};
typedef struct _fraction Fraction;
Fraction input_fraction()
{
  Fraction f;
  printf("Enter the fraction inputs \n");
  scanf("%d%d",&f.num,&f.den);
  return f;
  
  /*Fraction f1,f2,f3;
  printf("Enter the numerator and demoninator of the fractions \n");
  scanf("%d%d%d%d%d%d",f1.num,f1.den,&f2.num,&f2.den,&f3.num,&f3.den);
  return f1,f2,f3;*/
}
Fraction Smallest_fraction(Fraction f1, Fraction f2, Fraction f3)
{
  int num1=f1.num*f2.den*f3.den;
  int num2=f2.num*f1.den*f3.den;
  int num3=f3.num*f1.den*f2.den;
  if(num1<num2&&num1<num3)
  {
    return f1;
  }
  else if (num2<num3)
  {
    return f2;
  }
  else
  {
    return f3;
  }

}
void output(Fraction f1, Fraction f2, Fraction f3, Fraction smallest)
{
  printf("The smallest of %d/%d ,%d/%d,%d/%d is %d/%d",f1.num,f1.den,f2.num,f2.den,f3.num,f3.den,smallest.num,smallest.den);
}
int main()
{
  Fraction f1,f2,f3,smallest;
  f1=input_fraction();
  f2=input_fraction();
  f3=input_fraction();
  smallest=Smallest_fraction(f1,f2,f3);
  output(f1,f2,f3,smallest);
  return 0;
}

