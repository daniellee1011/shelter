#include "Donor.h"

int Donor::nextId = 1;

Donor::Donor(std::string name, std::string phone, std::string email)
    : id(nextId++), name(name), phone(phone), email(email) {}

int Donor::getId() { return id; };
std::string Donor::getName() { return name; };
std::string Donor::getPhone() { return phone; };
std::string Donor::getEmail() { return email; };
std::unordered_map<std::string, double> Donor::getTotalContribution() { return totalContribution; };

void Donor::addContribution(std::string type, double amount) {
    totalContribution[type] += amount;
}

void Donor::display() const {
    std::cout << "Donor ID: " << id << "\n"
            << "Name: " << name << "\n"
            << "Phone: " << phone << "\n"
            << "Email: " << email << "\n"
            << "Total Contribution:\n";
    for (const auto &it : totalContribution) {
        std::cout << it.first << ": " << it.second << "\n";
    }
    std::cout << "---------------------\n";
}