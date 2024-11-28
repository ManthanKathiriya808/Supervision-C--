#include <iostream>
#include <iomanip> // for formatting the percentage

using namespace std;

// Define a structure to hold student details
struct Student {
    int roll_no;
    string name;
    int chem_marks;
    int maths_marks;
    int phy_marks;
};

int main() {
    Student students[5]; // Array of 5 students

    // Input student details
    for (int i = 0; i < 5; i++) {
        cout << "Enter details of Student " << i + 1 << ":" << endl;
        cout << "Roll no => ";
        cin >> students[i].roll_no;
        cin.ignore(); // Ignore the newline character from previous input
        cout << "Name => ";
        getline(cin, students[i].name);
        cout << "Chemistry => ";
        cin >> students[i].chem_marks;
        cout << "Mathematics => ";
        cin >> students[i].maths_marks;
        cout << "Physics => ";
        cin >> students[i].phy_marks;
    }

    // Display student details along with percentage
    cout << "\nMark Sheets:\n";
    for (int i = 0; i < 5; i++) {
        int total = students[i].chem_marks + students[i].maths_marks + students[i].phy_marks;
        float percentage = (total / 300.0f) * 100;

        // Display details
        cout << students[i].name << " (" << students[i].roll_no << ")" << endl;
        cout << "Chemistry => " << students[i].chem_marks << endl;
        cout << "Mathematics => " << students[i].maths_marks << endl;
        cout << "Physics => " << students[i].phy_marks << endl;
        cout << "Total => " << total << "/300" << endl;
        cout << "Percent => " << fixed << setprecision(2) << percentage << "%" << endl << endl;
    }

    return 0;
}
