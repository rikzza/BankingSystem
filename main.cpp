#include <iostream>
#include <string>
using namespace std;

void createAcc(string names[], string passwords[], double balances[], int accNumber[], int &totalAccounts);

int main()
{
    string names[100];
    string passwords[100];
    double balances[100];
    int accNumber[100];
    int totalAccounts = 0;

    int choice;

    do
    {
        cout << "--- BANKING SYSTEM ---" << endl;
        cout << "1. create account" << endl;
        cout << "2. login" << endl;
        cout << "3. exit" << endl;

        cout << "enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
        {
            cout << "creating your account..." << endl;
            createAcc(names, passwords, balances, accNumber, totalAccounts);
        }
        break;
        case 2:
        {
            cout << "logging in";
        }
        break;
        case 3:
        {
            cout << "exiting program";
        }
        break;
        default:
        {
            cout << "error! invalid choice";
        }
        }
    } while (choice != 3);

    return 0;
}

void createAcc(string names[], string passwords[],double balances[], int accNumber[], int &totalAccounts)
{
    string name, password;
    double balance;

    cout << "enter your name: ";
    cin >> name;

    cout << "\nenter your password: ";
    cin >> password;

    cout << "\nenter initial  deposit: ";
    cin >> balance;

    names[totalAccounts] = name;
    passwords[totalAccounts] = password;
    balances[totalAccounts] = balance;
    accNumber[totalAccounts] = 1000 + totalAccounts;

    cout << "account created! your account number is: " << accNumber[totalAccounts] << endl;
    totalAccounts++;
    cout << endl;

}