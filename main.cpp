#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

// A simple structure to hold the information for each record
struct MortgageRecord {
    int id;
    double grossMonthlyIncome;
    double creditCardPayment;
    double carPayment;
    double studentLoanPayments;
    double appraisedValue;
    double downPayment;
    double loanAmount;
    double monthlyMortgagePayment;
    int creditScore;
};

int main() {
    string fileName = "/data/HackUTD-2023-HomeBuyerInfo.csv"; // Replace with your CSV file name
    ifstream file(fileName);

    // Check if we've opened the file (as we might not have it at our disposal)
    if (!file.is_open()) {
        cerr << "Could not open the file - '" << fileName << "'" << endl;
        return EXIT_FAILURE;
    }

    string line;
    getline(file, line); // Skip the header line

    // Read data, line by line
    while (getline(file, line)) {
        stringstream lineStream(line);
        string cell;
        MortgageRecord record;

        // Read each element from the row
        getline(lineStream, cell, ',');
        record.id = stoi(cell);
        getline(lineStream, cell, ',');
        record.grossMonthlyIncome = stod(cell);
        getline(lineStream, cell, ',');
        record.creditCardPayment = stod(cell);
        getline(lineStream, cell, ',');
        record.carPayment = stod(cell);
        getline(lineStream, cell, ',');
        record.studentLoanPayments = stod(cell);
        getline(lineStream, cell, ',');
        record.appraisedValue = stod(cell);
        getline(lineStream, cell, ',');
        record.downPayment = stod(cell);
        getline(lineStream, cell, ',');
        record.loanAmount = stod(cell);
        getline(lineStream, cell, ',');
        record.monthlyMortgagePayment = stod(cell);
        getline(lineStream, cell);
        record.creditScore = stoi(cell);

        // Process the record
        // For now, let's just print it
        cout << "Record ID: " << record.id << ", Monthly Mortgage Payment: " << record.monthlyMortgagePayment << endl;
    }

    file.close(); // Always close the file when you're done with it
    return 0;
}
