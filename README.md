# Objects_Classes_Lab
🔬 Lab Activities: Objects and Classes I

# Bank Account Class

A C++ class for representing a banking system

## Data Dictionary

| Attribute     | Data Type     | Description                    |
|---------------|---------------|--------------------------------|
| `accountHolderName`  | `std::string` | Name of the account holder.    |
| `accountNumber`      | `std::string` | Unique account identifier.     |
| `balance`            | `double`      | Total amount of money in account.    |

## Methods List

| Method Signature             | Return Type   | Description               |
|------------------------------|---------------|---------------------------|
| `BankAccount()`              | (Constructor) | Default constructor       |
| `BankAccount(accountHolderName, accountNumber, balance)` | (Constructor) | Parameterized constructor |
| `getAccountHolderName() const` | `std::string` | Gets the account holder name. |
| `getAccountNumber() const`   | `std::string` | Gets the account number.  |
| `getBalance() const`         | `std::string` | Gets the account's current balance. |
| `deposit()`                  | `void`        | Add money to account.     |
| `withdraw()`                 | `void`        | Take money from account.  |
