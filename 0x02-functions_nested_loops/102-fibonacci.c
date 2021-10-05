#include<stdio.h>    
/**
 * main - check the code.
 * Return: Always 0.
 */
int main(void)    
{    
 int n1=0,n2=1,n3,i,number;    
 for(i=1;i<51;++i)
 {    
  n3=n1+n2;    
  printf("%d ,",n3);    
  n1=n2;    
  n2=n3;    
 }  
  return 0;  
 }    
