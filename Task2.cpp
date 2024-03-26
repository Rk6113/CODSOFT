#include <iostream>

using namespace std;

int main(){
int operation;
float first_num, second_num, result;

cout << "Basic Arthemetic Calculator" << endl;

do{
cout << "1. Addition \n2. Subtraction \n3.Multiplication \n4.Division \n5.Exit" << endl;
cin >>  operation;

switch (operation)
{
case 1:
    result = first_num + second_num;
    break;
case 2:
    result = first_num - second_num;
    break;
case 3:
    result = first_num * second_num;
    break;
case 4:
    result = first_num/second_num;
    break;
case 5:
    return;
default:
cout << "Invalid choice" << endl;
    break;
}

}while(operation!=5);

    return 0;
}