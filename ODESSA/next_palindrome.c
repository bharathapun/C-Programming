 #include<stdio.h>
int palindrome(int n)
{
  int t,r = 0;
  t=n;
  while(t!=0)
  {
    r=r*10;
    r=r+(t%10);
    t=t/10;
  }
  if(r==n)
    return 1;
  else
    return 0;
}

int main()
{
  int k,d=0,i;
  scanf("%d",&k);
  i = k + 1;
  while(1)
  {
    d=palindrome(i);
    
    if(d==1)
     break;
    i++;
  }
  printf("%d",i);
  return 0;
}
