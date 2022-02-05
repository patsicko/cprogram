#include <stdio.h>
#include <stdlib.h>
int main(){
char Aletter,Cletter,times;
int money, counter=1;
printf("For agent only! Enter the agent letter:");
scanf("%c",&Aletter);
printf("Welcome to guessing game");
printf("Enter money:");
scanf("%d",&money);
if(money<50){
   printf("Enter valid amount above 50rwf"); 
}
else{
while (counter>=money/50)
{
   printf("Enter a letter to guess:");
   scanf("%c",&Cletter);
   if(Cletter==Aletter){
       printf("Congratulation!! you won the game");
   }
   else{
       printf("You failed! try again:");
       }
   counter++;

}

  printf("Your balance is low, Enter money if you wish to replay"); 

}
return 0;
}