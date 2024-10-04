/*
Title: Chapter 3 Exercsie 3 Ingredient Adjuster
File Name: Chapter3Ex6_Cody_Drumheller
Programmer: Cody Drumheller
Date:20241004
Requirements:A cookie recipe calls for the following ingredients:
• 1.5 cups of sugar
• 1 cup of butter
• 2.75 cups of flour
The recipe produces 48 cookies with this amount of the ingredients. 
Write a program that asks the user how many cookies he or she wants to make, 
then displays the number of cups of each ingredient needed for the specified number of cookies.

*/

#include <iostream>
using namespace std;

int main()
{
    const double sugar_per_48 = 1.5;
	const double butter_per_48 = 1.0;
	const double flour_per_48 = 2.75;
	int num_cookies;
	cout << "Enter the number of cookies you want to make: ";
	cin >> num_cookies;
	double scaling_factor = static_cast<double>(num_cookies) / 48;
	double required_sugar = sugar_per_48 * scaling_factor;
	double required_butter = butter_per_48 * scaling_factor;
	double required_flour = flour_per_48 * scaling_factor;
	cout << "To make " << num_cookies << " cookies, you will need:" << endl;
	cout << required_sugar << " cups of sugar " << endl;
	cout << required_butter << " cups of butter " << endl;
	cout << required_flour << " cups of flour " << endl;
	return 0;



}


