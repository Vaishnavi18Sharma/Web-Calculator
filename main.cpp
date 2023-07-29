// #include <iostream>
// using namespace std;

// int main() {
//     char choice;
//     double num1, num2, result;

//     cout << "Welcome to Basic Calculator!" << endl;
    
//     do {
//         cout << "Choose an operation:" << endl;
//         cout << "1. Addition" << endl;
//         cout << "2. Subtraction" << endl;
//         cout << "3. Multiplication" << endl;
//         cout << "4. Division" << endl;
//         cout << "5. Exit" << endl;

//         cout << "Enter your choice (1/2/3/4/5): ";
//         cin >> choice;

//         switch (choice) {
//             case '1':
//                 cout << "Enter the first number: ";
//                 cin >> num1;
//                 cout << "Enter the second number: ";
//                 cin >> num2;
//                 result = num1 + num2;
//                 cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
//                 break;
//             case '2':
//                 cout << "Enter the first number: ";
//                 cin >> num1;
//                 cout << "Enter the second number: ";
//                 cin >> num2;
//                 result = num1 - num2;
//                 cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
//                 break;
//             case '3':
//                 cout << "Enter the first number: ";
//                 cin >> num1;
//                 cout << "Enter the second number: ";
//                 cin >> num2;
//                 result = num1 * num2;
//                 cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
//                 break;
//             case '4':
//                 cout << "Enter the numerator: ";
//                 cin >> num1;
//                 cout << "Enter the denominator: ";
//                 cin >> num2;
//                 if (num2 != 0) {
//                     result = num1 / num2;
//                     cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
//                 } else {
//                     cout << "Error: Cannot divide by zero." << endl;
//                 }
//                 break;
//             case '5':
//                 cout << "Exiting Calculator." << endl;
//                 break;
//             default:
//                 cout << "Invalid choice. Please try again." << endl;
//                 break;
//         }

//     } while (choice != '5');

//     return 0;
// }