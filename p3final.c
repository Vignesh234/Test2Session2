#include<stdio.h>
int input_number()
{
  int n;
  printf("Enter the number\n");
  scanf("%d",&n);
  return n;
}
int is_prime(int n)
{
  int f=2;
  while(f<=n/2)
    {
      if(n%f==0)
        return 0;
      f++;
    }
    return 1;
}
void output(int n,int prime)
{
  if(is_prime(n))
    printf("The number%d is a prime\n",n);
  else
    printf("The number is not prime\n")
}
int main()
{
  int n=input_number();
  int prime=is_prime(n);
  output(n,prime);
  return 0;
}