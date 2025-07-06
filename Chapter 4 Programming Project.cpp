// Chapter 4 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    double MASS;// represents the weight of package, not 0 or less or more than 20, in kilograms
    double LENGTH;//represents the distance the package will go, not less than 10 miles or more than 3000 miles.
    int MASSL = 0;
    int MASSU = 20;
    int LENGTHL = 10;
    int LENGTHU = 3000;



    bool valid = false;
    bool VALID = false;

    while (!valid) {//continues into a loop until right value is input
        cout << "Enter weight of package \n";
        cin >> MASS;//user types in the mass

        if (MASS > MASSL && MASS <= MASSU)//THE LOOP IF PASS THROUGH IF COMMAND
        {
            valid = true;

        }

        else {


            cout << "Error, mass needs to be 20Kg or less and more than 0 Kg";

            cin.clear();
            cin.ignore(1000000, '\n');


        }





    }
    
    
    
    

    while (!VALID){//continues into a loop until right value is input again
        cout << "What is the distance of your delivery?";
        cin >> LENGTH;// user types in the distance

        if (LENGTH > LENGTHL && LENGTH < LENGTHU)//THE LOOP IF PASS THROUGH IF COMMAND
        {
            VALID = true;

        }

        else {


            cout << "Error, the package needs to be shipped more than 10 miles and less than 3000 miles ";

            cin.clear();
            cin.ignore(1000000, '\n');


        }





    }

























    
    
    return 0;
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
