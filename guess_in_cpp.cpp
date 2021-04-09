#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    system("cls");
	int num, guess, myNum, tries;
    int MAXTRY = 5;

	srand(time(0)); 
	num = rand() % 10 + 1; 

	cout << "Guess My Number Game\n\n";
     guess = 0;
     tries = 0;
    do
	{
        if (tries == 5)
	  {
		cout << "Last Chance! Think hard.\n";
	  }
    	cout << "Enter Your guess : ";
		cin >> myNum;
		tries++;

		if (myNum > num)
			cout << "Too high!\n\n";
		else if (myNum < num)
			cout << "Too low!\n\n";
		else
			cout << "\nCorrect! You got it in " << tries << " guesses!\n";
	}while ((guess == 0) && (tries <= MAXTRY));

	return 0;
}
