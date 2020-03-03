#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{

    //User entered integers
    double num1;
    double num2;

    //Numbers for indexing
    float base, power, total;

    //Math Operators
    char mathOp;

    //float variable for sum
    float sum;


    do{ //Do while loop to loop through the program
        cout << "Please choose a Calculation you want to do: \nAddition - 1 \nMultiplication - 2 \nSubtraction - 3 \nDivison - 4 \nPower - 5 \nSquare Root - 6 " << endl;
        cin >> userInput;

        //If user enters 1 do some addition
        if(userInput == "1")
        {
            cout << "Let's add some stuff" << endl;
            cout << "Enter your calculation: " << endl;
            cin >> num1; //inputting integer
            cin >> mathOp;//inputting operator
            cin >> num2;

            switch(mathOp)
            {
                case '+' : sum = num1 + num2;
                    break;
            }

            cout << "= " << sum;
         //If user enters 2 do some multiplication
        }else if(userInput == "2")
        {
            cout << "\t* - Multiply" << endl;
            cout << "Let's multiply some stuff" << endl;
            cout << "Enter your calculation: " << endl;
            cin >> num1;
            cin >> mathOp;
            cin >> num2;

            switch(mathOp)
            {
                case '*' : sum = num1 * num2;
                    break;
            }

            cout << "= " << sum;



         //If user enters 3 do some subtraction
        }else if(userInput == "3")
        {
            cout << "Let's subtract some stuff" << endl;
            cout << "Enter your calculation: " << endl;
            cin >> num1;
            cin >> mathOp;
            cin >> num2;

            switch(mathOp)
            {
                case '-' : sum = num1 - num2;
                    break;
            }

            cout << "= " << sum;

        //If user enters 4 do some Division
        }else if(userInput == "4")
        {
            cout << "\t/ - Division" << endl;
            cout << "You chose Division!" << endl;
            cout << "Enter your calculation: " << endl;
            cin >> num1;
            cin >> mathOp;
            cin >> num2;

            switch(mathOp)
            {
                case '/' : sum = num1 / num2;
                    break;
            }

            cout << "= " << sum;

        //If user enters 5 it's exponent time!
        }else if(userInput == "5")
        {
            cout << "Let's play with exponents!" << endl;
            cout << "Please enter your base number: ";
            cin >> base;

            cout << "Please enter the power: ";
            cin >> power; //inputting the power

            total = pow(base, power);

            cout << base << " to the power of " << power << " = " << total << endl; //prints out the total


        }

        //If user enters 6 it's time for square roots!
        else if(userInput == "6")
        {
            cout << "Let's find the square of something!" << endl;
            cout << "Please enter the number you want to find the Square Root of: ";
            cin >> num1;

            cout << "The square root of " << num1 << " = " << sqrt(num1) << endl;



            cout << "= " << percentage << endl;

        }

        cout << "\nWanna play again? (y/n)" << endl;
        cin >> userInput;

    }while(userInput == "y");

}