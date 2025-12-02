
#include <stdio.h>

int sum(int num,int sum1){
    int dig;
    if(num == 0){
        printf("sum of digit => %d",sum1);
        return 0;
    }
    dig = num%10;
    sum1 += dig;
    return sum(num/10,sum1);
}
int main()
{
  int num;
  scanf("%d",&num);
  int sum1 = 0;
  sum(num,sum1);

    return 0;
}