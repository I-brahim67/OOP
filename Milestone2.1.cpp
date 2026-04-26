#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const string RESET = "\033[0m";
const string RED = "\033[1;31m";
const string GREEN = "\033[1;32m";
const string YELLOW = "\033[1;33m";
const string BLUE = "\033[1;34m";
const string MAGENTA = "\033[1;35m";
const string CYAN = "\033[1;36m";
const string WHITE = "\033[1;37m";

class Person
{   protected:
    string Name;
    string PhoneNo;
};
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
    {}
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
        cout << GREEN << "------CONFIGURE ATM------" << RESET << "\n"
             << endl;
        cout << "Enter Bank Name: ";
        getline(cin, bank);
        cout << "Enter Cash Available: ";
        cin >> CashAvailable;
        cin.ignore();
        cout << "Enter Current User: ";
        getline(cin, CurrentUser);
        cout << BLUE << "------ATM CONFIGURED------" << RESET << endl;
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
    {}
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
        cout << GREEN << "------ADD TRANSACTION------" << RESET << "\n"
             << endl;
        cin.ignore();
        cout << "Enter Transaction Type: ";
        getline(cin, TransType);
        cout << "Enter Date: ";
        getline(cin, date);
        cout << "Enter Amount: ";
        cin >> amount;
        cout << "Enter Transaction ID: ";
        cin >> TransID;
        cin.ignore();
        cout << BLUE << "------TRANSACTION ADDED------" << RESET << endl;
        cout << "Transaction Type: " << TransType << endl;
        cout << "Date: " << date << endl;
        cout << "Amount: " << amount << endl;
        cout << "Transaction ID: " << TransID << endl;
    }
};
class TManager
{
private:
    Transaction t;

public:
    void AddRecord()
    {
        t.AddRecord();
    }
    void submenu()
    {
        int choice;
        do
        {

            cout << GREEN << "------TRANSACTION MANAGEMENT------" << RESET << endl;
            cout << GREEN << "1. Add Transaction" << RESET << endl;
            cout << BLUE << "2. Remove Transaction" << RESET << endl;
            cout << MAGENTA << "3. View Transactions" << RESET << endl;
            cout << CYAN << "4. Edit Transaction" << RESET << endl;
            cout << RED << "5. Exit" << RESET << endl;
            cout << "Enter your choice: ";
            cin >> choice;
            switch (choice)
            {
            case 1:
                AddRecord();
                break;
            case 2:
                cout << RED << "Remove Transaction - Feature not implemented yet." << RESET << endl;
                break;
            case 3:
                cout << RED << "View Transactions - Feature not implemented yet." << RESET << endl;
                break;
            case 4:
                cout << RED << "Edit Transaction - Feature not implemented yet." << RESET << endl;
                break;
            case 5:
                cout << RED << "Exiting Transaction Management." << RESET << endl;
                break;
            default:
                cout << RED << "Invalid choice. Please try again." << RESET << endl;
            }
        } while (choice != 5);
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
    {}
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
        cout << GREEN << "------ADD BANK RECORD------" << RESET << "\n"
             << endl;
        cin.ignore();
        cout << "Enter Bank Name: ";
        getline(cin, BankName);
        cout << "Enter Account: ";
        getline(cin, Account);
        cout << BLUE << "------BANK RECORD ADDED------" << RESET << endl;
        cout << "Bank Name: " << BankName << endl;
        cout << "Account: " << Account << endl;
    }
};
class BManager
{
private:
    Bank b;

public:
    void AddRecord()
    {
        b.AddRecord();
    }
    void submenu()
    {
        int choice;
        do
        {
            cout << GREEN << "------BANK MANAGEMENT------" << RESET << endl;
            cout << GREEN << "1. Add Bank Record" << RESET << endl;
            cout << BLUE << "2. Remove Bank Record" << RESET << endl;
            cout << MAGENTA << "3. View Bank Records" << RESET << endl;
            cout << CYAN << "4. Edit Bank Record" << RESET << endl;
            cout << RED << "5. Exit" << RESET << endl;
            cout << "Enter your choice: ";
            cin >> choice;
            switch (choice)
            {
            case 1:
                AddRecord();
                break;
            case 2:
                cout << RED << "Remove Bank Record - Feature not implemented yet." << RESET << endl;
                break;
            case 3:
                cout << RED << "View Bank Records - Feature not implemented yet." << RESET << endl;
                break;
            case 4:
                cout << RED << "Edit Bank Record - Feature not implemented yet." << RESET << endl;
                break;
            case 5:
                cout << RED << "Exiting Bank Management." << RESET << endl;
                break;
            default:
                cout << RED << "Invalid choice. Please try again." << RESET << endl;
            }
        } while (choice != 5);
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
    {}
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
    }
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
        cout << GREEN << "------ADD CARD RECORD------" << RESET << "\n"
             << endl;
        cin.ignore();
        cout << "Enter Card Number: ";
        getline(cin, CardNo);
        cout << "Enter Expiry Date: ";
        getline(cin, ExpiryDate);
        cout << "Enter CVV: ";
        cin >> CVV;
        cout << "Is the card blocked? (1 for Yes, 0 for No): ";
        bool blocked;
        cin >> blocked;
        cin.ignore();
        isBlocked = blocked;
        cout << BLUE << "------CARD RECORD ADDED------" << RESET << endl;
        cout << "Card Number: " << CardNo << endl;
        cout << "Expiry Date: " << ExpiryDate << endl;
        cout << "CVV: " << CVV << endl;
        cout << "Is Blocked: " << (isBlocked ? "Yes" : "No") << endl;
    }
};
class CManager
{
private:
    Card c;

public:
    void AddRecord()
    {
        c.AddRecord();
    }
    void submenu()
    {
        int choice;
        do
        {

            cout << GREEN << "------CARD MANAGEMENT------" << RESET << endl;
            cout << GREEN << "1. Add Card Record" << RESET << endl;
            cout << BLUE << "2. Remove Card Record" << RESET << endl;
            cout << MAGENTA << "3. View Card Records" << RESET << endl;
            cout << CYAN << "4. Edit Card Record" << RESET << endl;
            cout << RED << "5. Exit" << RESET << endl;
            cout << "Enter your choice: ";
            cin >> choice;
            switch (choice)
            {
            case 1:
                AddRecord();
                break;
            case 2:
                cout << RED << "Remove Card Record - Feature not implemented yet." << RESET << endl;
                break;
            case 3:
                cout << RED << "View Card Records - Feature not implemented yet." << RESET << endl;
                break;
            case 4:
                cout << RED << "Edit Card Record - Feature not implemented yet." << RESET << endl;
                break;
            case 5:
                cout << RED << "Exiting Card Management." << RESET << endl;
                break;
            default:
                cout << RED << "Invalid choice. Please try again." << RESET << endl;
            }
        } while (choice != 5);
    }
};

