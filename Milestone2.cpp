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
class User:public Person
{
private:
    Account *acc;

public:
    User()
    {
        Name = "Unknown";
        PhoneNo = "N/A";
        acc = nullptr;
    }
    ~User()
    {}
    User(const User &u)
    {
        Name = u.Name;
        PhoneNo = u.PhoneNo;
        acc = u.acc;
    }
    void LinkAccount(Account *a)
    {
        acc = a;
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
    void AddRecord()
    {
        cout << GREEN << "------ADD USER RECORD------" << RESET << "\n"
             << endl;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, Name);
        cout << "Enter Phone Number: ";
        getline(cin, PhoneNo);
        cout << BLUE << "------USER RECORD ADDED------" << RESET << endl;
        cout << "Name: " << Name << endl;
        cout << "Phone Number: " << PhoneNo << endl;
        if (acc != nullptr)
            cout << "Account Linked ✔" << endl;
        else
            cout << "No Account Linked ✖" << endl;
    }
    void ShowAccount()
    {
        if (acc != nullptr)
        {
            cout << "---- ACCOUNT INFO ----" << endl;
            acc->GetAccNo();
            acc->GetBalance();
        }
        else
        {
            cout << "No account linked." << endl;
        }
    }
    };

class UManager
{
private:
    User u[100];
    int count;
    Account *accRef;
public:
 UManager()
    {
        count = 0;
        accRef = nullptr;
    }
    void AddRecord()
    {
        if(count < 100)
        {
            u[count].AddRecord();
            u[count].LinkAccount(accRef);
            count++;
        }
        else
        {
            cout << RED << "User limit reached. Cannot add more users." << RESET << endl;
        }
    }

    void ViewRecords()
{
    if (count == 0)
    {
        cout << "No users found." << endl;
        return;
    }

    for (int i = 0; i < count; i++)
    {
        cout << "\nUser " << i + 1 << endl;
        u[i].GetName();
        u[i].GetPhoneNo();
        u[i].ShowAccount();
    }
}
    void RemoveRecord()
    {
        if (count == 0)
        {
            cout << "No users to remove." << endl;
            return;
        }

        int index;
        cout << "Enter user number to remove (1-" << count << "): ";
        cin >> index;
        cin.ignore();

        if (index < 1 || index > count)
        {
            cout << RED << "Invalid user number." << RESET << endl;
            return;
        }

        for (int i = index - 1; i < count - 1; i++)
        {
            u[i] = u[i + 1];
        }
        count--;
        cout << GREEN << "User removed successfully." << RESET << endl;
    }
    void EditRecord()
    {
        if (count == 0)
        {
            cout << "No users to edit." << endl;
            return;
        }

        int index;
        cout << "Enter user number to edit (1-" << count << "): ";
        cin >> index;
        cin.ignore();

        if (index < 1 || index > count)
        {
            cout << RED << "Invalid user number." << RESET << endl;
            return;
        }

        cout << GREEN << "Editing User " << index << RESET << endl;
        u[index - 1].AddRecord();
    }
   
    void submenu()
    {
        int choice;
        do
        {

            cout << GREEN << "------USER MANAGEMENT------" << RESET << endl;
            cout << GREEN << "1. Add User Record" << RESET << endl;
            cout << BLUE << "2. Remove User Record" << RESET << endl;
            cout << MAGENTA << "3. View User Records" << RESET << endl;
            cout << CYAN << "4. Edit User Record" << RESET << endl;
            cout << RED << "5. Exit" << RESET << endl;
            cout << "Enter your choice: ";
            cin >> choice;
            switch (choice)
            {
            case 1:
                AddRecord();
                break;
            case 2:
                RemoveRecord();
                break;
            case 3:
                ViewRecords();
                break;
            case 4:
                EditRecord();
                break;
            case 5:
                cout << RED << "Exiting User Management." << RESET << endl;
                break;
            default:
                cout << RED << "Invalid choice. Please try again." << RESET << endl;
            }
        } while (choice != 5);
    }
};

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
        Balance = 0.0;
        PIN = 0;
    }
    ~Account(){}
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
    cout << GREEN << "------ADD ACCOUNT RECORD------" << RESET << "\n"
         << endl;
    cin.ignore();
    cout << "Enter Account Number: ";
    getline(cin, AccNo);
    cout << "Enter Account Type (Savings/Current): ";
    getline(cin, AccType);
    cout << "Enter Balance: ";
    cin >> Balance;
    cout << "Enter PIN: ";
    cin >> PIN;
    cin.ignore();
    cout << BLUE << "------ACCOUNT RECORD ADDED------" << RESET << endl;
    cout << "Account Number: " << AccNo << endl;
    cout << "Account Type: " << AccType << endl;
    cout << "Balance: " << Balance << endl;
    cout << "PIN: " << PIN << endl;
}
void Show(){
    cout << "---- ACCOUNT INFO ----" << endl;
    GetAccNo();
    GetAccType();
    GetBalance();
}
};

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
        else
        {
            cout << RED << "Account limit reached." << RESET << endl;
        }
    }
      void ViewRecords()
    {
        if (count == 0)
        {
            cout << "No accounts found." << endl;
            return;
        }

        for (int i = 0; i < count; i++)
        {
            cout << "\nAccount " << i + 1 << endl;
            a[i].Show();
        }
    }
      void RemoveRecord()
    {
        int index;
        cout << "Enter account number to delete: ";
        cin >> index;

        if (index < 1 || index > count)
        {
            cout << "Invalid index" << endl;
            return;
        }

        for (int i = index - 1; i < count - 1; i++)
        {
            a[i] = a[i + 1];
        }

        count--;

        cout << "Account deleted." << endl;
    }
       void EditRecord()
    {
        int index;
        cout << "Enter account number to edit: ";
        cin >> index;

        if (index < 1 || index > count)
        {
            cout << "Invalid index" << endl;
            return;
        }

        a[index - 1].AddRecord();
    }
    void submenu()
    {
        int choice;
        do
        {
            cout << GREEN << "------ACCOUNT MANAGEMENT------" << RESET << endl;
            cout << GREEN << "1. Add Account Record" << RESET << endl;
            cout << BLUE << "2. Remove Account Record" << RESET << endl;
            cout << MAGENTA << "3. View Account Records" << RESET << endl;
            cout << CYAN << "4. Edit Account Record" << RESET << endl;
            cout << RED << "5. Exit" << RESET << endl;
            cout << "Enter your choice: ";
            cin >> choice;
            switch (choice)
            {
            case 1:
                AddRecord();
                break;
            case 2:
                RemoveRecord();
                break;
            case 3:
                ViewRecords();
                break;
            case 4:
                EditRecord();
                break;
            case 5:
                cout << RED << "Exiting Account Management." << RESET << endl;
                break;
            default:
                cout << RED << "Invalid choice. Please try again." << RESET << endl;
            }
        } while (choice != 5);
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
    UManager uManager;
    Account myAccount;
    AManager aManager;
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