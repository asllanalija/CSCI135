//
/*

Author: Asllan Alija

Course: CSCI-135

Instructor: Gennadi Maryash

Assignment: HW E2.10

Prints cost of car per 100 miles and total distance you can travel
based on what the user inputs.

*/


#include <iostream>
using namespace std;

int main()
{
	float gallons;
	float fuel;
	float price;
	cout << "Enter the amount of gallons: ";
	cin >> gallons;
	cout << "Enter the fuel efficiency in miles per gallon: ";
	cin >> fuel;
	cout << "Enter the price per gallon: ";
	cin >> price;
	cout << "Cost per 100 miles: " << 100/fuel*price;
	cout << "Total distance you can travel: " << gallons*fuel;
}
