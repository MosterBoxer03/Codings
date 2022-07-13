class Swap{
public static void swap(int x,int y)
{
int t;
t=x;
x=y;
y=t;
}
public static void main(String[] arg)
{
int x=3,y=5;
swap(x,y);
System.out.println(x+"\t"+y); 
}
}