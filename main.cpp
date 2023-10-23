#include <iostream>


int main() {

    const int DOLLAR {100};
    const int QUARTER {25};
    const int DIME {10};
    const int NICKEL {5};

    int changeAmount {0};
    std::cout << "Enter number that represent cents: ";
    std::cin >> changeAmount;

    int dollar_store, quarter_store, dime_store, nickel_store, pennies_store, running_balance;

    dollar_store = changeAmount / DOLLAR;
    running_balance = changeAmount % DOLLAR;

    quarter_store = running_balance / QUARTER;
    running_balance = running_balance % QUARTER;

    dime_store = running_balance / DIME;
    running_balance = running_balance % DIME;

    nickel_store = running_balance / NICKEL;
    running_balance = running_balance % NICKEL;

    pennies_store = running_balance;

    std::cout << "Number of Dollar(s): " << dollar_store << std::endl;
    std::cout << "Number of Quarter(s): " << quarter_store << std::endl;
    std::cout << "Number of Dime(s): " << dime_store << std::endl;
    std::cout << "Number of Nickel(s): " << nickel_store << std::endl;
    std::cout << "Number of Penny(s): " << pennies_store << std::endl;


    return 0;
}
