#include<stdio.h>
int pass,i,w,d,c;
char username;
char u[5]={'a','b','c','d','e'};
int p[5]={1234,5678,1010,1020,2004};
void data()
{
if(username=='a')
{
printf("full name: ali ahmed\n");
printf("number: 7958302934\n");
printf("account type: savings\n");
printf("account balance: 50,000\n");
}
else if(username=='b')
{
printf("full name: babita kumari\n");
printf("number: 896122934\n");
printf("account type: savings\n");
printf("account balance: 32,000\n");
}
else if(username=='c')
{
printf("full name: chandan srineth\n");
printf("number: 9058302934\n");
printf("account type: savings\n");
printf("account balance: 70,000\n");
}
else if(username=='d')
{
printf("full name: debansh singh rathod\n");
printf("number: 6958302934\n");
printf("account type: savings\n");
printf("account balance: 50,000\n");
}
else if(username=='e')
{
printf("full name: elvish yadav\n");
printf("number: 8958302934\n");
printf("account type: savings\n");
printf("account balance: 20,000\n");
}
}
void withdraw()
{
printf("enter amount to be withdrawn\n");
scanf("%d",&w);
printf("%d withdrawn, please log out",w);
}

void deposit()
{
printf("enter amount to be deposited\n");
scanf("%d",&w);
printf("%d deposited, please log out",d);
}
void balchk()
{
if(username=='a')
{
printf("account balance: 50,000\n");
}
else if(username=='b')
{
printf("account balance: 32,000\n");
}
else if(username=='c')
{
printf("account balance: 70,000\n");
}
else if(username=='d')
{
printf("account balance: 50,000\n");
}
else if(username=='e')
{
printf("account balance: 20,000\n");
}
}
int main()
{
printf("enter username\n");
scanf("%c",&username);
printf("enter password\n");
scanf("%d",&pass);
for(i=0;i<5;i++)
{
if(username==u[i])
{
if(pass==p[i])
{
printf("welcome,enter your choice\n");
 printf("1.customer details \n");
 printf("2.cash withdraw\n");
 printf("3.cash deposit\n");
 printf("4.balance check\n");
printf("5.logout\n ");
scanf("%d",&c);
switch(c)
{
case 1:
data();
break;

case 2:
withdraw();
break;

case 3:
deposit();
break;

case 4:
balchk();
break;

case 5:
break;

default:
printf("invalid choice");
}
}
else{
printf("invalid username or password");
break;
}
}
}
}

