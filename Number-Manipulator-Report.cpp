//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
//* Program name    : L1-ExtraCreditA                                   * 
//*                                                                     * 
//* Written by      : Anthony Cantu                                     * 
//*                                                                     * 
//* Purpose         : The purpose of this program is to take two		    *
//*					  seperate numerical values and break them down.	          *
//*					  First by simply finding the sum, difference,		          *
//*					  product, and quotient of the two. Second by		            *
//*					  finding the same values but in Integer format.	          *
//*					  Lastly, finding the values once again but in		          *
//*					  Decimal format.									                          * 
//*                                                                     * 
//* Inputs          : User enters two numbers following the				      *
//*					  instructions provided.							                      * 
//*                                                                     * 
//* Outputs         : Display the different formarts of the two numbers	*
//*					  provided											                            * 
//*                                                                     * 
//* Calls           : No internal or external calls                     * 
//*                                                                     * 
//* Structure       : BEGIN                                             * 
//*                        Straight line code no sub-processes          * 
//*                   STOP                                              * 
//*                        End of Program                               * 
//*                                                                     * 
//*---------------------------------------------------------------------* 
//* Collaboration   : Got help from Prof. Urrutia for using the fabs	  *
//*					          fucntion, unclear if I was able to use it for     *
//*                   this assignment.											            *
//*                                                                     * 
//*---------------------------------------------------------------------* 
//* Change Log:                                                         * 
//*                         Revision                                    * 
//*       Date    Changed  Rel Ver Mod Purpose                          * 
//* 09/06/23      acantu 000.000.000 Initial release of program			    * 
//*                                                                     * 
//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double
		numOne,
		numTwo,
		numDiff,
		numOneDec,
		numTwoDec;

	cout << "Anthony Cantu\t" << "L1-ExtraCreditA\t" << "L1-ExtraCreditA.exe" << endl;

	cout << fixed << showpoint << setprecision(2);
	cout << setfill(' ');

	cout << "Enter one of these 2 digit number types "
		<< "\"01 to 99\", \"-01 to -99\", \"0.1 to 9.9\", "
		<< "for the first number." << endl;

	cout << "Enter one of these 2 digit number types "
		<< "\"01 to 99\", \"-01 to -99\" for the second number." << endl;

	cout << "Enter your first number -->";
	cin >> numOne;

	cout << "Enter your second single digit number -->";
	cin >> numTwo;

	//Begin Output
	cout << right << setw(26) << "Sum of digits is: " << left << setw(4) << numOne + numTwo << endl;

	//Find Difference
	numDiff = fabs(numOne - numTwo);

	cout << right << setw(26) << "Differnce of digits is: " << left << setw(4) << numDiff << endl;
	cout << right << setw(26) << "Product of num1*num2 is: " << left << setw(4) << numOne * numTwo << endl;
	cout << right << setw(26) << "Quotient of num1/num2 is: " << left << setw(4) << numOne / numTwo << endl;

	cout << endl; //Line Break

	cout << right;

	cout << setw(34) << "Integer value of num1 is: " << setw(4) << static_cast<int>(numOne) << endl;
	cout << setw(34) << "Integer value of num2 is: " << setw(4) << static_cast<int>(numTwo) << endl;
	cout << setw(34) << "Sum of Integer digits is: " << setw(4) << static_cast<int>(numOne + numTwo) << endl;
	cout << setw(34) << "Difference of Integer is: " << setw(4) << static_cast<int>(numDiff) << endl;
	cout << setw(34) << "Product of Integer num1*num2 is: " << setw(4) << static_cast<int>(numOne) * static_cast<int>(numTwo) << endl;
	cout << setw(34) << "Quotient of Integer num1/num2 is: " << setw(4) << static_cast<int>(numOne / numTwo) << endl;

	cout << endl; //Line Break

	numOneDec = numOne - static_cast<int>(numOne);
	numTwoDec = numTwo - static_cast<int>(numTwo);

	cout << setw(34) << "Decimal value of num1 is: " << setw(5) << numOneDec << endl;
	cout << setw(34) << "Decimal value of num2 is: " << setw(5) << numTwoDec << endl;
	cout << setw(34) << "Sum of Decimal digits is: " << setw(5) << numOneDec + numTwoDec << endl;

	//Find Difference
	numDiff = fabs(numOneDec - numTwoDec);

	cout << setw(34) << "Difference of Decimal is: " << setw(5) << numDiff << endl;
	cout << setw(34) << "Product of Decimal num1*num2 is: " << setw(5) << numOneDec * numTwoDec << endl;
	cout << setw(34) << "Quotient of Decimal num1/num2 is: " << setw(5) << numOneDec / numTwoDec << endl;

	char q;
	cout << "\nPress any key to Exit.";
	cin.ignore(2, '\n');
	cin.get(q);

	return 0;
}
