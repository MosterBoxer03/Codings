#include<iostream>
#include<conio.h>
usingnamespace std;
class Calander
{
 long int date;
 int year,month;
 public:
  int getYear();
  int getMonth();
  long int getDate();
  void setYear(int);
  void setMonth(int);
  void setDate(long int);
  void Calculation_1(long int &d,int &m,int &y);
  long int Calculation_2(long int d,int m,int y);
};
int Calander::getYear()
{
 return year;
}
int Calander::getMonth()
{
 return month;
}
long int Calander::getDate()
{
 return date;
}
void Calander::setYear(int y)
{
 year=y;
}
void Calander::setMonth(int m)
{
  month=m;
}
void Calander::Calculation_1(long int &cd,int &cm,int &cy)
{
 long int dat;
 int r2=0,mon=cm,yr;
 if(mon!=12)
 {
  mon=cm%12;
  r2=cm/12;
 }
 yr=cy+r2;
 A:
 {
  switch(mon)
  {
   case 1:
   {
    if(cd>31)
    {
     cd=cd-31;
     mon++;
    }
    else if(cd<=0)
    {
     cd=31;
     mon--;
    }
    else
    {
     dat=cd;
     break;
    }
   }
   case 2:
   {
    if(yr%400==0&&yr%100!=0||yr%4==0&&cd>29)
    {
     cd=cd-29;
     mon++;
    }
    else if(yr%400!=0&&yr%100==0||yr%4!=0&&cd>28)
    {
     cd=cd-28;
     mon++;
    }
    else if(cd<=0)
    {
     cd=31;
     mon--;
    }
    else
    {
     dat=cd;
     break;
    }
   }
   case 3:
   {
    if(cd>31)
    {
     cd=cd-31;
     mon++;
    }
    else if(yr%400==0&&yr%100!=0||yr%4==0&&cd<=0)
    {
     cd=29;
     mon--;
    }
    else if(yr%400!=0&&yr%100==0||yr%4!=0&&cd<0)
    {
     cd=28;
     mon--;
    }
    else
    {
     dat=cd;
     break;
    }
   }
   case 4:
   {
    if(cd>30)
    {
     cd=cd-30;
     mon++;
    }
    else if(cd<=0)
    {
     cd=31;
     mon--;
    }
    else
    {
     dat=cd;
     break;
    }
   }
   case 5:
   {
    if(cd>31)
    {
     cd=cd-31;
     mon++;
    }
    else if(cd<=0)
    {
     cd=30;
     mon--;
    }
    else
    {
     dat=cd;
     break;
    }
   }
   case 6:
   {
    if(cd>30)
    {
     cd=cd-30;
     mon++;
    }
    else if(cd<=0)
    {
     cd=31;
     mon--;
    }
    else
    {
     dat=cd;
     break;
    }
   }
   case 7:
   {
    if(cd>31)
    {
     cd=cd-31;
     mon++;
    }
    else if(cd<=0)
    {
     cd=30;
     mon--;
    }
    else
    {
     dat=cd;
     break;
    }
   }
   case 8:
   {
    if(cd>31)
    {
     cd=cd-31;
     mon++;
    }
    else if(cd<=0)
    {
     cd=31;
     mon--;
    }
    else
    {
     dat=cd;
     break;
    }
   }
   case 9:
   {
    if(cd>30)
    {
     cd=cd-30;
     mon++;
    }
    else if(cd<=0)
    {
     cd=31;
     mon--;
    }
    else
    {
     dat=cd;
     break;
    }
   }
   case 10:
   {
    if(cd>31)
    {
     cd=cd-31;
     mon++;
    }
    else if(cd<=0)
    {
     cd=30;
     mon--;
    }
    else
    {
     dat=cd;
     break;
    }
   }
   case 11:
   {
    if(cd>30)
    {
     cd=cd-30;
     mon++;
    }
    else if(cd<=0)
    {
     cd=31;
     mon--;
    }
    else
    {
     dat=cd;
     break;
    }
   }
   case 12:
   {
    if(cd>31)
    {
     cd=cd-31;
     mon=1;
     yr++;
     goto A;
    }
    else if(cd<=0)
    {
     cd=30;
     mon--;
     goto A;
    }
    else
    {
     dat=cd;
     break;
    }
   }
   default:
   {
    if(mon<=0)
    {
     cd=cd+31;
     mon=mon+12;
     yr--;
     goto A;
    }
   }
  }
 }
 cd=dat;
 cm=mon;
 cy=yr;
}
long int Calander::Calculation_2(long int d,int m,int y)
{
 long int total=0;
 int i,x=y;
 if(y<0)
 {
  y=y*(-1);
 }
 for(i=0;i<y;i++)
 {
  if(i%400==0&&i%100!=0||i%4==0)
  {
   total=total+366;
  }
  else if(i%400!=0&&i%100==0||i%4!=0)
  {
   total=total+365;
  }
 }
 if(x<0)
 {
  total=total*(-1);
 }
 for(i=2;i<=m;i++)
 {
  if(i==2||i==4||i==6||i==8||i==9||i==11)
  {
   total=total+31;
  }
  else if(i==5||i==7||i==10||i==12)
  {
   total=total+30;
  }
  else if(i==3)
  {
   if(y%400==0&&y%100!=0||y%4==0)
   {
    total=total+29;
   }
   else if(y%400!=0&&y%100==0||y%4!=0)
   {
    total=total+28;
   }
  }
 }
 for(i=1;i<=d;i++)
 {
  total=total+1;
 }
 return total;
}
void Calander::setDate(long int d)
{
 date=d;
}
void main()
{
 clrscr();
 int ch;
 do
 {
  clrscr();
  cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\tWELCOME\n\t\t\t\t 1.HAI\n\t\t\t\t 2.BYE\n\t\t\t   Enter your choice :";
  cin>>ch;
  if(ch==1)
  {
   clrscr();
   Calander cr;
   long int t1,t2,date=0,date_1,date_2;
   int ch1,ch2,ch3;
   int year=0,month=0,year_1,month_1,year_2,month_2;
   cout<<"Enter the current DATE";
   cout<<"\nEnter DATE\t:\t";
   cin>>date_1;
   cout<<"Enter MONTH\t:\t";
   cin>>month_1;
   cout<<"Enter YEAR\t:\t";
   cin>>year_1;
   cr.Calculation_1(date_1,month_1,year_1);
   cr.setDate(date_1);
   cr.setMonth(month_1);
   cr.setYear(year_1);
   t1=cr.Calculation_2(date_1,month_1,year_1);
   do
   {
    cout<<"\nTo perform\n\t\t\t1.Addition\n\t\t\t2.Difference\n\t\t\t3.Day\n\t\t\t4.Exit\nEnter your choice\t:\t";
    cin>>ch1;
    switch(ch1)
    {
     case 1:
     {
      cout<<"\nTo perform ADDITION by\n\t\t\t1.Dates\n\t\t\t2.Months\n\t\t\t3.Years\n\t\t\t4.All the above\n\t\t\t5.Exit\nEnter your choice\t:\t";
      cin>>ch2;
      switch(ch2)
      {
       case 1:
       {
	cout<<"How many Dates do you need to add\t:\t";
	cin>>date_2;
	month_2=year_2=date=month=year=0;
	cr.Calculation_1(date_2,month_2,year_2);
	t2=cr.Calculation_2(date_2,month_2,year_2);
	date=t1+t2;
	cr.Calculation_1(date,month,year);
	cout<<date<<"./"<<month<<"./"<<year;
       }break;
       case 2:
       {
	cout<<"How many Months do you need to add\t:\t";
	cin>>month_2;
	date_2=year_2=date=month=year=0;
	cr.Calculation_1(date_2,month_2,year_2);
	t2=cr.Calculation_2(date_2,month_2,year_2);
	date=t1+t2;
	cr.Calculation_1(date,month,year);
	cout<<date<<"./"<<month<<"./"<<year;
       }break;
       case 3:
       {
	cout<<"How many Years do you need to add\t:\t";
	cin>>year_2;
	date_2=month_2=date=month=year=0;
	cr.Calculation_1(date_2,month_2,year_2);
	t2=cr.Calculation_2(date_2,month_2,year_2);
	date=t1+t2;
	cr.Calculation_1(date,month,year);
	cout<<date<<"./"<<month<<"./"<<year;
       }break;
       case 4:
       {
	date=month=year=0;
	cout<<"How many Dates do you need to add\t:\t";
	cin>>date_2;
	cout<<"How many Months do you need to add\t:\t";
	cin>>month_2;
	cout<<"How many Years do you need to add\t:\t";
	cin>>year_2;
	cr.Calculation_1(date_2,month_2,year_2);
	t2=cr.Calculation_2(date_2,month_2,year_2);
	date=t1+t2;
	cr.Calculation_1(date,month,year);
	cout<<date<<"./"<<month<<"./"<<year;
       }break;
       default:
       {
	cout<<"Enter the valid option";
       }break;
      }
     }break;
     case 2:
     {
      cout<<"Enter the DATE";
      cout<<"\nEnter DATE\t:\t";
      cin>>date_2;
      cout<<"Enter MONTH\t:\t";
      cin>>month_2;
      cout<<"Enter YEAR\t:\t";
      cin>>year_2;
      cr.Calculation_1(date_2,month_2,year_2);
      t2=cr.Calculation_2(date_2,month_2,year_2);
      date=t1-t2;
      if(date<0)
      {
       date=date*(-1);
      }
      do
      {
       cout<<"\nTo perform DIFFERENCE by\n\t\t\t1.Dates\n\t\t\t2.Months\n\t\t\t3.Years\n\t\t\t4.Exit\nEnter your choice\t:\t";
       cin>>ch3;
       switch(ch3)
       {
	case 1:
	{
	 cout<<date;
	}break;
	case 2:
	{
	 date_1=date;
	 month=year=0;
	 cr.Calculation_1(date_1,month,year);
	 month=month+(year*12);
	 cout<<date_1<<"./"<<month;
	}break;
	case 3:
	{
	 date_1=date;
	 month=year=0;
	 cr.Calculation_1(date_1,month,year);
	 cout<<date_1<<"./"<<month<<"./"<<year;
	}break;
	default:
	{
	 cout<<"Enter the valid option";
	}break;
       }
      }while(ch3!=4);
     }break;
     case 3:
     {
      do
      {
       cout<<"\nTo perform by\n\t\t\t1.Current date\n\t\t\t2.Some other date\n\t\t\t3.Exit\nEnter your choice\t:\t";
       cin>>ch3;
       if(ch3==1)
       {
	date_2=cr.getDate();
	month_2=cr.getMonth();
	year_2=cr.getYear();
       }
       else if(ch3==2)
       {
	cout<<"Enter Date\t:\t";
	cin>>date_2;
	cout<<"Enter Month\t:\t";
	cin>>month_2;
	cout<<"Enter Year\t:\t";
	cin>>year_2;
	cr.Calculation_1(date_2,month_2,year_2);
       }
       date=month=year=0;
       date=cr.Calculation_2(date_2,month_2,year_2);
       if(date<0)
       {
	date=date*(-1);
       }
       date=date-3;
       date=date%7;
       switch(date+1)
       {
	case 1:{cout<<"SUNDAY";}break;
	case 2:{cout<<"MONDAY";}break;
	case 3:{cout<<"TUESDAY";}break;
	case 4:{cout<<"WEDNESDAY";}break;
	case 5:{cout<<"THURSDAY";}break;
	case 6:{cout<<"FRIDAY";}break;
	case 7:{cout<<"SATURDAY";}break;
       }
      }while(ch3!=3);
     }break;
     default:
     {
      cout<<"Enter the valid option";
     }break;
    }
   }while(ch1!=4);
  }
 }while(ch!=2);
}