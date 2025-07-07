// C//pter 4 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    const double PI = 3.1459;//variable for pi instead of irrational number
    char CHOOSE;//can only be one character because it has to be 1-4 choice


    bool VALID = false;
    bool VALID1 = false;
    bool VALID2 = false; 
    bool VALID3 = false;
    //this program is a calculator
    //IT MAKES DIFFERENT GEOMETRY CALCULATIONS BASED ON THE USER'S NEED
    while (!VALID) {
        cout << "Geometry Calculator \n";
        cout << "1. Calculate the Area of a Circle \n";
        cout << "2. Calculate the Area of a Rectangle \n";
        cout << "3. Calculate the Area of a Triangle \n";
        cout << "4. Quit \n";
        cout << "Enter your choice (1-4): \n";//these are all the option the user can choose
        cin >> CHOOSE;//the choice the user makes
     
        if (CHOOSE == '1') {

            VALID = true;

            while (!VALID1) {//doing it again so it goes back to asking fro radius if invalid number is inserted

                double RAD;//Radius of the circle variable

                cout << "What is the radius of the circle? \n";

                cin >> RAD;


                if (RAD >= 0)//no error, non negative values only
                {
                    double Cir = PI * (pow(RAD, 2)); // calculating the area of a circle

                    cout << "The area is " << Cir << endl;//output of area

                    VALID1 = true;


                }
                else {//every other value, will cause error, so negative values

                    cout << "Error, needs to be positive number \n"; //error message

                    cin.clear();
                    cin.ignore(1000000, '\n');//both of these reset to beginning of expression




                }

            }





        }



        
        else if (CHOOSE == '2') {
            VALID = true;

            while (!VALID2) {// repeat back to beginning if a negative is input 

                double WIT;
                double LEN;

                cout << "What is the length of rectangle \n";
                cin >> LEN;

                cout << "What is the width of rectangle \n";
                cin >> WIT;


                if (WIT >= 0 && LEN >= 0) {

                    double sum = WIT * LEN; //calculating the area of rectangle

                    cout << "The area is " << sum<<endl;//output of rectangle

                    VALID2 = true;

                    }

                else {//every other value, will cause error, so negative values

                    cout << "Error, needs to be positive number \n"; //error message

                    cin.clear();
                    cin.ignore(1000000, '\n');//both of these reset to beginning of expression




                }
                











            }
















        }
        else if (CHOOSE == '3') {
            VALID = true;


            while (!VALID3) {

                double bas;//base variable
                double hei;//height variable

                cout << "What is the base of triangle \n";
                cin >> bas;

                cout << "What is the height of triangle \n";
                cin >> hei;

                if (bas >= 0 && hei >= 0) {

                    double tot= hei * bas * 0.5; //calculating the area of triangle

                    cout << "The area is " << tot << endl;//output of triangle

                    VALID3 = true;

                }

                else {//every other value, will cause error, so negative values

                    cout << "Error, needs to be positive number \n"; //error message

                    cin.clear();
                    cin.ignore(1000000, '\n');//both of these reset to beginning of expression




                }









            }


















        }
        else if (CHOOSE == '4') {
            VALID = true;//ends code if 4 is pressed

            cin.clear();





        }
        else {

            cout << "Error, needs to be 1,2,3, or 4 \n";//an error message if a non 1-4 integer is chosen by user, or letters

            cin.clear();
            cin.ignore(1000000, '\n');//both of these reset to beginning of expression




        }



        























    }
























    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
