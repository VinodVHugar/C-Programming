#include<stdio.h>
void join_string(char fname[60],char mname[20],char lname[20])
{
    int i;
    while(fname[i]!='\0')
    {
        i++;

    }
     fname[i++]=' ';
     int j=0;
     while(mname[j]!='\0')
    {
     fname[i++]=mname[j++];
    }
    fname[i++]=' ';
    int k=0;
    while(lname[k]!='\0')
    {
        fname[i++]=lname[k++];
    }
    fname[i++]='\0';
    printf("Full name is %s\n",fname);
    char sname[5];
    sname[0]=fname[0];
    sname[1]=mname[0];
    sname[2]=lname[0];
    sname[3]='\0';
    printf(" Short name is %s\n",sname);


}
int main()
{
    char fname[60],  mname[20], lname[20];
    printf("Enter the first name\n");
    gets(fname);
    printf("Enter the Middle Name\n");
    gets(mname);
    printf("Enter the Last Name\n");
    gets(lname);
    join_string(fname,mname,lname);
    return 0;
}
