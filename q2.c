#include <stdio.h>
#include <stdlib.h>
void main(){
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
  printf("Enter a letter to guess:");
   scanf("%c",&Cletter);
while (counter<=money/50)
{
   
   if(Cletter==Aletter){
       printf("Congratulation!! you won the game");
      return;
    
   }
   printf("You failed! try again:");
   scanf("%c",&Cletter);
   counter++;

}

  printf("Your balance is low, Enter money if you wish to replay %d",counter); 

}
return;
}