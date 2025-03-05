#include <iostream>
#include <string>
#include <unordered_map>

class Donor {
private:
    static int nextId;
    int id;
    std::string name;
    std::string phone;
    std::string email;
    std::unordered_map<std::string, double> totalContribution;
public:
    Donor(std::string name, std::string phone, std::string email);

    int getId();
    std::string getName();
    std::string getPhone();
    std::string getEmail();
    std::unordered_map<std::string, double> getTotalContribution();

    void addContribution(std::string type, double amount);
    void display() const;
};