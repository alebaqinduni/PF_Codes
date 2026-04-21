#include <iostream>
#include <limits>
#include <string>

using namespace std;

void pause()
{
    cout << "Press ENTER to continue...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}

void swapStudentRecord(string nameArray[], int ageArray[], float matric_marksArray[],
                       float inter_marksArray[], float ecat_marksArray[],
                       string preference1Array[], string preference2Array[],
                       string preference3Array[], float aggregateArray[],
                       int first, int second)
{
    string tempName = nameArray[first];
    nameArray[first] = nameArray[second];
    nameArray[second] = tempName;

    int tempAge = ageArray[first];
    ageArray[first] = ageArray[second];
    ageArray[second] = tempAge;

    float tempMatric = matric_marksArray[first];
    matric_marksArray[first] = matric_marksArray[second];
    matric_marksArray[second] = tempMatric;

    float tempInter = inter_marksArray[first];
    inter_marksArray[first] = inter_marksArray[second];
    inter_marksArray[second] = tempInter;

    float tempEcat = ecat_marksArray[first];
    ecat_marksArray[first] = ecat_marksArray[second];
    ecat_marksArray[second] = tempEcat;

    string tempP1 = preference1Array[first];
    preference1Array[first] = preference1Array[second];
    preference1Array[second] = tempP1;

    string tempP2 = preference2Array[first];
    preference2Array[first] = preference2Array[second];
    preference2Array[second] = tempP2;

    string tempP3 = preference3Array[first];
    preference3Array[first] = preference3Array[second];
    preference3Array[second] = tempP3;

    float tempAgg = aggregateArray[first];
    aggregateArray[first] = aggregateArray[second];
    aggregateArray[second] = tempAgg;
}

int main()
{
    const int total_students = 1000;
    int index = 5;

    string nameArray[total_students] = {"ali", "ahmed", "ayesha", "zainab", "hassan"};
    int ageArray[total_students] = {20, 21, 19, 22, 20};
    float matric_marksArray[total_students] = {85.5, 90.0, 78.0, 92.5, 88.0};
    float inter_marksArray[total_students] = {80.0, 85.0, 75.0, 90.0, 82.5};
    float ecat_marksArray[total_students] = {85.0, 88.0, 80.0, 91.0, 87.5};
    string preference1Array[total_students] = {"CS", "SE", "IT", "CS", "SE"};
    string preference2Array[total_students] = {"SE", "IT", "CS", "SE", "IT"};
    string preference3Array[total_students] = {"IT", "CS", "SE", "IT", "CS"};
    float aggregateArray[total_students] = {0};

    while (true)
    {
        system("clear");
        cout << '\n';
        cout << "|--------------------------------------------------|" << endl;
        cout << "|           University Management System           |" << endl;
        cout << "|--------------------------------------------------|" << endl;
        cout << "User Menu:" << endl;
        cout << "1. Admin" << endl;
        cout << "2. Student" << endl;
        cout << "3. Exit" << endl;
        cout << "Choose an option: ";

        int useroption;
        cin >> useroption;

        if (useroption == 1)
        {
            bool loginSuccess = false;

            for (int attempt = 1; attempt <= 3; attempt++)
            {
                system("clear");
                cout << "Admin Menu: Login attempt: " << attempt << endl;

                string username;
                string password;

                cout << "Enter username: ";
                cin >> username;
                cout << "Enter password: ";
                cin >> password;

                if (username == "admin" && password == "123")
                {
                    loginSuccess = true;
                    cout << "Login Successful!" << endl;
                    pause();
                    break;
                }

                cout << "Wrong credentials!" << endl;
                pause();
            }

            if (!loginSuccess)
            {
                cout << "Too many failed attempts." << endl;
                pause();
                continue;
            }

            while (true)
            {
                system("clear");
                cout << "1. Show all students" << endl;
                cout << "2. Search student" << endl;
                cout << "3. Update student record" << endl;
                cout << "4. Generate merit list" << endl;
                cout << "5. Delete student record" << endl;
                cout << "6. Exit" << endl;
                cout << "Choose an option: ";

                int adminoption;
                cin >> adminoption;

                if (adminoption == 1)
                {
                    cout << "Name\tAge\tMatric\tInter\tECAT\tP1\tP2\tP3" << endl;
                    for (int x = 0; x < index; x++)
                    {
                        cout << nameArray[x] << '\t' << ageArray[x] << '\t'
                             << matric_marksArray[x] << '\t' << inter_marksArray[x] << '\t'
                             << ecat_marksArray[x] << '\t' << preference1Array[x] << '\t'
                             << preference2Array[x] << '\t' << preference3Array[x] << endl;
                    }
                    pause();
                }
                else if (adminoption == 2)
                {
                    string searchname;
                    bool found = false;

                    cout << "Enter name to search: ";
                    cin >> searchname;

                    for (int x = 0; x < index; x++)
                    {
                        if (nameArray[x] == searchname)
                        {
                            cout << "Name\tAge\tMatric\tInter\tECAT\tP1\tP2\tP3" << endl;
                            cout << nameArray[x] << '\t' << ageArray[x] << '\t'
                                 << matric_marksArray[x] << '\t' << inter_marksArray[x] << '\t'
                                 << ecat_marksArray[x] << '\t' << preference1Array[x] << '\t'
                                 << preference2Array[x] << '\t' << preference3Array[x] << endl;
                            found = true;
                            break;
                        }
                    }

                    if (!found)
                    {
                        cout << "No record found for " << searchname << endl;
                    }
                    pause();
                }
                else if (adminoption == 3)
                {
                    string searchname;
                    int foundIndex = -1;

                    cout << "Enter name to update: ";
                    cin >> searchname;

                    for (int x = 0; x < index; x++)
                    {
                        if (nameArray[x] == searchname)
                        {
                            foundIndex = x;
                            break;
                        }
                    }

                    if (foundIndex != -1)
                    {
                        cout << "Enter new name: ";
                        cin >> nameArray[foundIndex];
                        cout << "Enter new age: ";
                        cin >> ageArray[foundIndex];
                        cout << "Enter new matric marks: ";
                        cin >> matric_marksArray[foundIndex];
                        cout << "Enter new inter marks: ";
                        cin >> inter_marksArray[foundIndex];
                        cout << "Enter new ECAT marks: ";
                        cin >> ecat_marksArray[foundIndex];
                        cout << "Enter new 1st preference: ";
                        cin >> preference1Array[foundIndex];
                        cout << "Enter new 2nd preference: ";
                        cin >> preference2Array[foundIndex];
                        cout << "Enter new 3rd preference: ";
                        cin >> preference3Array[foundIndex];
                        cout << "Record updated successfully!" << endl;
                    }
                    else
                    {
                        cout << "No record found for " << searchname << endl;
                    }
                    pause();
                }
                else if (adminoption == 4)
                {
                    for (int x = 0; x < index; x++)
                    {
                        aggregateArray[x] =
                            (matric_marksArray[x] / 1100.0f * 100.0f * 0.3f) +
                            (inter_marksArray[x] / 1200.0f * 100.0f * 0.4f) +
                            (ecat_marksArray[x] / 400.0f * 100.0f * 0.3f);
                    }

                    for (int x = 0; x < index - 1; x++)
                    {
                        for (int j = 0; j < index - x - 1; j++)
                        {
                            if (aggregateArray[j] < aggregateArray[j + 1])
                            {
                                swapStudentRecord(nameArray, ageArray, matric_marksArray,
                                                  inter_marksArray, ecat_marksArray,
                                                  preference1Array, preference2Array,
                                                  preference3Array, aggregateArray, j, j + 1);
                            }
                        }
                    }

                    cout << "Name\tAge\tMatric\tInter\tECAT\tP1\tP2\tP3\tAggregate" << endl;
                    for (int x = 0; x < index; x++)
                    {
                        cout << nameArray[x] << '\t' << ageArray[x] << '\t'
                             << matric_marksArray[x] << '\t' << inter_marksArray[x] << '\t'
                             << ecat_marksArray[x] << '\t' << preference1Array[x] << '\t'
                             << preference2Array[x] << '\t' << preference3Array[x] << '\t'
                             << aggregateArray[x] << endl;
                    }
                    pause();
                }
                else if (adminoption == 5)
                {
                    string delname;
                    int foundIndex = -1;

                    cout << "Enter the name of student to delete: ";
                    cin >> delname;

                    for (int x = 0; x < index; x++)
                    {
                        if (nameArray[x] == delname)
                        {
                            foundIndex = x;
                            break;
                        }
                    }

                    if (foundIndex != -1)
                    {
                        for (int x = foundIndex; x < index - 1; x++)
                        {
                            nameArray[x] = nameArray[x + 1];
                            ageArray[x] = ageArray[x + 1];
                            matric_marksArray[x] = matric_marksArray[x + 1];
                            inter_marksArray[x] = inter_marksArray[x + 1];
                            ecat_marksArray[x] = ecat_marksArray[x + 1];
                            preference1Array[x] = preference1Array[x + 1];
                            preference2Array[x] = preference2Array[x + 1];
                            preference3Array[x] = preference3Array[x + 1];
                            aggregateArray[x] = aggregateArray[x + 1];
                        }

                        index--;
                        cout << "Record deleted successfully!" << endl;
                    }
                    else
                    {
                        cout << "No record found for " << delname << endl;
                    }
                    pause();
                }
                else if (adminoption == 6)
                {
                    break;
                }
                else
                {
                    cout << "Invalid option!" << endl;
                    pause();
                }
            }
        }
        else if (useroption == 2)
        {
            system("clear");
            cout << "Welcome Student!" << endl;

            string name;
            int age;
            float matric_marks;
            float inter_marks;
            float ecat_marks;
            string preference1;
            string preference2;
            string preference3;

            cout << "Enter your name: ";
            cin >> name;
            cout << "Enter your age: ";
            cin >> age;
            cout << "Enter your matric marks: ";
            cin >> matric_marks;
            cout << "Enter your inter marks: ";
            cin >> inter_marks;
            cout << "Enter your ECAT marks: ";
            cin >> ecat_marks;
            cout << "Enter 1st preference: ";
            cin >> preference1;
            cout << "Enter 2nd preference: ";
            cin >> preference2;
            cout << "Enter 3rd preference: ";
            cin >> preference3;

            if (index < total_students)
            {
                nameArray[index] = name;
                ageArray[index] = age;
                matric_marksArray[index] = matric_marks;
                inter_marksArray[index] = inter_marks;
                ecat_marksArray[index] = ecat_marks;
                preference1Array[index] = preference1;
                preference2Array[index] = preference2;
                preference3Array[index] = preference3;
                aggregateArray[index] = 0;
                index++;
                cout << "Student added successfully!" << endl;
            }
            else
            {
                cout << "No more space available for new students." << endl;
            }
            pause();
        }
        else if (useroption == 3)
        {
            cout << '\n'
                 << "Thanks for using the system! Goodbye!" << endl;
            break;
        }
        else
        {
            cout << "Invalid option!" << endl;
            pause();
        }
    }

    return 0;
}
