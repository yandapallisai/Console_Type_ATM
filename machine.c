#include <stdio.h>
#include<conio.h>
char ac1[11]="40451614872",ph1[10]="9398050750";
char ac2[11]="78635927294";
char ac3[11]="68294692084";
char pin[]="1704";
double ac1_bal=5000;
double ac2_bal=5000;
double ac3_bal=5000;
void english();
void hindi();
void main()
{


int n;

printf("select language\n");
printf("1.english\t\t\t");
scanf("%d",&n);

switch(n)
{
    case 1:english();
            break;
    //case 2: hindi();
       //     break;
}

}
void english()
{int n;
   do{
    printf("1.Balance_enquery\t\t 2.With_drawl\n 3.Deposit\t\t4.Pin_enqerGeneration\n5.exit");
    printf("enter your choice\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:Balance_enquery();
                break;
        case 2: With_drawl();
                break;
        case 3:Deposit();
                break;
        case 4:Pin_Generation();
                break;
        case 5:exit(0);
    }
    }while(n<=5);

}
void Balance_enquery()
{ char s[10];
int x;
  printf("enter your account number\n");
  scanf("%s",&s);
  if(strlen(s)==11&&strcmp(s,ac1)==0)
  {


  printf("1.international\t\t\t2.domestic\n");
  scanf("%d",&x);

  switch(x)
  {
      case 1:International();
            break;
      case 2: Domestic();
                break;
  }
  }
  else
  {
      printf("please check your account number\n");
      return Balance_enquery();
  }
}
void International()
{ char p[10];
  float y;
    printf("enter pin no\n");
    scanf("%s",&p);
    if(strcmp(p,pin)==0)
    {

   printf("availabe balance is %lf\n",ac1_bal);
    printf("transcaction success........*");
    }
    else
    {
        printf("please check the pin number\n");
    }

}
void  Domestic()
{
    char p[10];
  float y;
    printf("enter pin number to check available balance\n");
     scanf("%s",&p);
    if(strcmp(p,pin)==0){
   printf("availabe balance is..... %lf\n",ac1_bal);
    printf("transcaction success\n");
    }
    else
    {

        printf("*.....please check pin number.....*\n");
    }

}
void With_drawl()
{
    char s[11];
char p[10];
int amt;
  printf("enter your account number\n");
  scanf("%s",&s);


  if(strlen(s)==11&&strcmp(s,ac1)==0)
  {
    printf("enter your pin\n");
  scanf("%s",&p);
    if(strcmp(pin,p)==0)
    {

        printf("enter amount\n");
        scanf("%d",&amt);
        if(amt<ac1_bal){
        ac1_bal=ac1_bal-amt;
        printf("transcation success\n");
        return Domestic();
        }
        else
        {
            printf("insufficient balance");
        }
    }
    else
    {
        printf("please check pin number\n");
    }

}
else {
printf("please check account number\n");
}
}
void Pin_Generation()
{ char ac[10],ph[10];
  printf("enter account number:");
  scanf("%s",&ac);
  if(strcmp(ac,ac1)==0)
  {
      printf("enter register mobile number");
      scanf("%s",&ph);
      if(strcmp(ph,ph1)==0)
      {
        printf("enter new pin");
        scanf("%s",&pin);
        printf("*.....transcation successfull.....*");
      }

  }
}
void Deposit()
{

      char s[11];
char p[10];
int amt;
  printf("enter your account number\n");
  scanf("%s",&s);


  if(strlen(s)==11&&strcmp(s,ac1)==0)
  {
    printf("enter your pin\n");
  scanf("%s",&p);
    if(strcmp(pin,p)==0)
    {

        printf("enter amount\n");
        scanf("%d",&amt);

        ac1_bal=ac1_bal+amt;
        printf("transcation success");
        return Domestic();


    }
    else
    {
        printf("please check pin number\n");
    }

}
else {
printf("please check account number\n");
}
}
void savings()
{ char p[10];
    printf("enter pin no");
    scanf("%s",&p);
    if(strcmp(p,pin)==0)
    {

    }
}



