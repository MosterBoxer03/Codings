#include<iostream.h>
class Patient
{
 string Name,Disease;
 int Age;
 public:
  Patient(string=0,int=0,string=0);
  bool InsertPatient(int,Patient[],int);
  Patient DeletePatient(int,Patient[],int);
  friend ostream &operator<<(ostream &out,const Patient &p);
};
Patient::Patient(String name,int age,string disease)
{
 Name=name;
 Age=age;
 Disease=disease;
}
bool Patient::InsertPatient(int pos,Patient p,int size)
{
 int inpos,i;
 if(pos==1)
 {
  inPos=0;
 }
 else if(pos==2)
 {
  inPos=size-1;
 }
 else
 {
  inPos=pos;
 }
 for(i=size-1;i>inPos;i--)
 {
  p[i]=p[i-1];
 }
 p[inpos]=p;
 return true;
}
Patient Patient::DeletePatient(int pos,Patient p,int size)
{
 int i;
 Patient temp;
 temp=p[pos];
 for(i=pos;i<size;i++)
 {
  p[i]=p[i+1];
 }
 return temp;
}
void main()
{
 int ch1,ch2,curPos=0,size;
 cout<<"Enter the size of an array\t:\t";
 cin>>size;
 Patient p[size];
 Patient temp;
 cout<<"TO perfotm\n\t\t\t1.Insert\n\t\t\t2.Delete\nEnter your choice\t:\t";
 cin>>ch1;
 Switch(ch1)
 {
  case 1:
  {
   if(size==curpos)
   {
    cout<<"The Patient List Is Full";
   }
   else
   {
    cout<<"To perform Insert at\n\t\t\t1.First\n\t\t\t2.Last\n\t\t\t3.Position\nEnter your choice\t:\t";
    cin>>ch2;
    cout<<"Enter the element to be insert\t:\t";
    cin>>Element;
    switch(ch2)
    {
     case 1:
	 {
 	  cout<<InsertElement(ch2,p,size);
 	  curPos++;
 	 }break;
     case 2:
	 {
	  cout<<InsertElement(ch2,p,size);
	  curPos++;
 	 }break;
 	 case 3:
 	 {
 	  cout<<"Enter the position to be Insert\t:\t";
 	  cin>>Position;
 	  cout<<InsertElement(Position,p,size);
	  curPos++;
 	 }break;
 	 default:
	 {
	  cout<<"Enter the valid option";
	 }break;
    }
   }
  }break;
  case 2:
  {
   cout<<"To perform Insert at\n\t\t\t1.First\n\t\t\t2.Last\n\t\t\t3.Position\nEnter your choice\t:\t";
   cin>>ch2;
   switch(ch2)
   {
    case 1:
	{
	 temp=DeleteElement(ch2,p,size);
    }break;
    case 2:
	{
	 temp=DeleteElement(ch2,p,size);
	}break;
	case 3:
	{
	 cout<<"Enter the position to be Delete\t:\t";
	 cin>>Position;
	 temp=DeleteElement(Position,p,size);
	}break;
	default:
	{
	 cout<<"Enter the valid option";
	}break;
   } 
   cout<<temp;   
  }break;
  default:
  {
   cout<<"Enter the valid option";
  }break;
 }
}
ostream &operator<<(ostream &out,const Patient &p)
{
 out<<"Name\t:\t"<<p.Name<<"\nAge\t:\t"<<p.Age<<"Disease\t:\t"<<p.Disease;
 return out;
}