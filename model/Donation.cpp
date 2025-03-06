#include "Donation.h"

int Donation::nextId = 1;

Donation::Donation(std::string type, double quantity, int donor_id)
    : id(nextId++), type(type), quantity(quantity), donor_id(donor_id) {}

void Donation::display() const {
    std::time_t now_c = std::chrono::system_clock::to_time_t(date);
    std::tm* local_tm = std::localtime(&now_c);

    std::cout << "Donation ID: " << id << "\n"
            << "Type: " << type << "\n"
            << "Quantity: " << quantity << "\n"
            << "Donor ID: " << donor_id << "\n"
            << "Date: " << std::put_time(local_tm, "%Y-%m-%d %H:%M:%S") << "\n";
    std::cout << "---------------------\n";
}