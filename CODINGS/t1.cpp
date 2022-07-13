#include<iostream>
using namespace std;
int main(){
 int arr[]={1,2,3,4,5,6,7,8,9};
 int flag=0;
 int i;
 for(i=0;i<9;i++){
  if(arr[i]==5 && flag==0){
   flag=1;
  }
  if(flag==0){
   cout<<arr[i];
  }
 }
 
 cout<<"\n";
 flag=0;
 for(i=0;i<9;i++){
  if(arr[i]==5 && flag==0){
   flag=1;
  }
  if(arr[i]==7 && flag==1){
   flag=0;
  }
  if(flag==1){
   cout<<arr[i];
  }
 }
 cout<<"\n";
 
 flag=1;
 for(i=0;i<9;i++){
   if(arr[i]==7){
    flag=0;
   }
   if(flag==0){
    cout<<arr[i];
   }
 }
 cout<<"\n";
 return 0;
}
