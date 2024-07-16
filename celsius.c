

 /* temperature of a city in fahrenheit into degrees is input through the keyboard.
 write a program to convert this temperature into centigrade degrees
 author;vinod
 usn;01fe21bme092
 roll:431*/


 #include<stdio.h>
 main()
 {
     float f,c;
     printf("enter the temperature in fahrenheit\n ");
     scanf("%f",&f);
     c=(f-32)*(5.0/9.0);
     printf("celsius=%f\n",c);
 }

