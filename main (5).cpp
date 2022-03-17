#include <iostream>

using namespace std;

int main()
{
float transaction;
double balanceTotal = 2149.36;
double balanceTest;
double negativeFee = 26.50;

//start program
cout << "Welcome to the Banking calculator." << endl;

for(int transactionCount = 0; transactionCount < 6; transactionCount++)
{
    //ask user for transaction amount.
    cout << "Please enter transaction amount." << endl;
    cin >> transaction;

    //if balance is negative after transaction, if yes, then remove the 26.50 fee from the balance.
    if(transaction > balanceTotal){
    balanceTest = balanceTotal - negativeFee;
    balanceTotal = balanceTest - transaction;
    }

    //check if balance is negative, if yes, end loop and give final balance
    if (balanceTotal < 0){
    cout << "your final balance is $" << balanceTotal<< endl;
    transactionCount = 6;
    }

    //check if balance is positive, if yes, remove the transaction amount from the total.
    if (transaction < balanceTotal){
        balanceTest = balanceTotal - transaction;
        balanceTotal = balanceTest;

        cout << "your new balance is $" << balanceTotal << "." << endl;
    }

}

//end program
cout << "Thank you for using the Banking calculator." << endl;

return 0;
}
