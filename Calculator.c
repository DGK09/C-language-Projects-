#include<stdlib.h>
#define EOF    'N'

void line(void)  {
      printf("\n%s","____________________"
      "_____________________________");
      }
      
      
void add(double a,double b) {
       printf("\n  %.10lg + %.10lg = %.15lg\n",a,b,a+b); }

void sub(double a,double b) {
      printf("\n  %.10lg - %.10lg = %.15g\n",a,b,a-b);  }
      
void mult(double a,double b) {
      printf("\n  %.10lg × %.10lg = %.15lg\n",a,b,a*b);  }
      
void divid(double a,double b) {
      printf("\n  %.10lg ÷ %.10lg = %.15lg\n",a,b,a/b);  }
      
void Switch(double a,int op,double b)   {
    switch(op)    {
      case 1: add(a,b);
      break;
      case 2: sub(a,b);
      break;
      case 3:  mult(a,b);
      break;
      case 4: divid(a,b);
      break;
    default:printf("\nInvalid choice.Try again!");
                }      }
            
int main()   {
       double First=0.0,Second=0.0;
      char ch1; int ch=0;
      printf("\n_______WELCOME!_______");
      line();
      printf("%s","\n  You can perform " 
         "following" 
      " operations:\n"
      " \n  ( 1 ) Addition(+)"
      " \n  ( 2 ) Subraction(-)"
      " \n  ( 3 ) Multiplication(×)"
      " \n  ( 4 ) Division(÷)");
//      " \n  ( 5 ) ");  
      while(1) {   line();
           printf("\n\n  Enter 1st number : ");
           scanf("%lg",&First);
           
           printf("\n  Enter 2nd number : ");
           scanf("%lg",&Second);
           
           printf("\n  Enter your Choice  : ");
           scanf("%d",&ch);
           fflush(stdin);
           Switch(First,ch,Second);    
           if(ch==1||ch==2 ||ch==3||ch==4){line();
           printf("\n\n  Do you want to continue[ N ] :");    
          scanf("%c",&ch1);
         if(ch1==EOF)
          exit(0); }
                }      
      return 0;
}
