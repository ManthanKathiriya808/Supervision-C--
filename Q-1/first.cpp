#include <iostream>
#include <fstream> // File handling

using namespace std;

int main() {
    // Create and open files for even and odd numbers
    ofstream evenFile("even_file.txt");
    ofstream oddFile("odd_file.txt");

    if (!evenFile.is_open() || !oddFile.is_open()) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    // Write even and odd numbers from 50 to 70 to respective files
    for (int i = 50; i <= 70; i++) {
        if (i % 2 == 0) {
            evenFile << i << ", ";
        } else {
            oddFile << i << ", ";
        }
    }

    // Close the files
    evenFile.close();
    oddFile.close();

    // Reading and displaying the contents of the files
    ifstream evenFileRead("even_file.txt");
    ifstream oddFileRead("odd_file.txt");

    string evenNumbers, oddNumbers;
    getline(evenFileRead, evenNumbers);
    getline(oddFileRead, oddNumbers);

    cout << "Even numbers from even_file.txt:\n" << evenNumbers << endl;
    cout << "Odd numbers from odd_file.txt:\n" << oddNumbers << endl;

    evenFileRead.close();
    oddFileRead.close();

    return 0;
}
