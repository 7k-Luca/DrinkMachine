#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

// Drink Structure
struct Drink {
    string name;
    int numberLeft;
};

// Creating the array to store the drinks values
Drink drinks[5];

// Classes for repetitive instances
void sound();
bool empty(string name, int left);

int main() {
    int choice;
    cout << "\nSoft Drink Dispenser ..." << endl << endl;

    // Initializing the structure variables
    Drink cola = { "Cola", 20 };
    Drink rootBeer = { "Root Beer", 20 };
    Drink lemonLime = { "Lemon-Lime", 20 };
    Drink grapeSoda = { "Grape Soda", 20 };
    Drink creamSoda = { "Cream Soda", 20 };

    drinks[0] = cola;
    drinks[1] = rootBeer;
    drinks[2] = lemonLime;
    drinks[3] = grapeSoda;
    drinks[4] = creamSoda;

    do {
        // Display the options
        cout << "\nChoose one of the following drinks" << endl;
        cout << "\t1. " << drinks[0].name << setw(25) << "(" << drinks[0].numberLeft
            << " left)" << endl;
        cout << "\t2. " << drinks[1].name << setw(21) << "(" << drinks[1].numberLeft
            << " left)" << endl;
        cout << "\t3. " << drinks[2].name << setw(20) << "(" << drinks[2].numberLeft
            << " left)" << endl;
        cout << "\t4. " << drinks[3].name << setw(20) << "(" << drinks[3].numberLeft
            << " left)" << endl;
        cout << "\t5. " << drinks[4].name << setw(20) << "(" << drinks[4].numberLeft
            << " left)" << endl;
        cout << "\t6. "
            << "Quit" << endl;
        cout << "Option: ";
        cin >> choice;

        // Switch statement to identify and use what the user chose
        switch (choice) {
        case 1:
            if (empty(drinks[0].name, drinks[0].numberLeft)) {
                break;
            }
            else {
                sound();
                drinks[0].numberLeft -= 1;
                break;
            }
        case 2:
            if (empty(drinks[1].name, drinks[1].numberLeft)) {
                break;
            }
            else {
                sound();
                drinks[1].numberLeft -= 1;
                break;
            }
        case 3:
            if (empty(drinks[2].name, drinks[2].numberLeft)) {
                break;
            }
            else {
                sound();
                drinks[2].numberLeft -= 1;
                break;
            }
        case 4:
            if (empty(drinks[3].name, drinks[3].numberLeft)) {
                break;
            }
            else {
                sound();
                drinks[3].numberLeft -= 1;
                break;
            }
        case 5:
            if (empty(drinks[4].name, drinks[4].numberLeft)) {
                break;
            }
            else {
                sound();
                drinks[4].numberLeft -= 1;
                break;
            }
        case 6:
            cout << "\nGood Bye ..." << endl;
            break;
        default: // If the user inputs any number other from 1-6
            cout << "Error ... Invalild Choice. Try again. " << endl;
        }

    } while (choice != 6);
}

// Notifies the user that there drink is ready
void sound() {
    cout << "\nBlink ... Blink ... Blink\nClink ... Clink ... Clink\nSink ... "
        "Sink ... Sink\nHere is your Drink!"
        << endl
        << endl;
}

// Notifies the user if there is no more left of that drink
bool empty(string name, int left) {
    if (left <= 0) {
        cout << "\nThere is no more " << name << "! Please Try again." << endl;
        return true;
    }
    else {
        return false;
    };
}