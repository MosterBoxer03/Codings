import java.util.*;
class Flames
{
 public static char Calculation(String word1,String word2)
 {
  char[] flames={'f','l','a','m','e','s'};
  int i,j,x=1,s=0,c=0,res=0;
  char[]w1=word1.toCharArray();
  char[]w2=word2.toCharArray();
  char r;
  for(i=0;i<w1.length;i++)
  {
   for(j=0;j<w2.length;j++)
   {
    if(Character.compare(w1[i],w2[j])==0)
    {
		c++;
		w1[i]='@';
		w2[j]='#';
	}
   }
  }
  for(i=0;s!=5;i++,x++)
  {
      if(i==6)
	      i=0;
      do
	  {
	   res=0;
       if(x!=c&&flames[i]=='@')
       {
	      i++;
	      if(i==6)
	      {
		     i=0;
	      }
	   }
	   else
		   res=1;
	  }while(res!=1);
	  if(x==c)
	  {
		  if(flames[i]!='@')
		  {
			  flames[i]='@';
			  x=0;
			  s++;
		  }
		  else if(flames[i]=='@')
		  {
			  j=i;
			  res=0;
			  do
			  {
				  if(flames[j]!='@')
				  {
					  flames[j]='@';
					  x=0;
					  s++;
					  i=j;
					  res=1;
				  }
				  else
				     j++;
				  if(j==6)
				     j=0;
			  }while(res!=1);
		  }
	  }
  }
  for(i=0;i<flames.length;i++)
	  if(flames[i]!='@')
		  res=i;
  return flames[res];
 }
 public static void main(String[] arg)
 {
	 Scanner inp=new Scanner(System.in);
	 String name_1,name_2,result;
	 char res;
	 System.out.println("Enter your name");
	 name_1=inp.nextLine();
	 System.out.println("Enter the another person name");
	 name_2=inp.nextLine();
	 res=Calculation(name_1,name_2);
	 if(res=='f')
      result="FRIENDS";
     else if(res=='l')
      result="LOVERS";	 
     else if(res=='a')
      result="AFFECTIONED";
     else if(res=='m')
      result="MARRIAGE";
     else if(res=='e')
      result="ENIMES";
     else if(res=='s')
      result="SISTER";
     else
      result="ERROR";		 
	 System.out.println("You and another person will be "+result);
 }
}