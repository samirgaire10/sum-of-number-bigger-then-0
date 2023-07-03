#include <stdio.h>
int main (void)
{
  int sum , i , num;
printf("Number bigger then 0 will be added  \nNumber smaller then 0 will be ignored\n");

    for(i=1 ; i<=10 ; i++){
     printf("Enter a data :: ");
     scanf("%d",&num);

    if(num > 0)
    sum=sum+num;
}

   printf("sum is %d",sum );
 return 0;

}
