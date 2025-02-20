#include <iostream>
#include <iomanip>

using namespace std;

double Maven1(double netBalance, double payment, int d1, int d2, double interestRate) {
    double averageDailyBalance = (netBalance * d1 - payment * d2) / d1;
    double interest = averageDailyBalance * interestRate;
    return interest;
}

int main() {
    double netBalance, payment, interestRate;
    int d1, d2;

    cout << "Enter the net balance: ";
    cin >> netBalance;
cout << "Enter the payment made: ";
    cin >> payment;

    cout << "Enter the number of days in the billing cycle: ";
    cin >> d1;

    cout << "Enter the number of days payment is made before billing cycle: ";
    cin >> d2;

    cout << "Enter the interest rate per month: ";
    cin >> interestRate;

    double Interest= calculateInterest(netBalance, payment, d1, d2, interestRate);

    cout << fixed << setprecision(2);
    cout << "The interest on the unpaid balance is: $" << interest << endl;

    return 0;
}