// ================= ACCOUNT CLASS =================
class Account
{
private:
    string AccNo;
    string AccType;
    double Balance;
    int PIN;

public:
    Account()
    {
        AccNo = "Unknown";
        AccType = "N/A";
        Balance = 0;
        PIN = 0;
    }

    void AddRecord()
    {
        cout << GREEN << "------ADD ACCOUNT------" << RESET << endl;

        cin.ignore();
        cout << "Enter Account No: ";
        getline(cin, AccNo);

        cout << "Enter Account Type: ";
        getline(cin, AccType);

        cout << "Enter Balance: ";
        cin >> Balance;

        cout << "Enter PIN: ";
        cin >> PIN;

        cout << BLUE << "Account Created Successfully!" << RESET << endl;
    }

    void Show()
    {
        cout << "Account No: " << AccNo << endl;
        cout << "Account Type: " << AccType << endl;
        cout << "Balance: " << Balance << endl;
    }
};

// ================= USER CLASS (INHERITANCE + AGGREGATION) =================
class User : public Person
{
private:
    Account *acc;   // aggregation

public:
    User()
    {
        Name = "Unknown";
        PhoneNo = "N/A";
        acc = nullptr;
    }

    void LinkAccount(Account *a)
    {
        acc = a;
    }

    void AddRecord()
    {
        cout << GREEN << "------ADD USER------" << RESET << endl;

        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, Name);

        cout << "Enter Phone: ";
        getline(cin, PhoneNo);

        cout << BLUE << "User Added Successfully!" << RESET << endl;
    }

    void Show()
    {
        cout << "Name: " << Name << endl;
        cout << "Phone: " << PhoneNo << endl;

        if (acc != nullptr)
        {
            cout << "--- Linked Account ---" << endl;
            acc->Show();
        }
        else
        {
            cout << "No Account Linked" << endl;
        }
    }
};

// ================= ACCOUNT MANAGER =================
class AManager
{
private:
    Account a[100];
    int count;

public:
    AManager()
    {
        count = 0;
    }

    void AddRecord()
    {
        if (count < 100)
        {
            a[count].AddRecord();
            count++;
        }
    }

    void ViewRecords()
    {
        for (int i = 0; i < count; i++)
        {
            cout << "\nAccount " << i + 1 << endl;
            a[i].Show();
        }
    }

    Account* GetAccount(int index)
    {
        if (index >= 0 && index < count)
            return &a[index];
        return nullptr;
    }

    int getCount()
    {
        return count;
    }

    void submenu()
    {
        int choice;

        do
        {
            cout << "\n--- ACCOUNT MENU ---" << endl;
            cout << "1. Add Account" << endl;
            cout << "2. View Accounts" << endl;
            cout << "3. Exit" << endl;
            cin >> choice;

            switch (choice)
            {
            case 1:
                AddRecord();
                break;
            case 2:
                ViewRecords();
                break;
            }
        } while (choice != 3);
    }
};

// ================= USER MANAGER =================
class UManager
{
private:
    User u[100];
    int count;
    AManager *accManager;

public:
    UManager(AManager *am)
    {
        count = 0;
        accManager = am;
    }

