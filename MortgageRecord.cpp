#include <string>
#include <vector>

class MortgageRecord {
public:
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

    // Constructor to initialize the properties
    MortgageRecord(int id, double grossIncome, double creditPayment, double carPay, double studentLoans,
                double apprValue, double downPay, double loanAmt, double monthlyMortgage, int creditSc)
        : id(id), grossMonthlyIncome(grossIncome), creditCardPayment(creditPayment), carPayment(carPay),
        studentLoanPayments(studentLoans), appraisedValue(apprValue), downPayment(downPay), loanAmount(loanAmt),
        monthlyMortgagePayment(monthlyMortgage), creditScore(creditSc) {}
};
