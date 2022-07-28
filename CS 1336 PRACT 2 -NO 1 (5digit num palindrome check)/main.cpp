                                    PROGRAM # 1


/*

    This program will check if a five digit integer is a palindrome.


1. Ask the user to input the 5 digit integer.
2. Extract each of the digits from the integer.
3. Check if the 1st and last digits and the 2nd and 4th digits of the integer are the same.
        If the above is true:
            Display to the user that the number is a palindrome.
        If the above is false:
            Display to the user that the integer is not a palindrome
*/

// This program will check if a five digit integer is a palindrome.

#include <iostream>

using namespace std ;

int main()
{
        // Declare variables.
    int number ;  // The five-digit integer.
    int firstDigit ;  // The first digit of the integer.
    int secondDigit ;  //  The second digit of the integer.
    int thirdDigit ;  // The third digit of the integer.
    int fourthDigit ;  // The fourth digit of the integer.
    int fifthDigit ;  // The fifth digit of the integer.

    int remainingNumber ;  // To hold the remaining parts of the integer used in calculations.

        // Ask the user to input the 5 digit integer.
    cout << "Enter a five-digit integer: " ;
    cin >> number ;

    // Extract each of the digits from the integer.

        // Get the first digit.
    firstDigit = number / 10000 ;
    remainingNumber = number % 10000 ;

        // Get the second digit.
    secondDigit = remainingNumber / 1000 ;
    remainingNumber %= 1000 ;

        // Get the third digit.
    thirdDigit = remainingNumber / 100 ;
    remainingNumber %= 100 ;

        // Get the fourth digit.
    fourthDigit = remainingNumber / 10 ;
    remainingNumber %= 10 ;

        // Get the fifth digit.
    fifthDigit = remainingNumber ;

    // Check if the 1st and last digits and the 2nd and 4th digits of the integer are the same .

    if ( fifthDigit == firstDigit && fourthDigit == secondDigit )
    {
            // Display to the user that the number is a palindrome.
        cout << number << " is a palindrome" << endl ;
    }

        // Display to the user that the integer is not a
        // palindrome if the specified digits don't match.
    else
    {
        cout << number << " is not a palindrome" << endl ;
    }

    return 0 ;
}

/*

    RUN 1:

Enter a five-digit integer: 23432
23432 is a palindrome

    -----------------------------------------------

    RUN 2:

Enter a five-digit integer: 12345
12345 is not a palindrome

    --------------------------------------------------

    RUN 3:

Enter a five-digit integer: 34543
34543 is a palindrome

*/



-------------------------------------------------------------------------------------------

                                PROGRAM # 2


/*

    This program reads 3 edges of a triangle and computes the perimeter if it is valid.


1. Get the length of the three edges from the user.
2. Declare boolean variables and assign conditions to them.
        Create a condition that the addition of edge 1 and 2 is greater than the value of edge 3.
        Create a condition that the addition of edge 1 and 3 is greater than the value of edge 2.
        Create a condition that the addition of edge 2 and 3 is greater than the value of edge 1.

3. Validate the input.
        If all the conditions above are false:
            Display error message.

        If all the conditions above are true:
            Calculate the perimeter of the triangle.
            Display the result to the user.

*/


// This program reads 3 edges of a triangle and computes the perimeter if it is valid.

#include <iostream>

using namespace std ;

int main()
{
        // Declare the double variables.
    double edgeLength1 ;  // The first edge length.
    double edgeLength2 ;  // The second edge length.
    double edgeLength3 ;  // The third edge length.
    double perimeter ;  // The triangle's perimeter.

        // Get the length of the three edges from the user.
    cout << "Enter three edges (length in double): " << endl ;
    cin >> edgeLength1 >> edgeLength2 >> edgeLength3 ;

    // Declare boolean variables and assign conditions to them.

        // Condition that the addition of edge 1 and 2 is greater than the value of edge 3.
    bool edge_Combination_1_2_3 = ( ( edgeLength1 + edgeLength2 ) > edgeLength3 ) ;

        // Condition that the addition of edge 1 and 3 is greater than the value of edge 2.
    bool edge_Combination_1_3_2 = ( ( edgeLength1 + edgeLength3 ) > edgeLength2 ) ;

        // Condition that the addition of edge 2 and 3 is greater than the value of edge 1.
    bool edge_Combination_2_3_1 = ( ( edgeLength2 + edgeLength3 ) > edgeLength1 ) ;

        // Validate the input. ( Display output for the boolean expressions being false )
    if ( ( edge_Combination_1_2_3 && edge_Combination_1_3_2 && edge_Combination_2_3_1 ) == 0 )
    {
            // Display error message to the user.
        cout << "Input is invalid" << endl ;
    }

        // Validate the input. ( Display output for the boolean expressions being true )
    else
    {
            // Calculate the perimeter of the triangle.
        perimeter = edgeLength1 + edgeLength2 + edgeLength3 ;

            // Display the result to the user.
        cout << "The perimeter is " << perimeter << endl ;
    }

    return 0;
}