    void AddRecord()
    {
        if (count < 100)
        {
            u[count].AddRecord();

            // LINK ACCOUNT (user selects)
            if (accManager->getCount() > 0)
            {
                int index;
                cout << "Select Account Index (1-" << accManager->getCount() << "): ";
                cin >> index;

                u[count].LinkAccount(accManager->GetAccount(index - 1));
            }

            count++;
        }
    }

    void ViewRecords()
    {
        for (int i = 0; i < count; i++)
        {
            cout << "\nUser " << i + 1 << endl;
            u[i].Show();
        }
    }

    void submenu()
    {
        int choice;

        do
        {
            cout << "\n--- USER MENU ---" << endl;
            cout << "1. Add User" << endl;
            cout << "2. View Users" << endl;
            cout << "3. Exit" << endl;

            cin >> choice;

            switch (choice)
            {
            case 1:
                AddRecord();
                break;
            case 2:
                ViewRecords();
                break;
            }
        } while (choice != 3);
    }
};
class Receipt
{
private:
    int ReceiptID;
    string Date;
    int AccountNo;
    double Amount;
    string TransType;

public:
    Receipt()
    {
        ReceiptID = 0;
        Date = "N/A";
        AccountNo = 0;
        Amount = 0.0;
        TransType = "Unknown";
    }
    ~Receipt()
    {
    }
    Receipt(const Receipt &r)
    {
        ReceiptID = r.ReceiptID;
        Date = r.Date;
        AccountNo = r.AccountNo;
        Amount = r.Amount;
    }
    void SetReceiptID(int id)
    {
        ReceiptID = id;
    }
    void GetReceiptID()
    {
        cout << "Receipt ID: " << ReceiptID << endl;
    }
    void SetDate(string d)
    {
        Date = d;
    }
    void GetDate()
    {
        cout << "Date: " << Date << endl;
    }
    void SetAccountNo(int acc)
    {
        AccountNo = acc;
    }
    void GetAccountNo()
    {
        cout << "Account Number: " << AccountNo << endl;
    }
    void SetAmount(double a)
    {
        Amount = a;
    }
    void GetAmount()
    {
        cout << "Amount: " << Amount << endl;
    }
    void SetTransType(string t)
    {
        TransType = t;
    }
    void GetTransType()
    {
        cout << "Transaction Type: " << TransType << endl;
    }
    void ReceiptDetails()
    {
        cout << RED << "------ADD RECEIPT DETAILS------" << RESET << endl;
        cout << "Enter Receipt ID: ";
        cin >> ReceiptID;
        cin.ignore();
        cout << "Enter Date: ";
        getline(cin, Date);
        cout << "Enter Account Number: ";
        cin >> AccountNo;
        cin.ignore();
        cout << "Enter Amount: ";
        cin >> Amount;
        cin.ignore();
        cout << "Enter Transaction Type: ";
        getline(cin, TransType);

        cout << GREEN << "------RECEIPT DETAILS ADDED------" << RESET << "\n"
             << endl;
        cout << "Receipt ID: " << ReceiptID << endl;
        cout << "Date: " << Date << endl;
        cout << "Account Number: " << AccountNo << endl;
        cout << "Amount: " << Amount << endl;
        cout << "Transaction Type: " << TransType << endl;
    }
};
int main()
{
    ATM myATM;
    Transaction myTransaction;
    TManager tManager;
    Bank myBank;
    BManager bManager;
    Card myCard;
    CManager cManager;
    User myUser;
    AManager aManager;
    UManager uManager(&aManager);
    Account myAccount;
    Receipt myReceipt;
    int choice;

    do
    {

        cout << CYAN << "------ATM MANAGEMENT SYSTEM------" << RESET << "\n"
             << endl;
        cout << YELLOW << "1. Configure ATM" << RESET << endl;
        cout << GREEN << "2. Manage Transaction" << RESET << endl;
        cout << BLUE << "3. Manage Bank Record" << RESET << endl;
        cout << MAGENTA << "4. Manage Card Record" << RESET << endl;
        cout << CYAN << "5. Manage User Record" << RESET << endl;
        cout << RED << "6. Manage Account Record" << RESET << endl;
        cout << BLUE << "7. Generate Receipt" << RESET << endl;
        cout << WHITE << "8. Exit" << RESET << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
        case 1:
            myATM.AddRecord();
            break;
        case 2:
            tManager.submenu();
            break;
        case 3:
            bManager.submenu();
            break;
        case 4:
            cManager.submenu();
            break;
        case 5:
            uManager.submenu();
            break;
        case 6:
            aManager.submenu();
            break;
        case 7:
            myReceipt.ReceiptDetails();
            break;
        case 8:
            cout << RED << "Exiting the program." << RESET << endl;
            break;
        default:
            cout << RED << "Invalid choice. Please try again." << RESET << endl;
        }
    } while (choice != 8);
}