document.addEventListener('DOMContentLoaded', (event) => {
  const loginForm = document.getElementById('loginForm');

  loginForm.addEventListener('submit', function(e) {
    e.preventDefault(); // Prevent the default form submission

    // Retrieve values from form
    const id = document.getElementById('ID').value;
    const grossMonthlyIncome = document.getElementById('GrossMonthlyIncome').value;
    const creditCardPayment = document.getElementById('CreditCardPayment').value;
    const studentLoanPayment = document.getElementById('StudentLoanPayment').value;
    const carPayment = document.getElementById('CarPayment').value;
    const appraisedValue = document.getElementById('AppraisedValue').value;
    const downPayment = document.getElementById('DownPayment').value;
    const loanAmount = document.getElementById('LoanAmount').value;
    const monthlyMortgagePayment = document.getElementById('MonthlyMortgagePayment').value;
    const creditScore = document.getElementById('CreditScore').value;

    // Log the values to the console (or you can store them as needed)
    console.log('ID:', id);
    console.log('Gross Monthly Income:', grossMonthlyIncome);
    console.log('Credit Card Payment:', creditCardPayment);
    console.log('Student Loan Payment:', studentLoanPayment);
    console.log('Car Payment:', carPayment);
    console.log('Appraised Value:', appraisedValue);
    console.log('Down Payment:', downPayment);
    console.log('Loan Amount:', loanAmount);
    console.log('Monthly Mortgage Payment:', monthlyMortgagePayment);
    console.log('Credit Score:', creditScore);

    // If you want to store the values locally in the browser:
    // localStorage.setItem('formData', JSON.stringify({id, grossMonthlyIncome, creditCardPayment, studentLoanPayment, carPayment, appraisedValue, downPayment, loanAmount, monthlyMortgagePayment, creditScore}));
  });
});