/*

    RUN 1: length 1 = 2 , length 2 = 16 , length 3 = 24.

Enter three edges (length in double):
2
16
24
Input is invalid

    --------------------------------------------

    RUN 2: length 1 = 12, length 2 = 14 , length 3 = 16.

Enter three edges (length in double):
12
14
16
The perimeter is 42

    ---------------------------------------------

    RUN 3: length 1 = 20 , length 2 = 4.5 , length 3 = 10.26.

Enter three edges (length in double):
20
4.5
10.26
Input is invalid

    ---------------------------------------------

    RUN 4: length 1 = 40.2768 , length 2 = 34.675 , length 3 = 37.8976.

Enter three edges (length in double):
40.2768
34.675
37.8976
The perimeter is 112.849

*/



-------------------------------------------------------------------------------------------

                                PROGRAM # 3



/*

    This program will read the the value of today and the
    elapsed days and display what day it is now and in the future.


1. Store the name of each day of the week.
2. Ask the user to enter today's numerical day.
3. Ask the user to enter the number of days elapsed since today.
4. Validate the input: check if today or elapsed days are less than 0.
        If they are then get the input from the user again.

5. Store the output if the value of today is 1 or more.
        Calculate and store the remainder of dividing the value of today by 7.
        Store the name of the date based on the remainder.

6. Store the output if the elapsed days are 1 or more.
        Calculate and store the remainder of dividing the value of today + elapsed days by 7.
        Store the name of the date based on the remainder.

7. Display today's day and the future day to the user.

*/

// This program will read the the value of today and the
// elapsed days and display what day it is now and in the future.

#include <iostream>
#include <string>    // To hold string values.

using namespace std ;

int main()
{
        // Declare integer variables.
    int today ;  // Numerical (integer) value of TODAY'S DAY.
    int futureDays ;  // Integer value of Days elapsed since TODAY.

        // Declare string variables.
    string date ;    // String to hold the CURRENT DATE.
    string futureDate ;  // String to hold the FUTURE DATE.

    string day1 = "Monday" ;  // Assign sting: "Monday" to day 1.
    string day2 = "Tuesday" ;  // Assign string: "Tuesday" to day 2.
    string day3 = "Wednesday" ;  // Assign string: "Wednesday" to day 3.
    string day4 = "Thursday" ;  // Assign string: "Thursday" to day 4.
    string day5 = "Friday" ;  // Assign string: "Friday" to day 5.
    string day6 = "Saturday" ;  // Assign string: "Saturday" to day 6.
    string day7 = "Sunday" ;  // Assign string: "Sunday" to day 7.

        // Ask the user to enter today's numerical day.
    cout << "Enter today's day: " ;
    cin >> today ;

        // Ask the user to enter the number of days elapsed since today.
    cout << "Enter the number of days elapsed since today: " ;
    cin >> futureDays ;

        // Validate the input. ( check if today or future days are less than 1 )
    if ( today <= 0 || futureDays <= 0)
    {
            // Ask the user again to enter today's numerical day.
        cout << endl << "Please enter TODAY'S DAY: " ;
        cin >> today ;

            // Ask the user again to enter the number of days elapsed since today.
        cout << "Please enter the number of days ELAPSED SINCE TODAY: " ;
        cin >> futureDays ;
    }

        // Store the output if the value of today is 1 or more.
    if ( today > 0 )
    {
            // Calculate and store the remainder of dividing the value of today by 7.
        today %= 7 ;

            // Store the name of the date if the remainder is 1 (Monday).
        if ( today == 1 )
            date = day1 ;

            // Store the name of the date if the remainder is 2 (Tuesday).
        else if ( today == 2 )
            date = day2 ;

            // Store the name of the date if the remainder is 3 (Wednesday).
        else if ( today == 3 )
            date = day3 ;

            // Store the name of the date if the remainder is 4 (Thursday).
        else if ( today == 4 )
            date = day4 ;

            // Store the name of the date if the remainder is 5 (Friday).
        else if ( today == 5 )
            date = day5 ;

            // Store the name of the date if the remainder is 6 (Saturday).
        else if ( today == 6 )
            date = day6 ;

            // Store the name of the date if the remainder is 7 or 0 (Sunday).
        else if ( today == 7 || today == 0 )
            date = day7 ;
    }

        // Store the output if the elapsed days are 1 or more
    if ( futureDays > 0 )
    {
            // Calculate and store the remainder of dividing the value of today + elapsed days by 7.
        futureDays = ( today + futureDays ) % 7 ;

            // Store the name of the future date if the remainder is 1 (Monday).
         if ( futureDays == 1 )
            futureDate = day1 ;

            // Store the name of the future date if the remainder is 2 (Tuesday).
        else if ( futureDays == 2 )
            futureDate = day2 ;

            // Store the name of the future date if the remainder is 3 (Wednesday).
        else if ( futureDays == 3 )
            futureDate = day3 ;

            // Store the name of the future date if the remainder is 4 (Thursday).
        else if ( futureDays == 4 )
            futureDate = day4 ;

            // Store the name of the future date if the remainder is 5 (Friday).
        else if ( futureDays == 5 )
            futureDate = day5 ;

            // Store the name of the future date if the remainder is 6 (Saturday).
        else if ( futureDays == 6 )
            futureDate = day6 ;

            // Store the name of the future date if the remainder is 7 or 0 (Sunday).
        else if ( futureDays == 7 || futureDays == 0 )
            futureDate = day7 ;
    }

        // Display today's day and the future day to the user.
    cout << "Today is " << date << " and the future day is " << futureDate << endl ;

    return 0 ;
}

