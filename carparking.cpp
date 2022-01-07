#include <iostream>
using namespace std;
int main()
{
    int input;
    int amount = 0, count = 0;
    int b=0, c=0, v=0;

    cout << " \t\t\t\t\t\t    Welcom Sir!" << endl;
    cout << " \t\t\t\t\t\tHope You Are Good." << endl;
    cout << " \t\t\t\t\t\t\t*" << endl;
    cout << " \t\t\t\tPlease read it carefully for and chose select a number" << endl;
    cout << "\n\t\t***************************************************************************************\n" << endl;


                                                // menu

    while (true)
    {
        cout << "\t1. Bikes." << endl;
        cout << "\t2. Cars." << endl;
        cout << "\t3. Vans." << endl;
        cout << "\t4. Show Record." << endl;
        cout << "\t5. Clear Records." << endl;
        cin >> input;

                                                    //for bike

        if (input == 1)
        {
            if (count < 50)
            {
                amount = amount + 20;
                count = count + 1;
                b++;
            }
            else
            {
                cout << "\t\t\t\t*************************************************" << endl;
                cout << "\t\t\t\t\t\tParking is full...!" << endl;
                cout << "\t\t\t\t*************************************************" << endl;
            }
        }

                                                    //for car

        else if (input == 2)
        {
            if (count < 50)
            {
                amount = amount + 50;
                count = count + 1;
                c++;
            }
            else
            {
                cout << "\t\t\t\t*************************************************" << endl;
                cout << "\t\t\t\t\t\tParking is full...!" << endl;
                cout << "\t\t\t\t*************************************************" << endl;
            }
        }

                                                    //for van

        else if (input == 3)
        {
            if (count < 50)
            {
                amount = amount + 100;
                count = count + 1;
                v++;
            }
            else
            {
                cout << "\t\t\t\t*************************************************" << endl;
                cout << "\t\t\t\t\t\tParking is full...!" << endl;
                cout << "\t\t\t\t*************************************************" << endl;
            }
        }

                                                    //Show data

        else if (input == 4)
            {
                cout << "\t\t\t\t*************************************************" << endl;
                cout << "\t\t\t\t\t\tTotal amount: " << amount << endl << endl;
                cout << "\t\t\t\t\t\tBikes: " << b << endl;
                cout << "\t\t\t\t\t\tCars: " << c << endl;
                cout << "\t\t\t\t\t\tVans: " << v << endl;
                cout << "\t\t\t\t\t\tTota Vehichels: " << count << endl;
                cout << "\t\t\t\t*************************************************" << endl;
        }

                                                    //Clear data

        else if (input == 5)
            {
                amount = 0;
                count = 0;
                b = 0;
                c = 0;
                v = 0;

                cout << "\t\t\t\t*************************************************" << endl;
                cout << "\t\t\t\t\t\t  Clear Records!" << endl;
                cout << "\t\t\t\t*************************************************" << endl;
        }

                                                    //Invalid number

            else
            {
                cout << "\t\t\t\t*************************************************" << endl;
                cout << "\t\t\t\t\t\tInvalid Number...!" << endl;
                cout << "\t\t\t\t*************************************************" << endl;}
    }
    return 0;
}
