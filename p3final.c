/*3. Write a program find the nCr given n and r.
int input_n_and_r(int *n, int *r)
int ncr(int n, int r);
void output(int n, int r, int result);

*/
#include<stdio.h>
int input_n_and_r(int n , int r)
{
  printf("Enter values of n and r");
  scanf("%d%d",&n,&r);
  return r,n;
}
/*int fact_n(int a)
{
  int fact=1;
  for(i=2;i<=n;i++)
    fact=fact*i;
  return fact;
}
int ncr(int n, int r)
{
  return fact_n(n)/(fact_n(r))*(fact_n(n-r))
}
*/
int factnCr(int n,int r)
{
  int result=1;
  for(int i=1;i<r;i++)
    result=result*((n-i+1)/i);
  return result;
}
void output(int n,int r,int result)
{
  printf("%dC%d = %d",n,r,result);
}
int main()
{
  int n,r,result;
  input_n_and_r(n,r);
  result=factnCr(n,r);
  output(n,r,result);
  return 0;
}