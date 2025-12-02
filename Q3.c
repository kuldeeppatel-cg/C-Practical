#include <stdio.h>
int main()
{
  int num;
  int sum = 0;
  do{
      scanf("%d",&num);
      sum += num;
  }while(num != 0);

 printf("sum of enter value => %d",sum);
    return 0;
}
