document.getElementById('financialForm').addEventListener('submit', function(event) {
  event.preventDefault(); // Prevents the default form submission action

  // Capture the form values
  var id = document.getElementById('id').value;
  var grossIncome = parseFloat(document.getElementById('grossIncome').value);
  var carPayment = parseFloat(document.getElementById('carPayment').value);
  var creditCardPayment = parseFloat(document.getElementById('creditCardPayment').value);
  var studentLoanPayment = parseFloat(document.getElementById('studentLoanPayment').value);
  var homeValue = parseFloat(document.getElementById('homeValue').value);
  var mortgagePayment = parseFloat(document.getElementById('mortgagePayment').value);
  var downPayment = parseFloat(document.getElementById('downPayment').value);
  var creditScore = parseInt(document.getElementById('creditScore').value);

  // For demonstration purposes, let's log the values to the console
  console.log('ID:', id);
  console.log('Gross Monthly Income:', grossIncome);
  console.log('Monthly Car Payment:', carPayment);
  console.log('Monthly Credit Card Payment:', creditCardPayment);
  console.log('Student Loan Payment:', studentLoanPayment);
  console.log('Home Appraised Value:', homeValue);
  console.log('Estimated Monthly Mortgage Payment:', mortgagePayment);
  console.log('Down Payment Amount:', downPayment);
  console.log('Credit Score:', creditScore);

  // At this point, you can do something with these values,
  // like pass them to a function that will render the graph.
});
