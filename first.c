#include<stdio.h>
#include<stdlib.h>

int isprime(int n){ 
  int i;
  if (n==1){
    return 0;
  }
  for(i =2; i<=n-1; i++)
    {
      if(n%i==0)
	{
	return 0;
      }
    }return 1;

}
int main(int argc, char **argv)
{
 
  if (argc == 1){
    printf("Error\n");
    return -1;
   }
 
  int n = atoi(argv[1]);
 
  if(isprime(n) ==1)
      {
      printf("yes\n");
      }else{
      printf("no\n");
    }
return 0;
}

 
