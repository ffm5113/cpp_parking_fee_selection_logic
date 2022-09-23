#include <iostream> // To use cin/cout
#include <iomanip> // To access setw for output width
using namespace std;

const int INITIAL_LIMIT = 2;

// First 2 hours
const double CAR_1ST_RATE = 1.25;
const double TRUCK_1ST_RATE = 2.75;
const double BUS_1ST_RATE = 9.50;

// After first 2 hours
const double CAR_2ND_RATE = 1.50;
const double TRUCK_2ND_RATE = 3.75;
const double BUS_2ND_RATE = 6.75;

int main()
{
	char vehicleType;
	double hoursParked, totalPrice;
	cout << fixed << setprecision(2);
	cout << "Parking Logic Selection and Fee Calculator" << endl
		<< "By Forrest Moulin" << endl << endl
		<< "Please enter the letter for the type of vehicle" << endl
		<< "(C for car, T for truck, and B for bus) "
		<< "followed by a space and the hours parked." << endl << endl;

	cin >> vehicleType >> hoursParked;
	totalPrice = 100;

	if (vehicleType == 'C')
	{
		if (hoursParked <= INITIAL_LIMIT)
		{
			totalPrice = CAR_1ST_RATE * hoursParked;
		}
		else
		{
			totalPrice = CAR_1ST_RATE * 2 + 
				CAR_2ND_RATE * (hoursParked - 2);
		}
	}
	else if (vehicleType == 'T')
	{
		if (hoursParked <= INITIAL_LIMIT)
		{
			totalPrice = TRUCK_1ST_RATE * hoursParked;
		}
		else
		{
			totalPrice = TRUCK_1ST_RATE * 2 + 
				TRUCK_2ND_RATE * (hoursParked - 2);
		}
	}
	else if (vehicleType == 'B')
	{
		if (hoursParked <= INITIAL_LIMIT)
		{
			totalPrice = BUS_1ST_RATE * hoursParked;
		}
		else
		{
			totalPrice = BUS_1ST_RATE * 2 + 
				BUS_2ND_RATE * (hoursParked - 2);
		}
	}
	else
	{
		cout << "Please try again with a valid letter for the type of vehicle:" 
			<< endl << "(C for car, T for truck, and B for bus)." << endl;
		return 0; // Exit the program
	}

	cout << endl << "Forrest Green Parking Garages" << endl
		<< "-----------------------------" << endl
		<< left << setw(15) << "Vehicle type:"
		<< vehicleType << endl
		<< left << setw(15) << "Time parked:"
		<< hoursParked << " hours" << endl
		<< left << setw(15) << "Total due:"
		<< "$" << totalPrice << endl
		<< "-----------------------------" << endl;
}

/*
* CONSOLE OUTPUT # 1 
* Parking Logic Selection and Fee Calculator
* By Forrest Moulin
*
* Please enter the letter for the type of vehicle
* (C for car, T for truck, and B for bus) followed by a space and the hours parked.
*
* C 7
*
* Forrest Green Parking Garages
* -----------------------------
* Vehicle type:  C
* Time parked:   7.00 hours
* Total due:     $10.00
* -----------------------------
*
* CONSOLE OUTPUT # 2
* Parking Logic Selection and Fee Calculator
* By Forrest Moulin
*
* Please enter the letter for the type of vehicle
* (C for car, T for truck, and B for bus) followed by a space and the hours parked.
*
* T 10
*
* Forrest Green Parking Garages
* -----------------------------
* Vehicle type:  T
* Time parked:   10.00 hours
* Total due:     $35.50
* -----------------------------
*
* CONSOLE OUTPUT # 3
* Parking Logic Selection and Fee Calculator
* By Forrest Moulin
*
* Please enter the letter for the type of vehicle
* (C for car, T for truck, and B for bus) followed by a space and the hours parked.
*
* B 8
*
* Forrest Green Parking Garages
* -----------------------------
* Vehicle type:  B
* Time parked:   8.00 hours
* Total due:     $59.50
* -----------------------------
*/
