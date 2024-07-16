 #include<stdio.h>
 #include<math.h>
 int main()
 {
     int number,digit,sum,count,copy;
     printf("Enter the number\n");
     scanf("%d",&number);
     sum=0;
     count=0;
     copy=number;
     while(number!=0)
     {
         digit=number%10;
         count++;
         number = number/10;
     }
     printf("count=%d\n",count);
     number=copy;
     while(number!=0)
     {
         digit=number%10;
         sum=sum+pow(digit,count);
         number=number/10;
     }
     printf("sum=%d\n",sum);
     if(sum==copy)
        printf("%d is armstrong number\n",copy);
     else
        printf("%d is not an armstrong number \n",copy);
     return 0;
 }

