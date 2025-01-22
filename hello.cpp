#include <iostream>
#include <iomanip>

int main ()
{
    double balance = 123;
    int choice = 0;

    do{
        std::cout << "******************";
        std::cout << "Enter your choice";
        std::cout << "******************";
        std::cout << "1. Show Balance\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. Exit\n";
        std::cin >> choice;
    switch(choice){
        case 1: showBalance(balance);
                break;
        case 2: balance += deposit();
                showBalance(balance);
                break;
        case 3: balance -= withdraw(balance);
                showBalance(balance);
                break;
        case 4: std::cout << "Thanks for visiting\n";
                break;
        default:std::cout << "Invalid choice\n";
    }
  }while(choice !=4);

}
