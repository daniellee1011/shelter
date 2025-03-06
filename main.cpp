#include <iostream>
#include "model/Donor.h"
#include "model/Donation.h"

int main() {
    std::cout << "*** Welcome to our shetler! ***" << "\n";
    std::cout << "\n";

    // Donor donor1("John", "123-456-7890", "test@gmail.com");
    // donor1.display();

    Donation donation1("food", 3, 3);
    donation1.display();

    return 0;
}