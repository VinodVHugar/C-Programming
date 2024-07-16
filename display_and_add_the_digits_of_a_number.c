 #include<stdio.h>
 int main()
 {
     int number,digit,sum;
     printf("enter the number\n");
     scanf("%d",&number);
     while(number!=0)
     {
         digit=number%10;
         printf("%d\t",digit);
         sum=sum + digit;
         number = number/10;
     }
     printf("sum of digits = %d\n",sum);
     return 0;
 }
