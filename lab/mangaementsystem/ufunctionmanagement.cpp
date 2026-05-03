#include <iostream>
#include <string>
using namespace std;
#include <limits>
/// //////// //////////////////////
void pauseScreen()
{
    cout << "\nPress ENTER to continue...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}
////////////////////////////////////////
void viewBooks(int id[], string title[], string author[], int quantity[], int count)
{
    if (count == 0)
    {
        cout << "No books available!" << endl;
    }
    else
    {
        cout << "--------------------------------------------------" << endl;
        cout << "ID\tTitle\t\tAuthor\t\tQuantity\n";
        cout << "--------------------------------------------------" << endl;
        for (int x = 0; x < count; x++)
        {
            cout << id[x] << "\t" << title[x] << "\t\t" << author[x] << "\t\t" << quantity[x] << endl;
            cout << endl;
        }
    }
    cout << "Press Enter to continue...\n";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
////////////////////////////////////////
void addBook(int id[], string title[], string author[], int quantity[], int &count, string history[], int &historycount)
{
    cout << "Enter Book ID: ";
    cin >> id[count];
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Enter Book Title: ";
    getline(cin, title[count]);
    cout << "Enter Book Author: ";
    getline(cin, author[count]);
    cout << "Enter Quantity: ";
    cin >> quantity[count];
    count++;
    history[historycount % 5] = "Added Book ID: " + to_string(id[count - 1]); // bcz array start with 0 so 3-1=2;
    historycount++;

    cout << "Book added successfully!" << endl;
    pauseScreen();
}
////////////////////////////////////////////////
void searchBook(int id[], string title[], string author[], int quantity[], int count)
{
    int searchid;
    bool found = false;

    cout << "\nEnter Book ID to search: ";
    cin >> searchid;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int x = 0; x < count; x++)
    {
        if (id[x] == searchid)
        {
            cout << "\nBook Found!\n";
            cout << "ID: " << id[x] << endl;
            cout << "Title: " << title[x] << endl;
            cout << "Author: " << author[x] << endl;
            cout << "Quantity: " << quantity[x] << endl;

            found = true;
        }
    }
    if (found == false)
    {
        cout << "\nBook not found!\n";
    }
    cout << "\nPress Enter to continue...\n";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
////////////////////////////////////////////
void updateBook(int id[], string title[], string author[], int quantity[], int &count, string history[], int &historycount)
{
    int searchid;
    bool found = false;

    cout << "Enter Book ID to update: ";
    cin >> searchid;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int x = 0; x < count; x++)
    {
        if (id[x] == searchid)
        {
            cout << "Enter new Title: ";
            getline(cin, title[x]);

            cout << "Enter new Author: ";
            getline(cin, author[x]);

            cout << "Enter new Quantity: ";
            cin >> quantity[x];

            cout << "\nBook updated successfully!\n";
            found = true;
        }
    }

    if (found == false)
    {
        cout << "\nBook Not Found!\n";
    }
    cout << "\nPress Enter to continue...\n";
    cin.get();
}
///////////////////////////////////////
void deleteBook(int id[], string title[], string author[], int quantity[], int &count, string history[], int &historycount)
{

    int searchid;
    bool found = false;
    cout << "Enter Book ID to delete: ";
    cin >> searchid;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int x = 0; x < count; x++)
    {
        if (id[x] == searchid)
        {
            for (int j = x; j < count - 1; j++)
            {
                id[j] = id[j + 1];
                title[j] = title[j + 1];
                author[j] = author[j + 1];
                quantity[j] = quantity[j + 1];
            }
            count--;
            found = true;
            history[historycount % 5] = "Deleted Book ID: " + to_string(searchid);
            historycount++;

            cout << "\nBook deleted successfully!\n";
            break;
        }
    }
    if (found == false)
    {
        cout << "\nBook Not Found!\n";
    }
    cout << "\nPress Enter to continue...\n";
    cin.get();
}
////////////////////////////////////////////////
void borrowBook(int id[], string title[], string author[], int quantity[], int &count, string history[], int &historycount)
{

    int searchid;
    bool found = false;

    cout << "\nEnter Book ID to borrow: ";
    cin >> searchid;

    for (int x = 0; x < count; x++)
    {
        if (id[x] == searchid)
        {
            found = true;
            if (quantity[x] > 0)
            {
                quantity[x]--;

                cout << "\n========================================\n";
                cout << "        LIBRARY BORROW RECEIPT\n";
                cout << "========================================\n";
                cout << "Book ID   : " << id[x] << endl;
                cout << "Title     : " << title[x] << endl;
                cout << "Author    : " << author[x] << endl;
                cout << "Remaining : " << quantity[x] << endl;
                cout << "Status    : BORROWED\n";
                cout << "========================================\n";

                history[historycount % 5] = "Borrowed Book ID: " + to_string(id[x]);
                historycount++;
            }
            else
            {
                cout << "\nBook is not available for borrowing!\n";
            }
        }
    }
    if (found == false)
    {
        cout << "\nBook Not Found!\n";
    }
    cout << "\nPress Enter to continue...\n";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}
