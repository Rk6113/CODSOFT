#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){

srand(time(NULL));

int guess;
int ran_num = (rand() %101) + 100;

cout << "Welcome to Number guessing game" << endl;

do{
cout << "Please guess the number between 100 to 200(inclusive): ";
cin>> guess;

if(guess < ran_num){
    cout << "Your guess is lower than the random number generated\n" << endl;
}
else if(guess == ran_num){
    cout << "Your guess is correct. Good job!! \n" << endl;
}else{
    cout << "Your guess is higher than the random number generated \n" << endl;
}
}while(guess!=ran_num);
    return 0;
}