/*

    RUN 1: Today: 3, Days elapsed: 10.

Enter today's day: 3
Enter the number of days elapsed since today: 10
Today is Wednesday and the future day is Saturday

    ---------------------------------------------------

    RUN 2: Today: 0, Days elapsed: 1 && Today: 1, Days elapsed: 4.

Enter today's day: 0
Enter the number of days elapsed since today: 1

Please enter TODAY'S DAY: 1
Please enter the number of days ELAPSED SINCE TODAY: 4
Today is Monday and the future day is Friday

    ----------------------------------------------------

    RUN 3: Today: 5, Days elapsed: 0. && Today: 10, Days elapsed: 2.

Enter today's day: 5
Enter the number of days elapsed since today: 0

Please enter TODAY'S DAY: 10
Please enter the number of days ELAPSED SINCE TODAY: 2
Today is Wednesday and the future day is Friday

    ----------------------------------------------------

    RUN 4: Today: 100, Days elapsed: 250.

Enter today's day: 100
Enter the number of days elapsed since today: 250
Today is Tuesday and the future day is Sunday

*/



-----------------------------------------------------------------------------------------------

                                PROGRAM # 4



/*

    This program will display a random month.


1. Generate a random number between 1 to 12.
2. Use if statements to display the month based on the random number generated.

*/


// This program will display a random month.

#include <iostream>
#include <cstdlib>  // Include the rand and srand functions.
#include <ctime>  // Include the time functions.

using namespace std ;

int main()
{
        // Generate a random number between 1 to 12.
    srand ( time(0) ) ;
    int number = 1 + rand() % 12 ;

        // If random number is 1 assign the month of January to it and display output.
    if ( number == 1 )
        cout << "Month is January" << endl ;

        // If random number is 2 assign the month of February to it and display output.
    else if ( number == 2 )
        cout << "Month is February" << endl ;

        // If random number is 3 assign the month of March to it and display output.
    else if ( number == 3 )
        cout << "Month is March" << endl ;

        // If random number is 4 assign the month of April to it and display output.
    else if ( number == 4 )
        cout << "Month is April" << endl ;

        // If random number is 5 assign the month of May to it and display output.
    else if ( number == 5 )
        cout << "Month is May" << endl ;

        // If random number is 6 assign the month of June to it and display output.
    else if ( number == 6 )
        cout << "Month is June" << endl ;

        // If random number is 7 assign the month of July to it and display output.
    else if ( number == 7 )
        cout << "Month is July" << endl ;

        // If random number is 8 assign the month of August to it and display output.
    else if ( number == 8 )
        cout << "Month is August" << endl ;

        // If random number is 9 assign the month of September to it and display output.
    else if ( number == 9 )
        cout << "Month is September" << endl ;

        // If random number is 10 assign the month of October to it and display output.
    else if ( number == 10 )
        cout << "Month is October" << endl ;

        // If random number is 11 assign the month of November to it and display output.
    else if ( number == 11 )
        cout << "Month is November" << endl ;

        // If random number is 12 assign the month of December to it and display output.
    else if ( number == 12 )
        cout << "Month is December" << endl ;

    return 0;
}

