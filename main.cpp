#include <fstream>
#include <sstream>
#include "MortgageRecord.cpp"

using namespace std;

vector<MortgageRecord> readMortgageRecords(const string& fileName);

int main() {
    std::string fileName = "data/HackUTD-2023-HomeBuyerInfo.csv";
    std::vector<MortgageRecord> mortgageRecords = readMortgageRecords(fileName);

    // Now you can work with your mortgageRecords vector.
    // ...

    return 0;
}


vector<MortgageRecord> readMortgageRecords(const string& fileName) {
    vector<MortgageRecord> records;
    ifstream file(fileName);

    string line;
    // Skip the header line
    getline(file, line);

    while (getline(file, line)) {
        istringstream s(line);
        string field;
        vector<string> fields;

        while (getline(s, field, ',')) {
            fields.push_back(field);
        }

        if (fields.size() == 10) {  // Make sure we have the right number of fields
            MortgageRecord record(
                stoi(fields[0]),
                stod(fields[1]),
                stod(fields[2]),
                stod(fields[3]),
                stod(fields[4]),
                stod(fields[5]),
                stod(fields[6]),
                stod(fields[7]),
                stod(fields[8]),
                stoi(fields[9])
            );
            records.push_back(record);
        }
    }
    return records;
}
