/*3. Write a program find the nCr given n and r.
int input_n_and_r(int *n, int *r)
int ncr(int n, int r);
void output(int n, int r, int result);

*/
#include<stdio.h>
int input_n_and_r(int *n , int *r)
{
  printf("Enter values of n\n");
  scanf("%d",n);
  printf("Enter values of r\n");
  scanf("%d",r);
}
/*
float fact_n(int a)
{
  float fact=1;
      for(int i=1;i<=a;i++)
    fact=fact*i;
  return fact;
}
float ncr(int n, int r)
{
  float result=fact_n(n)/(fact_n(r)*fact_n(n-r));
  return result;
}*/

int factnCr(int n,int r)
{
  int result=1;
  for(int i=1;i<=r;i++)
  result=result*(n-i+1)/i;
  return result;
}
void output(int n,int r,int result)
{
  printf("Value of %dC%d = %d\n",n,r,result);
}
int main()
{
  int n,r;
  input_n_and_r(&n,&r);
  //float result=ncr(n,r);
  int result=factnCr(n,r);
  output(n,r,result);
  return 0;
}