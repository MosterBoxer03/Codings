import java.util.*;
class string{
public static void main(String[] arg)
 {
		String s1="abc";
	int z1;
	z1=s1.length();
	System.out.println(s1.length());
	for(int i=z1;i<5;i++){
		s1=s1+" ";
	}s1=s1+".";
	System.out.println(s1.length()+s1); 
 }
}