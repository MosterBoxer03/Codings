import java.util.*;
class Sam
{
public static void main(String[] arg)
{
	int i,j;
        String word="manojkumar";
	char[]w1=word.toCharArray();
	char[]w2={'a','n','i','t','h','a'};
 for(i=0;i<w1.length;i++)
  {
   for(j=0;j<w2.length;j++)
   {System.out.println(w1[i]+"\t"+w2[j]);
    System.out.println(Character.compare(w1[i],w2[j])==0);
   }
  }
}
}