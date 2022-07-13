#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main()
{
	system("cls");
 int i=0;
 char a;
 char password[30];
 cout<<"Enter your password\t:\t";
 do
 {
  a=getch();
  cout<<int(a);
  if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||a>=0||a<=9)
  {cout<<"hai";
   password[i]='i';
   i++;
  }
  if(int(a)==8)
  {cout<<"bye";
   i--;  
   password[i]='\0';
  }
  if(a=='\r')
  {
   password[i]='\0';
  }
 }while(a!='\r');
 cout<<"\npassword\t:\t"<<password<<"\ns="<<strlen(password)<<"\t\t"<<i;
 return 0;
} 