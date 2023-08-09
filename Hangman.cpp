#include<iostream>
#include <string> 
#include <stdlib.h> 
#include <ctime>
#include <cstdlib>
#include<conio.h>
#include "List.h"
using namespace std;
void DrawMan(int tries){
	cout<<endl<<endl;
	cout<<"  -----"<<endl;
	cout<<"  |   |"<<endl; 
	cout<<"  |"; if(tries>=1) cout<<"   O      "; cout<<endl;
	cout<<"  |"; if(tries>=2) cout<<"   |      "; cout<<endl;
	cout<<"  |"; if(tries>=3) cout<<"  /|\\    "; cout<<endl;
	cout<<"  |"; if(tries>=4) cout<<"   |    "; cout<<endl;
	cout<<"  |"; if(tries>=5) cout<<"  / \\    "; cout<<endl;
	cout<<"  |"<<endl; 
	cout<<"__|__"<<endl;
}

int main()
{
	int ran,tries=0,attempts=5;
	char guess[5];
	char guessed[5];
	char counter;
   char word[5];
   char Again;
   
  
   srand(time(0));	
       int num = ((rand() % 1410));
	string words = list[num];
	
	for(int i = 0; i < 5; i++)
	{
		word[i] = words[i];
	}
	do{
	   
     cout<<"\n\n************************************************WELCOME TO***************************************************\n";
     cout<<"**************************************************HANG MAN***************************************************\n";
     cout<<"Rules:\n1.Enter a single character to guess the word picked by AI.\n2.You will get 5 attempts to guess the word.\n3.After 5 attempts you will be hanged and forced to make the complete guess.";
	 cout<<"\nThe word you have to guess is"<<endl;
	 cout<<"\n\t_ _ _ _ _"<<endl<<endl<<endl; 
	 string n[5]={"_","_","_","_","_"}	;
     for (int i=0;tries<5;i++){
     	cin>>guess[i];
     	 guess[i] = toupper(guess[i]);
     	if(guess[i] == word[0] || guess[i] == word[1] || guess[i] == word[2] || guess[i] == word[3] || guess[i] == word[4])
     	{
			 if(counter == guess[i]){
     			cout<<"\nYou have entered this letter before.Try another letter\n";
			 
			 } 
			 else{
			 
     		counter=guess[i];
     		cout<<"\ncorrect guess\n"<<endl; 
     		  if(guess[i] == word[0]){
     			n[0]=word[0];
     			cout<<n[0]<<" "<<n[1]<<" "<<n[2]<<" "<<n[3]<<" "<<n[4]<<endl; }
     		 else if (guess[i] == word[1]){
     			n[1]=word[1];
     			cout<<n[0]<<" "<<n[1]<<" "<<n[2]<<" "<<n[3]<<" "<<n[4]<<endl; }
     		else  if (guess[i] == word[2]){
     			n[2]=word[2];
     			cout<<n[0]<<" "<<n[1]<<" "<<n[2]<<" "<<n[3]<<" "<<n[4]<<endl; }
     		else  if (guess[i] == word[3]){
     			n[3]=word[3];
     			cout<<n[0]<<" "<<n[1]<<" "<<n[2]<<" "<<n[3]<<" "<<n[4]<<endl; }
     		else if (guess[i] == word[4]){
     			n[4]=word[4];
     			cout<<n[0]<<" "<<n[1]<<" "<<n[2]<<" "<<n[3]<<" "<<n[4]<<endl; }
     		cout<<"\nEnter guess again"<<endl; }
       }
		 else 
		 {
		 cout<<"\nwrong guess :\n"<<endl;
		 cout<<"You have "<<attempts-- <<" tries left";
		 	cout<<"\nEnter guess again"<<endl;
		 	tries++;
		 	DrawMan(tries);
	     }
	 }
	 
	  system("CLS");
	  cout<<"\n\n\tYOU HAVE BEEN HANGED"<<endl;
	 tries=5;
	 DrawMan(tries);
	 cout<<"\nYour guessed letters are :";
	 for(int i=0;i<5;i++){cout<<guess[i]; } cout<<endl;
	 for(int i=0;i<5;i++){ cout<<n[i]; } cout<<endl;
	 cout<<"\n\nNow make your final guess :";
	 for (int i=0;i<5;i++){
	 	cin>>guessed[i];
		  guessed[i] = toupper(guessed[i]); }
	 	if(guessed[0]==word[0] && guessed[1]==word[1]&& guessed[2]==word[2]&& guessed[3]==word[3] && guessed[4]==word[4])
         {
		   cout<<"You are correct"	; 
		   cout<<"\n\t\tCONGRATULATIONS YOU WON";
		   getch();
		   return 0;
		}
		  else
		{
		   cout<<"You are wrong\n"; 
		  cout<<"The correct word is \n";
		  	 for (int i=0;i<5;i++){
	 	cout<<word[i]; }
	        getch();
	 		  system("CLS");
	 		
	 	cout<<"\n\n\n\tDo you want to play again(y or n) :";
	 	cin>>Again;
 }
 }while(Again=='y'|| Again=='Y'); 
}
