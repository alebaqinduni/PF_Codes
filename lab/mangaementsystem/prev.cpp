/*
#include <iostream>
using namespace std;
int main()
{
    int choice;
    int id[100], quantity[100];
    string title[100], author[100];
    int count = 0;

    do
    {
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
8. Exit
)";
        cout << "\033[0m";    // back to normal
        cout << "\033[1;35m"; // magenta
        cout << R"(

    Enter your choice:
    )";
        cin >> choice;

        cout << "\033[0m";

        cin.ignore();

        // Now we are adding the books
        if (choice == 1)
        {
            cout << "Enter Book ID: ";
            cin >> id[count];
            cin.ignore();
            cout << "Enter Book Title: ";
            getline(cin, title[count]);
            cout << "Enter Book Author: ";
            getline(cin, author[count]);
            cout << "Enter Quantity: ";
            cin >> quantity[count];
            count++;
            cout << "Book added successfully!" << endl;
        }

        // Now we are viewing the books
        else if (choice == 2)
        {
            if (count == 0)
            {
                cout << "No books available!" << endl;
            }
            else
            {
                cout << "\nAvailable Books:\n";
                for (int x = 0; x < count; x++)
                {
                    cout << "\nBook " << x + 1 << endl;
                    cout << "ID: " << id[x] << endl;
                    cout << "Title: " << title[x] << endl;
                    cout << "Author: " << author[x] << endl;
                    cout << "Quantity: " << quantity[x] << endl;
                }
            }
        }

        // Now we are searching the books
        else if (choice == 3)
        {
            int searchid;
            bool found = false;

            cout << "\nEnter Book ID to search: ";
            cin >> searchid;

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

            // Now we are updating the book
        }
        else if (choice == 4)
        {
            int searchid;
            bool found = false;

            cout << "Enter Book to update: ";
            cin >> searchid;
            cin.ignore();

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
        }

        // Now we are deleting the book
        else if (choice == 5)
        {
            int searchid;
            bool found = false;
            cout << "Enter Book ID to delete: ";
            cin >> searchid;

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
                    cout << "\nBook deleted successfully!\n";
                    break;
                }
            }
            if (found == false)
            {
                cout << "\nBook Not Found!\n";
            }

            // Now we are borrowing the book
        }
        else if (choice == 6)
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
                        cout << "\nBook Borrowed successfully!\n";
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
        }

        // Now we are returning the book
        else if (choice == 7)
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
                    found = true;
                    cout << "\nBook returned successfully!\n";
                }
            }
            if (found == false)
            {
                cout << "\nBook Not Found!\n";
            }
        }

        // Now we are exiting the program
        else if (choice == 8)
        {
            cout << "Exiting the program..." << endl;
        }

        else
        {
            cout << "\nInvalid choice! Please try again.\n";
        }
    } while (choice != 8);

    return 0;
}
*/