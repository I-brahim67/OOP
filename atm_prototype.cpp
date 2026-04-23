#include <iostream>
#include <string>
using namespace std;

// ---------------- Account Class ----------------
class Account {
public:
    int accNo;
    double balance;
    int pin;
    string accType;

    Account(int a, double b, int p, string t) {
        accNo = a;
        balance = b;
        pin = p;
        accType = t;
    }

    bool verifyPIN(int enteredPin) {
        return enteredPin == pin;
    }

    void deposit(double amount) {
        balance += amount;
    }

    bool withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            return true;
        }
        return false;
    }
};

// ---------------- User Class ----------------
class User {
public:
    string name;
    string phoneNo;
    Account *account;

    User(string n, string p, Account *acc) {
        name = n;
        phoneNo = p;
        account = acc;
    }
};

// ---------------- Card Class ----------------
class Card {
public:
    int cardNo;
    string expiryDate;
    int CVV;
    bool isBlocked;

    Card(int c, string e, int cvv) {
        cardNo = c;
        expiryDate = e;
        CVV = cvv;
        isBlocked = false;
    }
};

// ---------------- Transaction Class ----------------
class Transaction {
public:
    int transId;
    string date;
    double amount;
    string type;

    Transaction(int id, string d, double amt, string t) {
        transId = id;
        date = d;
        amount = amt;
        type = t;
    }

    void display() {
        cout << "\nTransaction ID: " << transId;
        cout << "\nType: " << type;
        cout << "\nAmount: " << amount;
        cout << "\nDate: " << date << endl;
    }
};

// ---------------- Receipt Class ----------------
class Receipt {
public:
    int receiptNo;
    string date;
    int accountNo;
    string transType;

    Receipt(int r, string d, int acc, string t) {
        receiptNo = r;
        date = d;
        accountNo = acc;
        transType = t;
    }

    void printReceipt() {
        cout << "\n--- Receipt ---";
        cout << "\nReceipt No: " << receiptNo;
        cout << "\nAccount No: " << accountNo;
        cout << "\nTransaction: " << transType;
        cout << "\nDate: " << date << endl;
    }
};

// ---------------- Bank Class ----------------
class Bank {
public:
    string bankName;

    Bank(string name) {
        bankName = name;
    }
};

// ---------------- ATM Class ----------------
class ATM {
public:
    double cashAvailable;
    Bank bank;
    User *currentUser;

    ATM(double cash, Bank b) : bank(b) {
        cashAvailable = cash;
        currentUser = NULL;
    }

    void login(User *user, int enteredPin) {
        if (user->account->verifyPIN(enteredPin)) {
            currentUser = user;
            cout << "\nLogin Successful!\n";
        } else {
            cout << "\nInvalid PIN!\n";
        }
    }

    void checkBalance() {
        cout << "\nBalance: " << currentUser->account->balance << endl;
    }

    void deposit(double amount) {
        currentUser->account->deposit(amount);
        cout << "\nDeposited Successfully!\n";
    }

    void withdraw(double amount) {
        if (amount <= cashAvailable && currentUser->account->withdraw(amount)) {
            cashAvailable -= amount;
            cout << "\nWithdraw Successful!\n";
        } else {
            cout << "\nTransaction Failed!\n";
        }
    }
};

// ---------------- Main Function ----------------
int main() {
    // Create objects
    Account acc1(12345, 10000, 1111, "Saving");
    User user1("Ali", "03001234567", &acc1);
    Bank bank("MyBank");
    ATM atm(50000, bank);

    int pin;
    cout << "Enter PIN: ";
    cin >> pin;

    atm.login(&user1, pin);

    if (atm.currentUser != NULL) {
        int choice;
        do {
            cout << "\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\nChoice: ";
            cin >> choice;

            if (choice == 1) {
                atm.checkBalance();
            } 
            else if (choice == 2) {
                double amt;
                cout << "Enter amount: ";
                cin >> amt;
                atm.deposit(amt);
            } 
            else if (choice == 3) {
                double amt;
                cout << "Enter amount: ";
                cin >> amt;
                atm.withdraw(amt);
            }

        } while (choice != 4);
    }

    return 0;
}