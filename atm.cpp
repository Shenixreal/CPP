#include <iostream>
using namespace std;

void showMenu()
{
    cout << "********** MENU **********" << endl;
    cout << "1. Show balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit" << endl;
    cout << "**************************" << endl;
}

int main()
{
    int option;
    double balance = 1000; //Add any amount as your balance
    double depositAmount, withdrawAmount;

    do{
        showMenu();

        cout << "Enter option: ";
        cin >> option;

        system("cls");

        switch(option)
        {
            case 1: cout << "Balance is " << balance << endl << endl;
            break;

            case 2: cout << "Enter deposit amount: ";
            cin >> depositAmount;
            balance += depositAmount;
            break;

            case 3: cout << "Enter amount to withdraw: ";
            cin >> withdrawAmount;
            if (withdrawAmount <= balance){
                balance -= withdrawAmount;
            } else {
                cout << "There isn't enough money in your account." << endl << endl;
            }
            break;
        }

    } while(option != 4);

}