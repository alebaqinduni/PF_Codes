#include <iostream>
#include <string>
#include <limits>
using namespace std;

// Pause function (Mac compatible)
void pause()
{
    cout << "Press ENTER to continue...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}

int main()
{
    const int total_students = 1000;
    int index = 5;

    // Initial data
    string nameArray[total_students] = {"ali", "ahmed", "ayesha", "zainab", "hassan"};
    int ageArray[total_students] = {20, 21, 19, 22, 20};
    float matric_marksArray[total_students] = {85.5, 90.0, 78.0, 92.5, 88.0};
    float inter_marksArray[total_students] = {80.0, 85.0, 75.0, 90.0, 82.5};
    float ecat_marksArray[total_students] = {85.0, 88.0, 80.0, 91.0, 87.5};
    string preference1Array[total_students] = {"CS", "SE", "IT", "CS", "SE"};
    string preference2Array[total_students] = {"SE", "IT", "CS", "SE", "IT"};
    string preference3Array[total_students] = {"IT", "CS", "SE", "IT", "CS"};
    float aggregateArray[total_students];

    while (true)
    {
        system("clear");

        cout << "|----------------------------------|" << endl;
        cout << "| University Management System     |" << endl;
        cout << "|----------------------------------|" << endl;

        cout << "1. Admin\n2. Student\n3. Exit\n";
        cout << "Choose option: ";

        int useroption;
        cin >> useroption;

        // ================= ADMIN =================
        if (useroption == 1)
        {
            bool loginSuccess = false;

            for (int attempt = 1; attempt <= 3; attempt++)
            {
                system("clear");

                string username, password;
                cout << "Login Attempt " << attempt << endl;

                cout << "Username: ";
                cin >> username;

                cout << "Password: ";
                cin >> password;

                if (username == "admin" && password == "123")
                {
                    loginSuccess = true;
                    break;
                }
                else
                {
                    cout << "Wrong credentials!\n";
                    pause();
                }
            }

            if (!loginSuccess)
            {
                cout << "Too many failed attempts!\n";
                pause();
                continue;
            }

            // ===== ADMIN MENU =====
            while (true)
            {
                system("clear");

                cout << "Admin Panel\n";
                cout << "1. Show all students\n";
                cout << "2. Search student\n";
                cout << "3. Update student\n";
                cout << "4. Generate merit list\n";
                cout << "5. Delete student\n";
                cout << "6. Back\n";

                int adminoption;
                cin >> adminoption;

                // SHOW ALL
                if (adminoption == 1)
                {
                    cout << "Name\tAge\tMatric\tInter\tECAT\n";
                    for (int i = 0; i < index; i++)
                    {
                        cout << nameArray[i] << "\t" << ageArray[i] << "\t"
                             << matric_marksArray[i] << "\t"
                             << inter_marksArray[i] << "\t"
                             << ecat_marksArray[i] << endl;
                    }
                    pause();
                }

                // SEARCH
                else if (adminoption == 2)
                {
                    string name;
                    cout << "Enter name: ";
                    cin >> name;

                    bool found = false;

                    for (int i = 0; i < index; i++)
                    {
                        if (nameArray[i] == name)
                        {
                            cout << "Found: " << nameArray[i] << endl;
                            found = true;
                        }
                    }

                    if (!found)
                        cout << "Not found\n";

                    pause();
                }

                // UPDATE
                else if (adminoption == 3)
                {
                    string name;
                    cout << "Enter name to update: ";
                    cin >> name;

                    for (int i = 0; i < index; i++)
                    {
                        if (nameArray[i] == name)
                        {
                            cout << "Enter new name: ";
                            cin >> nameArray[i];

                            cout << "Enter new age: ";
                            cin >> ageArray[i];

                            cout << "Updated!\n";
                        }
                    }
                    pause();
                }

                // MERIT LIST
                else if (adminoption == 4)
                {
                    for (int i = 0; i < index; i++)
                    {
                        aggregateArray[i] =
                            (matric_marksArray[i] / 1100 * 100 * 0.3) +
                            (inter_marksArray[i] / 1200 * 100 * 0.4) +
                            (ecat_marksArray[i] / 400 * 100 * 0.3);
                    }

                    for (int i = 0; i < index; i++)
                    {
                        cout << nameArray[i] << " -> " << aggregateArray[i] << endl;
                    }

                    pause();
                }

                // DELETE
                else if (adminoption == 5)
                {
                    string name;
                    cout << "Enter name to delete: ";
                    cin >> name;

                    for (int i = 0; i < index; i++)
                    {
                        if (nameArray[i] == name)
                        {
                            for (int j = i; j < index - 1; j++)
                            {
                                nameArray[j] = nameArray[j + 1];
                            }
                            index--;
                            cout << "Deleted!\n";
                            break;
                        }
                    }
                    pause();
                }

                else if (adminoption == 6)
                {
                    break;
                }
            }
        }

        // ================= STUDENT =================
        else if (useroption == 2)
        {
            system("clear");

            string name, p1, p2, p3;
            int age;
            float m, i, e;

            cout << "Enter name: ";
            cin >> name;

            cout << "Enter age: ";
            cin >> age;

            cout << "Matric marks: ";
            cin >> m;

            cout << "Inter marks: ";
            cin >> i;

            cout << "ECAT marks: ";
            cin >> e;

            cout << "Preference 1: ";
            cin >> p1;

            cout << "Preference 2: ";
            cin >> p2;

            cout << "Preference 3: ";
            cin >> p3;

            nameArray[index] = name;
            ageArray[index] = age;
            matric_marksArray[index] = m;
            inter_marksArray[index] = i;
            ecat_marksArray[index] = e;
            preference1Array[index] = p1;
            preference2Array[index] = p2;
            preference3Array[index] = p3;

            index++;

            cout << "Student added successfully!\n";
            pause();
        }

        // ================= EXIT =================
        else if (useroption == 3)
        {
            cout << "Goodbye!\n";
            break;
        }

        else
        {
            cout << "Invalid option!\n";
            pause();
        }
    }

    return 0;
}