////////////////////////////////////////////////
void returnBook(int id[], string title[], string author[], int quantity[], int &count, string history[], int &historycount)
{
    int searchid;
    bool found = false;

    cout << "\nEnter the ID of book to return: ";
    cin >> searchid;

    for (int x = 0; x < count; x++)
    {
        if (id[x] == searchid)
        {
            quantity[x]++;

            cout << "\n========================================\n";
            cout << "        LIBRARY RETURN RECEIPT\n";
            cout << "========================================\n";
            cout << "Book ID   : " << id[x] << endl;
            cout << "Title     : " << title[x] << endl;
            cout << "Author    : " << author[x] << endl;
            cout << "Available : " << quantity[x] << endl;
            cout << "Status    : RETURNED\n";
            cout << "========================================\n";

            history[historycount % 5] = "Returned Book ID: " + to_string(id[x]);
            historycount++;
            found = true;
        }
    }
    if (found == false)
    {
        cout << "\nBook Not Found!\n";
    }
    cout << "\nPress Enter to continue...\n";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}
////////////////////////////////////////////////
void sortBook(int id[], string title[], string author[], int quantity[], int count)
{
    for (int x = 0; x < count - 1; x++) // array start with count 0
    {
        for (int j = 0; j < count - 1; j++)
        {
            if (id[j] > id[j + 1])
            {
                swap(id[j], id[j + 1]);
                swap(title[j], title[j + 1]);
                swap(author[j], author[j + 1]);
                swap(quantity[j], quantity[j + 1]);
            }
        }
    }
    cout << "\nBooks sorted by ID successfully!\n";
    cout << "\nPress Enter to continue...\n";
    cin.get();
}
////////////////////////////////////////////////
void viewHistory(string history[], int &historycount)
{
    cout << "\nHISTORY:\n";
    cout << "-------------------" << endl;
    int start = historycount - 5;
    if (start < 0)
    {
        start = 0;
    }
    for (int x = start; x < historycount; x++)
    {
        cout << history[x % 5] << endl;
    }
    cout << "\n-------------------";
    cout << "\nPress Enter to continue...\n";
    cin.get();
}
///////////////////////////////////////////////
int main()
{
    string username, password, role;

    int id[100], quantity[100];
    string title[100], author[100];
    int choice;
    string history[5];
    int historycount = 0;

    id[0] = 101;
    title[0] = "Harry Potter";
    author[0] = "J.K. Rowling";
    quantity[0] = 5;

    id[1] = 102;
    title[1] = "C++ Basics";
    author[1] = "Bjarne Bha.";
    quantity[1] = 3;

    id[2] = 103;
    title[2] = "Atomic Habits";
    author[2] = "James Clear";
    quantity[2] = 4;
    system("clear");
    int count = 3;
    cout << endl;
    cout << "\033[1;36m";

    cout << endl;
    while (true)
    {
        system("clear");
        cout << R"(
        LIBRARY MANAGEMENT SYSTEM

        CHOOSE YOUR CHOICE :
        1.ADMIN
        2.USER
        3.EXIT
        )";
        cout << "\033[1;33m";
        cin >> choice;
        cout << "\033[1;36m";
        if (choice == 1)
        {
            cout << R"(
            LIBRARY MANAGEMENT SYSTEM

                ADMIN LOGIN
            )";
            cout << endl;
            bool login = false;
            for (int attempt = 1; attempt <= 3; attempt++)
            {

                cout << "       Enter Password: ";
                cin >> password;
                if (password == "123")
                {
                    role = "admin";
                    login = true;
                    break;
                }
                else
                {
                    cout << "Invalid credentials! Please try again.\n";
                    pauseScreen();
                    system("clear");
                }
            }
            if (role != "admin")
            {
                cout << "Too many failed attempts! Exiting...\n";
            }
        }
        else if (choice == 2)
        {
            cout << R"(
            LIBRARY MANAGEMENT SYSTEM

                USER LOGIN
            )";
            cout << endl;
            cout << "       Enter Password: ";
            cin >> password;
            if (password == "123")
            {

                role = "user";
            }
        }
        else if (choice == 3)
        {
            cout << "Exiting the program..." << endl;
            break;
        }
        else
        {
            cout << "Invalid choice! Please try again." << endl;
        }

        if (role == "admin")
        {
            do
            {
                system("clear");
                cout << "\033[1;31m";
                // system("color D3");    for windows
                cout << R"(
            LIBRARY MANAGEMENT SYSTEM

1. Add Book
2. View Books
3. Search Book
4. Update Book
5. Delete Book
6. Borrow Book
7. Return Book
8. Sort Books
9. View History
10. Exit
)";
                cout << "\033[0m";    // back to normal
                cout << "\033[1;35m"; // magenta
                cout << R"(

    Enter your choice: 
    )";
                cin >> choice;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                cout << "\033[0m";

                // Now we are adding the books
                if (choice == 1)
                {
                    addBook(id, title, author, quantity, count, history, historycount);
                }

                // Now we are viewing the books
                else if (choice == 2)
                {
                    viewBooks(id, title, author, quantity, count);
                }
                // Now we are searching the books
                else if (choice == 3)
                {
                    searchBook(id, title, author, quantity, count);
                }
                // Now we are updating the book
                else if (choice == 4)
                {
                    updateBook(id, title, author, quantity, count, history, historycount);
                }

                // Now we are deleting the book
                else if (choice == 5)
                {
                    deleteBook(id, title, author, quantity, count, history, historycount);
                }
                // Now we are borrowing the book
                else if (choice == 6)
                {
                    borrowBook(id, title, author, quantity, count, history, historycount);
                }

                // Now we are returning the book
                else if (choice == 7)
                {
                    returnBook(id, title, author, quantity, count, history, historycount);
                }

                // Now we are sorting the books
                else if (choice == 8)
                {
                    sortBook(id, title, author, quantity, count);
                }

                // Now we are viewing the history
                else if (choice == 9)
                {
                    viewHistory(history, historycount);
                }
                // Now we are exiting the program
                else if (choice == 10)
                {
                    cout << "Exiting the program..." << endl;
                }

                else
                {
                    cout << "\nInvalid choice! Please try again.\n";
                    cin.get();
                }
            } while (choice != 10);
        }
        if (role == "user")
        {
            // User menu aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa!

            do
            {
                system("clear");
                cout << "\033[1;35m";
                // system("color D3");    for windows
                cout << R"(
            LIBRARY MANAGEMENT SYSTEM


1. View Books
2. Search Book
3. Borrow Book
4. Return Book
5. Exit
)";
                cout << "\033[0m";    // back to normal
                cout << "\033[1;31m"; // magenta
                cout << R"(

    Enter your choice: 
    )";
                cin >> choice;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                cout << "\033[0m";
                // Now we are viewing the books
                if (choice == 1)
                {
                    viewBooks(id, title, author, quantity, count);
                }

                // Now we are searching the books
                else if (choice == 2)
                {
                    searchBook(id, title, author, quantity, count);
                }

                // Now we are borrowing the book
                else if (choice == 3)
                {
                    borrowBook(id, title, author, quantity, count, history, historycount);
                }

                // Now we are returning the book
                else if (choice == 4)
                {
                    returnBook(id, title, author, quantity, count, history, historycount);
                }
                // Now we are exiting the program
                else if (choice == 5)
                {
                    cout << "Exiting the program..." << endl;
                }

                else
                {
                    cout << "\nInvalid choice! Please try again.\n";
                    cin.get();
                }
            } while (choice != 5);
        }
        return 0;
    }
}
