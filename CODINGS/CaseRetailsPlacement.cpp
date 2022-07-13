#include <string>
#include <iostream>
#include <sstream> 

using namespace std;

int check(int arr[],int k){
    for(int i=0;i<size(arr);i++){
        if(arr[i]==k){
            return i;
        }
    }
}
int main()
{
    int i,j;
  string input;

  // read input
  getline(cin, input);
  int len=input.length();
  int ia[len] = {0};
  
  j=0;
  for(i=0;input[i]!='\0';i++){
      if(input[i]==' '){
          j++;
      }
      else{
          ia[j]=ia[j]*10+(input[i]-48);
      }
  }
  
  int denomination[ia[1]] = {0};
  getlint(cin, input);
  j=0;
  for(i=0;input[i]!='\0';i++){
      if(input[i]==' '){
          j++;
      }
      else{
          denomination[j]=denomination[j]*10+(input[i]-48);
          s=s+ib[j];
      }
  }
  
  
  int k=0;
  int l=0;
  int flg[len] = {0};
  for(i=0;i<len;i++){
      int temp[ia[1]]={0};
      for(int itemp=0;itemp<ia[1];i++){
          temp[itemp]=denomination[itemp];
      }
      check(ia,temp)
      for(j=0;j<ia[1];j++){
          if(temp[j]==ia[i]){
              flg[i]==1;
          }else{
              for(k=0;k<ia[0];k++){
                  for(int itemp=0;itemp<ia[1];i++){
                     temp[itemp]=temp[itemp]+temp[itemp];
                     for(l=0;l<ia[1];l++){
                         if(temp[l]==ia[i]){
                             flg[i]==1;
                         }
                     }
                  }
              }
          }
      }
  }
  
  // print output
  cout << s;
  
  
  
  return 0;
}
