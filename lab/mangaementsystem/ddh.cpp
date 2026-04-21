#include <iostream>
#include <fstream>
using namespace std;

// Function to calculate match percentage
int calculateMatch(int matchCount, int total)
{
    return (matchCount * 100) / total;
}

int main()
{
    int choice;

    do
    {
        cout << "\n=====================================\n";
        cout << "   DISEASE DIAGNOSIS SYSTEM (AI)     \n";
        cout << "=====================================\n";
        cout << "1. New Diagnosis\n";
        cout << "2. View Records\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {

        case 1:
        {
            string name;
            int age;

            cout << "\nEnter Name: ";
            cin >> name;

            cout << "Enter Age: ";
            cin >> age;

            // Symptoms
            bool fever = 0, cough = 0, headache = 0;
            bool fatigue = 0, chestPain = 0, nausea = 0;

            int op;

            cout << "\nEnter Symptoms (1=Yes, 0=No)\n";

            cout << "Fever: ";
            cin >> op;
            fever = op;
            cout << "Cough: ";
            cin >> op;
            cough = op;
            cout << "Headache: ";
            cin >> op;
            headache = op;
            cout << "Fatigue: ";
            cin >> op;
            fatigue = op;
            cout << "Chest Pain: ";
            cin >> op;
            chestPain = op;
            cout << "Nausea: ";
            cin >> op;
            nausea = op;

            // Matching logic
            int fluMatch = fever + cough + fatigue;
            int coldMatch = fever + cough;
            int migraineMatch = headache + nausea;
            int heartMatch = chestPain + fatigue;

            int fluPercent = calculateMatch(fluMatch, 3);
            int coldPercent = calculateMatch(coldMatch, 2);
            int migrainePercent = calculateMatch(migraineMatch, 2);
            int heartPercent = calculateMatch(heartMatch, 2);

            // Determine best match
            string disease;
            int maxPercent = fluPercent;

            disease = "Flu";

            if (coldPercent > maxPercent)
            {
                maxPercent = coldPercent;
                disease = "Cold";
            }

            if (migrainePercent > maxPercent)
            {
                maxPercent = migrainePercent;
                disease = "Migraine";
            }

            if (heartPercent > maxPercent)
            {
                maxPercent = heartPercent;
                disease = "Heart Problem";
            }

            // Severity
            int totalSymptoms = fever + cough + headache + fatigue + chestPain + nausea;

            string severity;
            if (totalSymptoms >= 4)
                severity = "High";
            else if (totalSymptoms >= 2)
                severity = "Medium";
            else
                severity = "Low";

            // Precautions
            string precaution;

            if (disease == "Flu")
                precaution = "Rest, fluids, paracetamol";
            else if (disease == "Cold")
                precaution = "Stay warm, hydration";
            else if (disease == "Migraine")
                precaution = "Rest in dark room";
            else if (disease == "Heart Problem")
                precaution = "Immediate doctor consultation";
            else
                precaution = "Consult doctor";

            // Output
            cout << "\n=========== RESULT ===========\n";
            cout << "Patient: " << name << endl;
            cout << "Top Disease: " << disease << endl;
            cout << "Match: " << maxPercent << "%\n";
            cout << "Severity: " << severity << endl;
            cout << "Precaution: " << precaution << endl;

            cout << "\n--- Other Possibilities ---\n";
            cout << "Flu: " << fluPercent << "%\n";
            cout << "Cold: " << coldPercent << "%\n";
            cout << "Migraine: " << migrainePercent << "%\n";
            cout << "Heart Issue: " << heartPercent << "%\n";

            // Save to file
            ofstream file("patients.txt", ios::app);
            file << name << " | " << age << " | "
                 << disease << " | " << severity
                 << " | " << maxPercent << "%\n";
            file.close();

            break;
        }

        case 2:
        {
            ifstream file("patients.txt");
            string line;

            cout << "\n========= RECORDS =========\n";
            while (getline(file, line))
            {
                cout << line << endl;
            }
            file.close();
            break;
        }
        }

    } while (choice != 3);

    return 0;
}