/*

     RUN 1: Number = 1

Month is January

    ------------------------------------------

    RUN 2: Number = 6

Month is June

    ------------------------------------------

    RUN 3: Number = 7

Month is July

    --------------------------------------------

    RUN 4: Number = 2

Month is February

    ------------------------------------------

    RUN 5: Number = 5

Month is May

    ------------------------------------------

    RUN 6: Number = 8

Month is August

*/



--------------------------------------------------------------------------------------

                                PROGRAM # 5



/*

    This program will calculate a customer's monthly service bill with the package
    he has chosen and shows how much they could have saved with other packages.


1. Initialize the constants.
        Assign the initial price of package A.
        Assign the initial price of package B.
        Assign the price of package C.
        Assign the minutes that the initial price of A covers.
        Assign the minutes that the initial price of B covers.

2. Ask the user to select a package between a, b, or c.
3. Validate the input.
        If it is invalid: Display an error message

        If it is valid:
            Display the charges based the selected package.
                Display output if package A was selected.
                    Get the number of minutes the customer used the package.
                        Check if the minutes that was gotten is more than the base minutes for package A.
                            If it is greater than the base minutes:
                                Calculate the new charge of package A.
                                Display the charges to the customer.
                            If it isn't:
                                Display the charges to the customer.

                Display output if package B was selected.
                    Get the number of minutes the customer used the package.
                        Check if the minutes that was gotten is more than the base minutes for package B.
                            If it is greater than the base minutes:
                                Calculate the new charge of package B.
                                Display the charges to the customer.
                            If it isn't:
                                Display the charges to the customer.

                Display output if package C was selected.
                    Get the number of minutes the customer used the package.
                    Display the charges to the customer.

4. Display the savings if another package was selected.
        Display the possible savings if a package other than package A was selected.
            Check if the minutes that was gotten is more than the base minutes for package B.
                If it is then:
                    Calculate the charge of package B.

            Check if the charge of package A is more than that of B.
                If it is then:
                    Display the amount that would have been saved if package B was selected.

                If it isn't then:
                    Check if the charge of package A is more than that of the base charge of B.
                        Display the amount that would have been saved if package B was selected.

            Check if the charge of package A is more than that of the charge of C.
                If it is then:
                    Display the amount that would have been saved if package C was selected.

        Display the possible savings if a package other than package B was selected.
            Check if the charge of package B is more than that of the charge of C.
                If it is then:
                    Display the amount that would have been saved if package C was selected.

*/


// This program will calculate a customer's monthly service bill with the package
// he has chosen and shows how much they could have saved with other packages.

#include <iostream>
#include <iomanip>

using namespace std ;

