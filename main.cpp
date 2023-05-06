///////////////////////////////////////////////////////////////////////////////////
//   Note: The primary purpose of this lab is to use overloaded arithmetic
//         operators to allow users to enter coordinates in the form (x, y)
/////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "Point.h"

using namespace std;

int main() {

    Point Point1;
    Point Point2;
    int choice{ 1 };

    cout << "Welcome\n\n";
    cout << "This Program calculates the distance between two points\n";

    while (choice == 1) {
        cout << "Enter the first point in the format (x,y)\n";
        cin >> Point1;
        cout << endl;

        cout << "Enter the second point in the format (x,y)\n";
        cin >> Point2;
        cout << endl;

        // Call overloaded + operator to calculate distance
        Point1 + Point2;

        // Output
        cout << "Point 1:   " << Point1;
        cout << "Point 2:   " << Point2;
        cout << "Distance:  " << Point1.getDistance() << "\n\n";
        if (Point1 == Point2) {
            cout << "*** The coordinates are equal ***\n\n";
        }

        // Update choice
        cout << "Would you like to run the program again?\n";
        cout << "Enter 1 for YES and 2 for NO\n";
        cin >> choice;
        cout << endl;
    }


    // Terminate Program
    cout << "Terminating Program...\n";
    cout << "*Sad computer noises*" << endl;

    return 0;
}