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


            cout << "Error, mass needs to be 20Kg or less and more than 0 Kg \n";//an error message if the wrong amount is put

            cin.clear();
            cin.ignore(1000000, '\n');//both of these reset to beginning of expression


        }





    }
    
    
    
    

    while (!VALID){//continues into a loop until right value is input again
        cout << "What is the distance of your delivery? \n";
        cin >> LENGTH;// user types in the distance

        if (LENGTH > LENGTHL && LENGTH < LENGTHU)//THE LOOP IF PASS THROUGH IF COMMAND
        {
            VALID = true;

        }

        else {


            cout << "Error, the package needs to be shipped more than 10 miles and less than 3000 miles \n";//the error message that shows up if the wrong amount is put

            cin.clear();
            cin.ignore(1000000, '\n');//both of these functions are used to reset to beginningof expression 


        }





    }
    
    //I will use these values as a way to split up rate in a logical operator
    int value2 = 2;
    int value6 = 6;
    int value10 = 10;
    int value20 = 20;
    double rate1 = 1.10;//2kg and less rate
    double rate2 = 2.20;//2 to 6kg
    double rate3 = 3.70;//more than 6 to 10kg rate
    double rate4 = 4.80;//10 kg to 20kg rate
    double RATIOFIVE = 500; //all the  rates are per 500 miles, so I will be dividing them by this variable 

    //This sequence gives the output
    //This part will determine which range the weight falls under and use the mileage to calculate the cost
    if (MASS <= value2)//GIVES COSTS FOR 2KG AND LESS
    {
       
        
        double cost1 = rate1 * (LENGTH / RATIOFIVE);//all of these for each if is more or less the same 
        //I put the length and ratio in parathesisize so that it is more readible and that it could be done first
        
        cout << "your package will cost $ " << cost1 << endl;


        


        }
    else if (MASS > value2 && MASS <= value6)//GIVES COST FOR FOR THAN 2KG TO 6KG
        {

        double cost2 = rate2 * (LENGTH / RATIOFIVE);


        cout << "your package will cost $ " << cost2 << endl;




        }
    else if (MASS > value6&&MASS <= value10)//GIVES COST FOR MORE THAN 6KG AND TO 10KG
    {

        double cost3 = rate3 * (LENGTH / RATIOFIVE);


        cout << "your package will cost $ " << cost3 << endl;





    }
    else//the over 10kg but no more than 20kg should be in this category as the other categories eliminate the other options and the MASS loop statement prevents anything over 20
    {


        double cost4 = rate4 * (LENGTH / RATIOFIVE);


        cout << "your package will cost $ " << cost4 << endl;




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
