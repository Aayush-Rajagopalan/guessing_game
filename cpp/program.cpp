#include <iostream>
using namespace std;

int main(){
    int num, guess, tries = 0;
	srand(time(0));
	num = rand() % 100 + 1; 
	cout << "Guessing Number Game\n\n";

    do{
        cout << "Enter a number between 1 and 100: ";
        cin >> guess;
        tries++;
        if (guess == num)
            cout << "You got it!\n";
        if (guess < num)
            cout << "Too low.\n";
        else if (guess > num)
            cout << "Too high.\n";

        
    } while (guess != num);

    return 0;


}