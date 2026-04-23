#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class ATM
{
private:
    int CashAvailable;
    string bank;
    string CurrentUser;

public:
    ATM()
    {
        CashAvailable = 0;
        bank = "None";
        CurrentUser = "None";
    }
    ~ATM()
    {
        cout << "ATM object destroyed." << endl;
    }
    ATM(const ATM &a)
    {
        CashAvailable = a.CashAvailable;
        bank = a.bank;
        CurrentUser = a.CurrentUser;
    }
    void SetCashAvailable(int c)
    {
        CashAvailable = c;
    }
    void GetCashAvailable()
    {
        cout << "Cash Available: " << CashAvailable << endl;
    }
    void SetBank(string b)
    {
        bank = b;
    }
    void GetBank()
    {
        cout << "Bank: " << bank << endl;
    }
    void SetCurrentUser(string u)
    {
        CurrentUser = u;
    }
    void GetCurrentUser()
    {
        cout << "Current User: " << CurrentUser << endl;
    }
    void AddRecord()
    {
        cout << "------CONFIGURE ATM------\n"
             << endl;
        cout << "Enter Bank Name: ";
        getline(cin, bank);
        cout << "Enter Cash Available: ";
        cin >> CashAvailable;
        cin.ignore();
        cout << "Enter Current User: ";
        getline(cin, CurrentUser);
        cout << "------ATM CONFIGURED------" << endl;
        cout << "Bank: " << bank << endl;
        cout << "Cash Available: " << CashAvailable << endl;
        cout << "Current User: " << CurrentUser << endl;
    }
};

class Transaction
{
private:
    string TransType;
    string date;
    double amount;
    int TransID;

public:
    Transaction()
    {
        TransType = "Unknown";
        date = "N/A";
        amount = 0.0;
        TransID = 0;
    }
    ~Transaction()
    {
        cout << "Transaction object destroyed." << endl;
    }
    Transaction(const Transaction &t)
    {
        TransType = t.TransType;
        date = t.date;
        amount = t.amount;
        TransID = t.TransID;
    }
    void SetTransType(string t)
    {
        TransType = t;
    }
    void GetTransType()
    {
        cout << "Transaction Type: " << TransType << endl;
    }
    void SetDate(string d)
    {
        date = d;
    }
    void GetDate()
    {
        cout << "Date: " << date << endl;
    }
    void SetAmount(double a)
    {
        amount = a;
    }
    void GetAmount()
    {
        cout << "Amount: " << amount << endl;
    }
    void SetTransID(int id)
    {
        TransID = id;
    }
    void GetTransID()
    {
        cout << "Transaction ID: " << TransID << endl;
    }
    void AddRecord()
    {
        cout << "------ADD TRANSACTION------\n"
             << endl;
        cout << "Enter Transaction Type: ";
        getline(cin, TransType);
        cout << "Enter Date: ";
        getline(cin, date);
        cout << "Enter Amount: ";
        cin >> amount;
        cout << "Enter Transaction ID: ";
        cin >> TransID;
        cout << "------TRANSACTION ADDED------" << endl;
        cout << "Transaction Type: " << TransType << endl;
        cout << "Date: " << date << endl;
        cout << "Amount: " << amount << endl;
        cout << "Transaction ID: " << TransID << endl;
    }
};
class Bank
{
private:
    string BankName;
    string Account;

public:
    Bank()
    {
        BankName = "Unknown";
        Account = "N/A";
    }
    ~Bank()
    {
        cout << "Bank object destroyed." << endl;
    }
    Bank(const Bank &b)
    {
        BankName = b.BankName;
        Account = b.Account;
    }
    void SetBankName(string b)
    {
        BankName = b;
    }
    void GetBankName()
    {
        cout << "Bank Name: " << BankName << endl;
    }
    void SetAccount(string a)
    {
        Account = a;
    }
    void GetAccount()
    {
        cout << "Account: " << Account << endl;
    }
    void AddRecord()
    {
        cout << "------ADD BANK RECORD------\n"
             << endl;
        cout << "Enter Bank Name: ";
        getline(cin, BankName);
        cout << "Enter Account: ";
        getline(cin, Account);
        cout << "------BANK RECORD ADDED------" << endl;
        cout << "Bank Name: " << BankName << endl;
        cout << "Account: " << Account << endl;
    }
};
class Card
{
private:
    string CardNo;
    string ExpiryDate;
    int CVV;
    bool isBlocked;

public:
    Card()
    {
        CardNo = "Unknown";
        ExpiryDate = "N/A";
        CVV = 0;
        isBlocked = false;
    }
    ~Card()
    {
        cout << "Card object destroyed." << endl;
    }
    Card(const Card &c)
    {
        CardNo = c.CardNo;
        ExpiryDate = c.ExpiryDate;
        CVV = c.CVV;
        isBlocked = c.isBlocked;
    }
    void SetCardNo(string c)
    {
        CardNo = c;
    }
    void GetCardNo()
    {
        cout << "Card Number: " << CardNo << endl;
    }
    void SetExpiryDate(string e)
    {
        ExpiryDate = e;
    }
    void GetExpiryDate()
    {
        cout << "Expiry Date: " << ExpiryDate << endl;
    };
    void SetCVV(int cvv)
    {
        CVV = cvv;
    }
    void GetCVV()
    {
        cout << "CVV: " << CVV << endl;
    }
    void SetIsBlocked(bool b)
    {
        isBlocked = b;
    }
    void GetIsBlocked()
    {
        cout << "Is Blocked: " << (isBlocked ? "Yes" : "No") << endl;
    }
    void AddRecord()
    {
        cout << "------ADD CARD RECORD------\n"
             << endl;
        cout << "Enter Card Number: ";
        getline(cin, CardNo);
        cout << "Enter Expiry Date: ";
        getline(cin, ExpiryDate);
        cout << "Enter CVV: ";
        cin >> CVV;
        cout << "Is the card blocked? (1 for Yes, 0 for No): ";
        bool blocked;
        cin >> blocked;
        isBlocked = blocked;
        cout << "------CARD RECORD ADDED------" << endl;
        cout << "Card Number: " << CardNo << endl;
        cout << "Expiry Date: " << ExpiryDate << endl;
        cout << "CVV: " << CVV << endl;
        cout << "Is Blocked: " << (isBlocked ? "Yes" : "No") << endl;
    }
};

