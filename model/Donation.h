#include <iostream>
#include <string>
#include <chrono>
#include <ctime>
#include <iomanip>

class Donation {
private:
    static int nextId;
    int id;
    std::string type;
    double quantity;
    int donor_id;
    std::chrono::system_clock::time_point date;
public:
    Donation(std::string type, double quantity, int donor_id);
    
    void display() const;
};