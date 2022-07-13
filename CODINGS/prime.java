import java.util.Scanner;
class Prime{
 public static int prime(int x){
  int i,n=0;
  for(i=1;i<=x;i++){
   if(x%i==0)
    n++;
  }
  return n;
 }
 public static void main(String[] arg){
  Scanner inp=new Scanner(System.in);
  int x,n;
  System.out.println("\nEnter a number to check prime or not");
  x=inp.nextInt();
  n=prime(x);
  if(n==1)
   System.out.println("The given number "+x+" is neither prime nor not a prime");
  else if(n==2)
   System.out.println("The given number "+x+" is prime");
  else
   System.out.println("The given number "+x+" is not a prime");
 }
}