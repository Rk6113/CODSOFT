#include <iostream>

using namespace std;

int main(){
int operation;
float first_num, second_num, result;

cout << "Basic Arthemetic Calculator" << endl;



cout << "1. Addition \n2. Subtraction \n3.Multiplication \n4.Division " << endl;
cin >>  operation;

cout << "Enter first number: ";
cin>>first_num;

cout << "Enter second number: ";
cin>> second_num;

switch (operation)
{
case 1:
    result = first_num + second_num;
    cout << "The result is " << result << endl;
    break;
case 2:
    result = first_num - second_num;
    cout << "The result is " << result << endl;
    break;
case 3:
    result = first_num * second_num;
    cout << "The result is " << result << endl;
    break;
case 4:
    result = first_num/second_num;
    cout << "The result is " << result << endl;
    break;
default:
cout << "Invalid choice" << endl;
    break;
}

    return 0;
}