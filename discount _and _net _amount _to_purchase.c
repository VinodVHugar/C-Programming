//*write a c program to calculate the discount and net amount to purchase the items
//*author:vinod
//*usn:01fe21bme092
//*roll no : 431


#include<stdio.h>
 int main()
{
    float amt,net_amt,disc =0;
    printf ("enter the purchase amt\n");
    scanf(" %f",&amt);
    if (amt>=0&&amt<=1000)
   {
       disc=0;
       printf("disc =%0.2f\nnet_amt=%0.2f\n", disc, amt);
   }

   else if ( amt>=1001 && amt<=2000)
   {
       disc =amt*0.25;
       net_amt=amt-disc;
       printf("disc=%0.2f\nnet_amt=%0.2f\n",disc,amt);
   }
   else if (amt>=2001 && amt<=3000)
   {
       disc=amt*0.35;
       net_amt=amt-disc;
       printf("disc=%0.2f\nnet_amt=%0.2f\n",disc,amt);
   }
   else if (amt>=3000)
   {
       disc=amt*0.45;
       net_amt=amt-disc;
       printf("disc=%0.2f\nnetamt=%0.2f\n",disc,amt);
   }
   else
   {
       printf("invalid purchase amt");
   }
   return 0;






}
