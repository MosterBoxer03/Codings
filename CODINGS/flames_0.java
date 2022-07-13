import java.util.*;
public class Flames_0
{
 public static char[] flames={'f','l','a','m','e','s'};
 public static void pop(int n)
 {
	 int i,j;
	 for(i=n-1,j=n;j<flames.length;i++,j++)
	  {char x='\0';
		 flames[i]=flames[j];System.out.println(flames[1]=='@');
	  }flames[i]='@';
 }
 public static char Calculation(String word1,String word2)
 {
  int i,j,c=0,res;
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
  for(i=6;i>1;i--)
  {
	  res=c%i;
	  if(res==0)
	  {
		  res=i;
	  }
	  pop(res);
  }	  
  r=flames[0];
  return r;
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