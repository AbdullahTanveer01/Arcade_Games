#include<iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void reveal(string sp);
void revealN(int n);
int main(){
	string start = "0",ready,spe;
	int qno,guess;
	
	srand(time(0));
     int random=  (rand() % 13) + 1;
	
	while(start != "s" && start != "S")
	{
		system("CLS");
		cout<<"\t*******************************************************************************************************\n";
		cout<<"\t     ******************************* WELCOME TO ********************************************** \n";
		cout<<"\t       *************************** GUESS THE CARD *****************************************  \n\n";
		cout	<< " \t\t\t\t\t    ________________ "  << endl
		        << " \t\t\t\t\t   |                |"  << endl
				<< " \t\t\t\t\t   |     *****      | " << endl
				<< " \t\t\t\t\t   |   **     **    | " << endl
				<< " \t\t\t\t\t   |  **        **  | " << endl
				<< " \t\t\t\t\t   |  **       **   | " << endl
				<< " \t\t\t\t\t   |          **    | " << endl
				<< " \t\t\t\t\t   |         **     | " << endl
				<< " \t\t\t\t\t   |       **       | " << endl
				<< " \t\t\t\t\t   |       **       | " << endl
				<< " \t\t\t\t\t   |                | " << endl
				<< " \t\t\t\t\t   |       **       | " << endl
				<< " \t\t\t\t\t   |       **       | " << endl
				<< " \t\t\t\t\t   |________________| " << endl;
   
   		cout<<"\nComputer has guessed a card. Your goal is to guess the card by using these questions as basis for the guessing.\n";
   		cout<<"Rule:\n You can only use 3/5 questions.\nAfter using all questions you must guess the card.\n";
   		cout<<"Press S to start :";
   		cin>>start;
	}
	
	
   system("CLS");
   
   cout<<"These are the questions you can pick from";
    for (int i=0;i<3;i++){
	
   	cout<<"\n1:Is the number a multiple of 2?\n2:Is the number a special character?\n3:Is the number between 5 and 7?\n4:Is the number less than 5?\n5:Is the number greater than 5?\n";
    cin>>qno;
    if(qno== 1){
    	if (random%2 == 0)
    	cout<<"YES\n";
    	else
    	cout<<"NO\n";
	}
	else if(qno== 2){
		if(random == 11|| random == 12 || random == 13 ||random == 1)
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}
	else if (qno== 3){
		if(random == 5, random == 6 , random == 7)
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}
	else if (qno == 4){
		if (random<5)
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}
		else if (qno == 5){
		if (random>5)
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}
}   

	cout<<"\nAre you ready to guess: y or n : ";
	cin>>ready;
	
	while(ready != "y" && ready != "Y" && ready != "n" && ready != "N")
	{
		cout << "Invalid Input\n";
		cout<<"\nAre you ready to guess: y or n : ";
		cin >> ready;
	}
   
	if (ready == "y" || ready =="Y")
	system("CLS");
	else if (ready == "n" || ready =="N")
	{
		system("CLS");
		cout<<"\n\n******************************** YOU LOSE *************************************************";
		return 0;
	}
	
	
    cout<<"\tMake your guess : ";
    cin>>guess;
    if (guess == random)
    cout<<"\n\n******************************** YOU WIN *************************************************";
    else 
    cout<<"\n\n******************************** YOU LOSE *************************************************";
    cout<<"\n\tThe card was\n\n";
    if (random < 11 && random != 1)
      revealN(random);
	else if(random == 11)
	{
	 spe = "J";
	reveal(spe); }
	else if(random == 12) { spe = "Q";
		reveal(spe); }
	else if(random == 13) { spe = "K";
		reveal(spe);}
	else if(random == 1){ spe = "A";
		reveal(spe); }
				return 0;
}

void reveal(string sp){
	int reveal= (rand() % 3) + 1;
    if (reveal == 1)
    {
	  cout<<        "  _____________  "  << endl
				<< " |             | " << endl
				<< " |" << sp << "\t       |"  << endl
				<< " |      *      | "  << endl
				<< " |     * *     | "  << endl
				<< " |    *   *    | "  << endl
				<< " |   *     *   | "  << endl
				<< " |  *       *  | "  << endl
				<< " |   *     *   | "  << endl
				<< " |    *   *    | "  << endl
				<< " |     * *     | "  << endl
				<< " |      *      | "  << endl
				<< " |_____________| "   ;}
   else if (reveal == 2)
    {
	  cout       << "  _____________  " << endl
				 << " |             | " <<  endl
				 << " |" << sp << "\t       |"<< endl
				 << " |   **   **   | " <<endl
				 << " |  *  * *  *  | " << endl
			     << " |  *       *  | " << endl
				 << " |   *     *   | "  << endl
				 << " |    *   *    | " <<endl
			     << " |     * *     | "  << endl
				 << " |      *      | "  << endl
				 << " |             | "  << endl
			     << " |             | "  << endl
				 << " |_____________| " << endl;  }
	else if(reveal == 3)
	 {
	  cout<<       "  _____________ " << endl
				<< " |             | " << endl
			    << " |" << sp << "\t       |" << endl
				<< " |      *      | " << endl
				<< " |     * *     | " << endl
				<< " |    *   *    | " << endl
			    << " |   *     *   | " << endl
				<< " |  *       *  | " << endl
				<< " |  *  * *  *  | " << endl
				<< " |   ** * **   | " << endl
				<< " |     ***     | " << endl
				<< " |    *****    | " << endl
			    << " |_____________| " << endl;  }
     
}
void revealN(int n){
		int reveal= (rand() % 3) + 1;
    if (reveal == 1)
    {
	  cout<<       "  _____________  "  << endl
				<< " |             | " << endl
				<< " |" << n << "\t       |"  << endl
				<< " |      *      | "  << endl
				<< " |     * *     | "  << endl
				<< " |    *   *    | "  << endl
				<< " |   *     *   | "  << endl
				<< " |  *       *  | "  << endl
				<< " |   *     *   | "  << endl
				<< " |    *   *    | "  << endl
				<< " |     * *     | "  << endl
				<< " |      *      | "  << endl
				<< " |_____________| "   ;}
   else if (reveal == 2)
    {
	  cout       << "  _____________  " << endl
				 << " |             | " <<  endl
				 << " |" << n << "\t       |"<< endl
				 << " |   **   **   | " <<endl
				 << " |  *  * *  *  | " << endl
			     << " |  *       *  | " << endl
				 << " |   *     *   | "  << endl
				 << " |    *   *    | " <<endl
			     << " |     * *     | "  << endl
				 << " |      *      | "  << endl
				 << " |             | "  << endl
			     << " |             | "  << endl
				 << " |_____________| " << endl;  }
	else if(reveal == 3)
	 {
	  cout<<       "  _____________ " << endl
				<< " |             | " << endl
			    <<"  |" << n << "\t       |" << endl
				<< " |      *      | " << endl
				<< " |     * *     | " << endl
				<< " |    *   *    | " << endl
			    << " |   *     *   | " << endl
				<< " |  *       *  | " << endl
				<< " |  *  * *  *  | " << endl
				<< " |   ** * **   | " << endl
				<< " |     ***     | " << endl
				<< " |    *****    | " << endl
			    << " |_____________| " << endl;  }
}
