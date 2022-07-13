#include <string>
#include <iostream>
#include <sstream> 

using namespace std;

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
  
  int s=0;
  int ib[ia[1]] = {0};
  getline(cin, input);
  j=0;
  for(i=0;input[i]!='\0';i++){
      if(input[i]==' '){
          j++;
      }
      else{
          ib[j]=ib[j]*10+(input[i]-48);
          s=s+ib[j];
      }
  }

  // print output
  cout << s;

  return 0;
}