int main()
{
         // Declare the constants.
    const double BASE_CHARGES_A = 39.99 ;  // The initial price of package A.
    const double BASE_CHARGES_B = 59.99 ;  // The initial price of package B.
    const double BASE_CHARGES_C = 69.99 ;  // The unchanging price of package C.
    const double BASE_MINUTES_A = 450.0 ;  // The minutes that the initial price of A covers.
    const double BASE_MINUTES_B = 900.0 ;  // The minutes that the initial price of B covers.

        // Declare other variables.
    char choice ;  // The user's package choice.
    double minutes ;  // The extended minutes that the package A and B don't cover.
    double charges_A ;  // The new charge of package A after the extended minutes.
    double charges_B ;  // The new charge of package B after the extended minutes.

        // Ask the user to select a package between a, b, or c.
    cout << "Enter the customer's pkg (A, B, or C): " ;
    cin >> choice ;

        // Set desired output formatting for numbers.
    cout << setprecision (2) << fixed << showpoint ;

        // Display the charges based the selected package.
    switch ( choice )
    {
            // Display output if package A was selected.
        case 'A' :
        case 'a' :

                // Get the number of minutes the customer used the package.
            cout << "Enter the number of minutes used: " ;
            cin >> minutes ;

                // Check if the minutes that was gotten is more than the base minutes for package A.
            if ( minutes > BASE_MINUTES_A )
            {
                    // Calculate the new charge of package A.
                charges_A = BASE_CHARGES_A + ( ( minutes - BASE_MINUTES_A ) * 0.45 );

                    // Display the charges to the customer.
                cout << "The charges are " << charges_A << endl ;
            }

                // If the above check fails, display the the output.
            else
            {
                    // Display the charges to the customer.
                cout << "The charges are " << BASE_CHARGES_A << endl ;
            }
                break ;

            // Display output if package B was selected.
        case 'B' :
        case 'b' :

                // Get the number of minutes the customer used the package.
            cout << "Enter the number of minutes used: " ;
            cin >> minutes ;

               // Check if the minutes that was gotten is more than the base minutes for package B.
            if ( minutes > BASE_MINUTES_B )
            {
                    // Calculate the new charge of package B.
                charges_B = BASE_CHARGES_B + ( ( minutes - BASE_MINUTES_B ) * 0.40 );

                    // Display the charges to the customer.
                cout << "The charges are " << charges_B << endl ;
            }

                // If the above check fails, display the the output.
            else
            {
                    // Display the charges to the customer.
                cout << "The charges are " << BASE_CHARGES_B << endl ;
            }
                break ;

            // Display output if package C was selected.
        case 'C' :
        case 'c' :

                // Get the number of minutes the customer used the package.
            cout << "Enter the number of minutes used: " ;
            cin >> minutes ;

                // Display the charges to the customer.
            cout << "The charges are " << BASE_CHARGES_C << endl ;
                break ;

            // Validate the input.
        default :

                // Display an error message.
            cout << "Please select a package: A, B, or C." << endl ;
    }

        // Display the savings if another package was selected.
    switch ( choice )
    {
            // Display the possible savings if a package other than package A was selected.
        case 'A' :
        case 'a' :

                // Check if the minutes that was gotten is more than the base minutes for package B.
            if ( minutes > BASE_MINUTES_B )
            {
                    // Calculate the charge of package B.
                charges_B = BASE_CHARGES_B + ( ( minutes - BASE_MINUTES_B ) * 0.40 ) ;
            }

                // Check if the charge of package A is more than that of B.
            if ( charges_A > charges_B )
            {
                    // Display the amount that would have been saved if package B was selected.
                cout << "With package B you would have saved " ;
                cout << ( charges_A - charges_B ) << endl ;
            }

                // Check if the charge of package A is more than that of the base charge of B.
            else if ( charges_A > BASE_CHARGES_B )
            {
                    // Display the amount that would have been saved if package B was selected.
                cout << "With package B you would have saved " ;
                cout << ( charges_A - BASE_CHARGES_B ) << endl ;
            }

                // Check if the charge of package A is more than that of the charge of C.
            if ( charges_A > BASE_CHARGES_C )
            {
                    // Display the amount that would have been saved if package C was selected.
                cout << "With package C you would have saved " ;
                cout << ( charges_A - BASE_CHARGES_C ) << endl ;
            }
                break ;

            // Display the possible savings if a package other than package B was selected.
        case 'B' :
        case 'b' :

                // Check if the charge of package B is more than that of the charge of C.
            if ( charges_B > BASE_CHARGES_C )
            {
                    // Display the amount that would have been saved if package C was selected.
                cout << "With package C you would have saved " ;
                cout << ( charges_B - BASE_CHARGES_C ) << endl ;
            }
                break ;

    }

    return 0 ;
}

/*

    RUN 1:

Enter the customer's pkg (A, B, or C): B
Enter the number of minutes used: 1000
The charges are 99.99
With package C you would have saved 30.00

    --------------------------------------------

    RUN 2:

Enter the customer's pkg (A, B, or C): A
Enter the number of minutes used: 1200
The charges are 377.49
With package B you would have saved 197.50
With package C you would have saved 307.50

    ---------------------------------------------

    RUN 3:

Enter the customer's pkg (A, B, or C): C
Enter the number of minutes used: 1400
The charges are 69.99

    ----------------------------------------------

    RUN 4: Package: a , minutes: 100

Enter the customer's pkg (A, B, or C): a
Enter the number of minutes used: 100
The charges are 39.99

    ----------------------------------------------

    RUN 5: Package: b , minutes: 856

Enter the customer's pkg (A, B, or C): b
Enter the number of minutes used: 856
The charges are 59.99

    ---------------------------------------------

    RUN 6: Package: B , minutes: 1110.5

Enter the customer's pkg (A, B, or C): B
Enter the number of minutes used: 1110.5
The charges are 144.19
With package C you would have saved 74.20

    ----------------------------------------------

    RUN 7: Package: 5

Enter the customer's pkg (A, B, or C): 5
Please select a package: A, B, or C.

*/
