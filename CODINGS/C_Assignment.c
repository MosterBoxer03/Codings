1)C Program to check whether number is palindrome or not
#include<stdio.h>
void main(){
 int num=6;
 int i;
 int count=0;
 for(i=1;i<=num;i++){
  if(num%i==0){
   count++;
  }
 }
 if(count==1){
  printf("Neither Prime Nor Not a Prime");
 }
 else if(count==2){
  printf("Prime");
 }
 else{
  printf("Not a Prime");
 }
}

11)C Program to Print prime number Pyramid
#include<stdio.h>
void main(){
 int num=7;
 int i,j;
 int count;
 int noofprime=0,temp;
 for(j=2;j<=num;j++){
  count=0;
  for(i=1;i<=j;i++){
   if(j%i==0){
    count++;
   }
  }
  if(count==2){
   noofprime++;
  }
 }
 temp=1;
 for(j=2;j<=num;j++){
  count=0;
  for(i=1;i<=j;i++){
   if(j%i==0){
    count++;
   }
  }
  if(count==2){
   for(j=i;j<=noofprime;j++){
    printf(" ");
   }
   for(j=1;j<=temp;j++){
    printf("%d",i-1);
   }temp=temp+2;
    printf("\n");
  }
 }
}

21)C program to find sum of numbers Series : 1+2+3+4+….+N

#include<stdio.h>
void main(){
 int N=5;
 int i;
 int sum=0;
 for(i=1;i<=N;i++){
  sum+=i;
 }
 printf("%d",sum);
}

31)C Program to Print Double Inverted Pyramid Pattern

#include <stdio.h>
void main() {
 int rows, i, j, space;
 printf("Enter the number\t:\t");
 scanf("%d", &rows);
 for (i = rows; i >= 1; --i) {
  for (space = 0; space < rows - i; ++space)
   printf("  ");
  for (j = i; j <= 2 * i - 1; ++j)
   printf("* ");
  for (j = 0; j < i - 1; ++j)
   printf("* ");
  printf("\n");
 }
 for (i = rows; i >= 1; --i) {
  for (space = 0; space < rows - i; ++space)
   printf("  ");
  for (j = i; j <= 2 * i - 1; ++j)
   printf("* ");
  for (j = 0; j < i - 1; ++j)
   printf("* ");
  printf("\n");
 }
}

41)C Program to check input is prime number or not

#include<stdio.h>
void main(){
 int n, reversed = 0, remainder, original;
 printf("Enter an integer: ");
 scanf("%d", &n);
 original = n;
 while (n != 0) {
  remainder = n % 10;
  reversed = reversed * 10 + remainder;
  n /= 10;
 }
 if (original == reversed){
  printf("%d is a palindrome.", original);
 }
 else{
  printf("%d is not a palindrome.", original);
 }
}
