import java.util.*;
class Calander
{
 int date=0,year=0,month=0;
 public static void Calculation_1(Calander c)
{
 int r2=0;
 if(c.month!=12)
 {
  c.month=c.month%12;
  r2=c.month/12;
 }
 c.year=c.year+r2;
 if(c.date!=0||c.month!=0||c.year!=0)
 do
 {
  switch(c.month)
  {
   case 1:
   {
    if(c.date>31)
    {
     c.date=c.date-31;
     c.month++;
    }
    else if(c.date<=0)
    {
     c.date=c.date+31;
     c.month=12;
	 c.year--;
	}
    else
    {
     c.date=c.date;
    }
   }break;
   case 2:
   {
    if(c.year%400==0&&c.year%100!=0||c.year%4==0&&c.date>29)
    {
     c.date=c.date-29;
     c.month++;
    }
    else if(c.year%400!=0&&c.year%100==0||c.year%4!=0&&c.date>28)
    {
     c.date=c.date-28;
     c.month++;
    }
    else if(c.date<=0)
    {
     c.date=c.date+31;
     c.month--;
    }
    else
    {
     c.date=c.date;
    }
   }break;
   case 3:
   {
    if(c.date>31)
    {
     c.date=c.date-31;
     c.month++;
    }
    else if(c.year%400==0&&c.year%100!=0||c.year%4==0&&c.date<=0)
    {
     c.date=c.date+29;
     c.month--;
    }
    else if(c.year%400!=0&&c.year%100==0||c.year%4!=0&&c.date<0)
    {
     c.date=c.date+28;
     c.month--;
	}
    else
    {
     c.date=c.date;
    }
   }break;
   case 4:
   {
    if(c.date>30)
    {
     c.date=c.date-30;
     c.month++;
    }
    else if(c.date<=0)
    {
     c.date=c.date+31;
     c.month--;
    }
    else
    {
     c.date=c.date;
    }
   }break;
   case 5:
   {
    if(c.date>31)
    {
     c.date=c.date-31;
     c.month++;
    }
    else if(c.date<=0)
    {
     c.date=c.date+30;
     c.month--;
    }
    else
    {
     c.date=c.date;
    }
   }break;
   case 6:
   {
    if(c.date>30)
    {
     c.date=c.date-30;
     c.month++;
    }
    else if(c.date<=0)
    {
     c.date=c.date+31;
     c.month--;
    }
    else
    {
     c.date=c.date;
    }
   }break;
   case 7:
   {
    if(c.date>31)
    {
     c.date=c.date-31;
     c.month++;
    }
    else if(c.date<=0)
    {
     c.date=c.date+30;
     c.month--;
    }
    else
    {
     c.date=c.date;
    }
   }break;
   case 8:
   {
    if(c.date>31)
    {
     c.date=c.date-31;
     c.month++;
    }
    else if(c.date<=0)
    {
     c.date=c.date+31;
     c.month--;
    }
    else
    {
     c.date=c.date;
    }
   }break;
   case 9:
   {
    if(c.date>30)
    {
     c.date=c.date-30;
     c.month++;
    }
    else if(c.date<=0)
    {
     c.date=c.date+31;
     c.month--;
    }
    else
    {
     c.date=c.date;
    }
   }break;
   case 10:
   {
    if(c.date>31)
    {
     c.date=c.date-31;
     c.month++;
    }
    else if(c.date<=0)
    {
     c.date=c.date+30;
     c.month--;
    }
    else
    {
     c.date=c.date;
    }
   }break;
   case 11:
   {
    if(c.date>30)
    {
     c.date=c.date-30;
     c.month++;
    }
    else if(c.date<=0)
    {
     c.date=c.date+31;
     c.month--;
    }
    else
    {
     c.date=c.date;
    }
   }break;
   case 12:
   {
    if(c.date>31)
    {
     c.date=c.date-31;
     c.month=1;
     c.year++;
    }
    else if(c.date<=0)
    {
     c.date=c.date+30;
     c.month--;
    }
    else
    {
     c.date=c.date;
	}
   }break;
   default:
   {
    if(c.month<=0)
    {
     c.date=c.date+31;
     c.month=c.month+12;
     c.year--;
    }
    if(c.year==-1)
    {
     c.year=0;
    }	
   }
  }
 }while(c.date>31||c.date<=0||c.month<=0);
 c.date=c.date;
 c.month=c.month;
 c.year=c.year;
}
 public static int Calculation_2(Calander c)
 {
  int total=0,i,x=c.year;
  if(c.year<0)
  {
   c.year=c.year*(-1);
  }
  for(i=1;i<c.year;i++)
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
  for(i=1;i<=c.month;i++)
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
    if(c.year%400==0&&c.year%100!=0||c.year%4==0)
    {
     total=total+29;
    }
    else if(c.year%400!=0&&c.year%100==0||c.year%4!=0)
    { 
     total=total+28;
    } 
   }
  }
  for(i=1;i<=c.date;i++)
  {
   total=total+1;
  }
  return total;
 }
 public static void main(String[] arg)
 {
  Scanner inp=new Scanner(System.in);
  Calander c1,c2,c3;
  c1=new Calander();
  c2=new Calander();
  c3=new Calander();
  int t1,t2,ch1,ch2,ch3,d,m,y;
  System.out.println("Enter the current DATE");
  System.out.println("\nEnter DATE\t:\t");
  d=inp.nextInt();
  System.out.println("Enter MONTH\t:\t");
  m=inp.nextInt();
  System.out.println("Enter YEAR\t:\t");
  y=inp.nextInt();
  c2.date=d;
  c2.month=m;
  c2.year=y;
  Calculation_1(c2);
  t1=Calculation_2(c2);
  do
  {
   System.out.println("\nTo perform\n\t\t\t1.Addition\n\t\t\t2.Difference\n\t\t\t3.Day\n\t\t\t4.Exit\nEnter your choice\t:\t");
   ch1=inp.nextInt();
   switch(ch1)
   {
    case 1:
    {
     System.out.println("\nTo perform ADDITION by\n\t\t\t1.Dates\n\t\t\t2.Months\n\t\t\t3.Years\n\t\t\t4.All the above\n\t\t\t5.Exit\nEnter your choice\t:\t");
     ch2=inp.nextInt();
     switch(ch2)
     {
      case 1:
      {
       System.out.println("How many dates do you need to add\t:\t");
	   d=inp.nextInt();
	   c1.date=c2.date+d;
	   c1.month=c2.month;
	   c1.year=c2.year;
	   Calculation_1(c1);
	   System.out.println(c1.date+"./"+c1.month+"./"+c1.year);

      }break;
      case 2:
      {
	   System.out.println("How many months do you need to add\t:\t");
	   m=inp.nextInt();
	   c1.date=c2.date;
	   c2.month=c2.month+m;
       t2=c2.month/12;
       c1.month=c2.month%12;
	   c1.year=c2.year+t2;
	   Calculation_1(c1);
       System.out.println(c1.date+"./"+c1.month+"./"+c1.year);
      }break;
      case 3:
      {
	   System.out.println("How many years do you need to add\t:\t");
	   y=inp.nextInt();
	   c1.date=c2.date;
	   c1.month=c2.month;
	   c1.year=c2.year+y;
	   Calculation_1(c1);
	   System.out.println(c1.date+"./"+c1.month+"./"+c1.year);
      }break;
      case 4:
      {
	   c1.date=c1.month=c1.year=0;
	   System.out.println("How many dates do you need to add\t:\t");
	   d=inp.nextInt();
	   System.out.println("How many months do you need to add\t:\t");
	   m=inp.nextInt();
	   System.out.println("How many years do you need to add\t:\t");
	   y=inp.nextInt();
	   c1.date=c2.date+d;
	   c1.month=c2.month+m;
	   t2=c2.month/12;
       c1.month=c1.month%12;
	   c1.year=c2.year+y+t2;
	   Calculation_1(c1);
	   System.out.println(c1.date+"./"+c1.month+"./"+c1.year);
      }break;
      default:
      {
	   System.out.println("Enter the valid option");
      }break;
     }
    }break;
    case 2:
    {
     System.out.println("Enter the date");
     System.out.println("\nEnter date\t:\t");
     d=inp.nextInt();
     System.out.println("Enter month\t:\t");
     m=inp.nextInt();
     System.out.println("Enter year\t:\t");
     y=inp.nextInt();
	 c3.date=d;
     c3.month=m;
     c3.year=y;
     Calculation_1(c3);
     t2=Calculation_2(c3);
     c1.date=t1-t2;
     if(c1.date<0)
     {
      c1.date=c1.date*(-1);
     }
     do
     {
      System.out.println("\nTo perform DIFFERENCE by\n\t\t\t1.dates\n\t\t\t2.months\n\t\t\t3.years\n\t\t\t4.Exit\nEnter your choice\t:\t");
      ch3=inp.nextInt();
      switch(ch3)
      {
	   case 1:
	   {  
	    System.out.println(c1.date);
	   }break;
	   case 2:
	   {
	    c2.date=c1.date;
	    c2.month=1;
		c2.year=1;
	    Calculation_1(c2);
		c2.year=c2.year-1;
	    c2.month=c2.month+(c2.year*12);
	    System.out.println(c2.date+"./"+c2.month);
	   }break;
	   case 3:
	   {
	    c2.date=c1.date;
	    c2.month=1;
		c2.year=1;
	    Calculation_1(c2);
		c2.year=c2.year-1;
	    System.out.println(c2.date+"./"+c2.month+"./"+c2.year);
	   }break;
	   default:
	   {
	    System.out.println("Enter the valid option");
	   }break;
      }
     }while(ch3!=4);
    }break;
    case 3:
    {
     do
     {
      System.out.println("\nTo perform by\n\t\t\t1.Current date\n\t\t\t2.Some other date\n\t\t\t3.Exit\nEnter your choice\t:\t");
      ch3=inp.nextInt();
      if(ch3==1)
      {
	   c3.date=c2.date;
	   c3.month=c2.month;
	   c3.year=c2.year;
      }
      else if(ch3==2)
      {
	   System.out.println("Enter date\t:\t");
	   d=inp.nextInt();
	   System.out.println("Enter month\t:\t");
	   m=inp.nextInt();
	   System.out.println("Enter year\t:\t");
	   y=inp.nextInt();
	   c3.date=d;
       c3.month=m;
       c3.year=y;
	   Calculation_1(c3);
      }
      c1.date=c1.month=c1.year=0;
      c1.date=Calculation_2(c3);
      if(c1.date<0)
      {
	   c1.date=c1.date*(-1);
      }
	  if(ch3==1||ch3==2)
	  {
       c1.date=c1.date;
       c1.date=c1.date%7;
       switch(c1.date)
       {
	    case 1:{System.out.println("SUNDAY");}break;
	    case 2:{System.out.println("MONDAY");}break;
	    case 3:{System.out.println("TUESDAY");}break;
	    case 4:{System.out.println("WEDNESDAY");}break;
	    case 5:{System.out.println("THURSDAY");}break;
	    case 6:{System.out.println("FRIDAY");}break;
	    default:{System.out.println("SATURDAY");}break;
       }
	  }
     }while(ch3!=3);
    }break;
    default:
    {
     System.out.println("Enter the valid option");
    }break;
   }
  }while(ch1!=4);
 } 
}
