#include<iostream>
#include<conio.h>
#define SIZE 20
using namespace std;

int ADD(int num1,int num2){
  return num1+num2;
}

int CHAR_ARR_TO_INT(char *str){
    int sum=0;
    for(int i=0;str[i];i++){
      if(str[i]==32)
        continue;
      else
        sum=sum*10+(str[i]-48);
    }
    return sum;
}

char* STR_CONCATE(char *str1,char *str2){
  int count=0,count2=0;
  for(count=0;str1[count];count++);
  for(count,count2;str2[count2];count2++,count++)
    str1[count]=str2[count2];
  str1[count]='\0';
  return str1;
}

void UPPER_STRING(char *str) {
   int count = 0;
   while (str[count] != '\0') {
      if (str[count] >= 'a' && str[count] <= 'z') {
         str[count] = str[count] - 32;
      }
      count++;
   }
}

int main()
{
  char str1[SIZE],str2[SIZE];
  int count1=0,count2=0,c1=0,c2=0;
  cout<<"ENTER INPUT IN INTEGER OR STRING:";
  cin.getline(str1,SIZE);
  cout<<"ENTER INPUT IN INTEGER OR STRING:";
  cin.getline(str2,SIZE);
  UPPER_STRING(str1);
  UPPER_STRING(str2);
  for(int i=0;i<str1[i];i++)
    if(str1[i]>=48 && str1[i]<=57)
      count1++;
  for(int i=0;i<str2[i];i++)
    if(str2[i]>=48 && str2[i]<=57)
      count2++;
  for(int i=0;i<str1[i];i++){
    if(str1[i]>=48 && str1[i]<=57 && str1[i]>=65 && str1[i]<=90 && str2[i]>=48 && str2[i]<=57 && str2[i]>=65 && str2[i]<=90)
      c2++;
    else
      c1++;
  }  
  if(count1==c1&&count2==c1)
    cout<<"SUM IS:"<<ADD(CHAR_ARR_TO_INT(str1),CHAR_ARR_TO_INT(str2))<<endl;
  else
    cout<<"THE CONCATENATED STRING IS:"<<STR_CONCATE(str1,str2)<<endl;
  return 0;
}