class User
{
    string Name;
    string PhoneNo;
    string Account;

public:
    User()
    {
        Name = "Unknown";
        PhoneNo = "N/A";
        Account = "N/A";
    }
    ~User()
    {
        cout << "User object destroyed." << endl;
    }
    User(const User &u)
    {
        Name = u.Name;
        PhoneNo = u.PhoneNo;
        Account = u.Account;
    }
    void SetName(string n)
    {
        Name = n;
    }
    void GetName()
    {
        cout << "Name: " << Name << endl;
    }
    void SetPhoneNo(string p)
    {
        PhoneNo = p;
    }
    void GetPhoneNo()
    {
        cout << "Phone Number: " << PhoneNo << endl;
    }
    void SetAccount(string a)
    {
        Account = a;
    }
    void GetAccount()
    {
        cout << "Account: " << Account << endl;
    }
    void AddRecord()
    {
        cout << "------ADD USER RECORD------\n"
             << endl;
        cout << "Enter Name: ";
        getline(cin, Name);
        cout << "Enter Phone Number: ";
        getline(cin, PhoneNo);
        cout << "Enter Account: ";
        getline(cin, Account);
        cout << "------USER RECORD ADDED------" << endl;
        cout << "Name: " << Name << endl;
        cout << "Phone Number: " << PhoneNo << endl;
        cout << "Account: " << Account << endl;
    }
};

class Account
{
    string AccNo;
    string AccType;
    double Balance;
    int PIN;

public:
    Account()
    {
        AccNo = "Unknown";
        AccType = "N/A";
        Balance = 0.0;
        PIN = 0;
    }
    ~Account()
    {
        cout << "Account object destroyed." << endl;
    }
    Account(const Account &a)
    {
        AccNo = a.AccNo;
        AccType = a.AccType;
        Balance = a.Balance;
        PIN = a.PIN;
    }
    void SetAccNo(string a)
    {
        AccNo = a;
    }
    void GetAccNo()
    {
        cout << "Account Number: " << AccNo << endl;
    }
    void SetAccType(string t)
    {
        AccType = t;
    }
    void GetAccType()
    {
        cout << "Account Type: " << AccType << endl;
    }
    void SetBalance(double b)
    {
        Balance = b;
    }
    void GetBalance()
    {
        cout << "Balance: " << Balance << endl;
    }
    void SetPIN(int p)
    {
        PIN = p;
    }
    void GetPIN()
    {
        cout << "PIN: " << PIN << endl;
    }
    void AddRecord()
    {
        cout << "------ADD ACCOUNT RECORD------\n"
             << endl;
        cout << "Enter Account Number: ";
        getline(cin, AccNo);
        cout << "Enter Account Type (Savings/Current): ";
        getline(cin, AccType);
        cout << "Enter Balance: ";
        cin >> Balance;
        cout << "Enter PIN: ";
        cin >> PIN;
        cout << "------ACCOUNT RECORD ADDED------" << endl;
        cout << "Account Number: " << AccNo << endl;
        cout << "Account Type: " << AccType << endl;
        cout << "Balance: " << Balance << endl;
        cout << "PIN: " << PIN << endl;
    }
};
int main()
{
    ATM myATM;
    Transaction myTransaction;
    Bank myBank;
    Card myCard;
    User myUser;
    Account myAccount;
    int choice;
    do
    {
        cout << "------ATM MANAGEMENT SYSTEM------\n"
             << endl;
        cout << "1. Configure ATM\n";
        cout << "2. Add Transaction\n";
        cout << "3. Add Bank Record\n";
        cout << "4. Add Card Record\n";
        cout << "5. Add User Record\n";
        cout << "6. Add Account Record\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // Clear the input buffer
        switch (choice)
        {
        case 1:
            myATM.AddRecord();
            break;
        case 2:
            myTransaction.AddRecord();
            break;
        case 3:
            myBank.AddRecord();
            break;
        case 4:
            myCard.AddRecord();
            break;
        case 5:
            myUser.AddRecord();
            break;
        case 6:
            myAccount.AddRecord();
            break;
        case 7:
            cout << "Exiting the program." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 7);

    return 0;
}