/*
Name: Elijah Outlaw
Program: Program 3
Description: We created a while loop and ask the user to enter Y or N if they want to use their own numbers
or random numbers generated between -10 and 10. If the user selects Y then they are prompted to enter 2 sets of numbers
for x1 and x2 and and x2 and y2. Then the x's and y's are raised to the power of 2 and added together the resulting number
is then raised to the power of .5 and stored into a our distance float variable. Next the x and y numbers are outputted
along with the distance float number to give us the distance to the origin. Lastly the user is prompted if they want to
repeat the program again or exit all together.
*/

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    // define values
    int x1, y1, x2, y2;
    float dist1;
    float dist2;
    char userChoice = 'Y';
    char userChoice2 = 'Y';
    srand(time(0));

    while (userChoice == 'Y')
    {

        cout << "Do you want to enter your own number? Y or N: ";
        cin >> userChoice2;

        if (userChoice2 == 'Y')
        {

            cout << "Please enter x & y coordinates (int) for point 1: ";
            cin >> x1 >> y1;

            cout << "Please enter x & y coordinates (int) for point 2: ";
            cin >> x2 >> y2;
        }
        else if (userChoice == 'Y')
        {
            x1 = rand() % 21 - 10;
            y1 = rand() % 21 - 10;
            x2 = rand() % 21 - 10;
            y2 = rand() % 21 - 10;
        }

        dist1 = pow(pow(x1, 2) + pow(y1, 2), .5);
        dist2 = pow(pow(x2, 2) + pow(y2, 2), .5);

        cout << "Distance to origin for point 1: ("
             << x1 << ", " << y1 << ") is: "
             << dist1 << endl;
        cout << "Distance to origin for point 2: ("
             << x2 << ", " << y2 << ") is: "
             << dist2 << endl;

        if (dist2 > dist1)
        {
            cout << "Point 1 is closer to the origin" << endl;
        }
        else
        {
            cout << "Point 2 is closer to the origin" << endl;
        }

        cout << "Go again? Y or N: ";
        cin >> userChoice;
        userChoice = toupper(userChoice);
    }

    cout << "Thanks for playing!" << endl;
}
