include<stdio.h>
int input()
{
  int a;
  printf("Enter a number: ");
  scanf("%d",&a);
  return a;
}

int cmp(int a, int b, int c)
{
  int l;
  if(a>=b&&a>c)
  {
    l=a;
  }
  else if(b>a&&b>c)
  {
    l=b;
  }
  else
  {
    l=c;
  }
  return l;
}

void output(int l)
{
  printf("The largest number in the given input is: %d" , l);
}
int main()
{
  int a, b, c, l;
  a = input();
  b = input();
  c = input();
  l = cmp(a, b, c);
  output(l);
  return 0;
}