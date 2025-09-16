// Kate Rivera, 9/15/2025, Bank Account Management System, Lab Activities: Objects and Classes I

#include <iostream>
#include <vector>

class BankAccount{
    public:
        BankAccount(); // Default constructor
        void deposit();
        void withdraw();
    
        BankAccount(std::string accountNum, std::string nameAccHolder, double numBalance); // Parameterized constructor
        
        // Getter & setter methods
        std::string getAccountNumber() const;
        std::string getAccountHolderName() const;
        double getBalance() const;
    
    
    
    private:
        std::string accountNumber;
        std::string accountHolderName;
        double balance;
        

    };
   
int main() {
    
    
    
    
    
    return 0;
}
