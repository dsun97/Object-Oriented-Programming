
#include<iostream>
#include <iomanip>
#include <vector>
using namespace std;

// Constant for the number of months

// Function prototypes
double getTotal(vector<double>, int);
double getAverage(vector<double>, int);
double getLargest(vector<double>, int, int &);
double getSmallest(vector<double>, int, int &);

int main()
{
	// Vector to hold the rainfall data
	vector<double> v(12);
	
	// Get the rainfall for each month.
	for (int i = 0; i < v.size(); i++)
	{
		// Get this month's rainfall.
		cout << "Enter the rainfall (in inches) for month #";
		cout << (i + 1) << ": ";
		cin >> v[i];
      
		// Validate the value entered.
		while (v[i] < 0)
		{  
			cout << "Rainfall must be 0 or more.\n"
				 << "Please re-enter: ";
			cin  >> v[i];
		}
	}
   
	// Set the numeric output formatting.
	cout << fixed << showpoint << setprecision(2) << endl;
   
	// Display the total rainfall.
	cout << "The total rainfall for the year is ";
	cout << getTotal(v, 12)
	     << " inches." << endl;
   
	// Display the average rainfall.
	cout << "The average rainfall for the year is ";
	cout << getAverage(v, 12)
	     << " inches." << endl;

	// Now display the largest & smallest amounts.
	// The subscript variable will be passed by reference
	// the the getLargest and getSmallets functions.
	int subScript;

	// Display the largest amount of rainfall.
	cout << "The largest amount of rainfall was ";
	cout << getLargest(v, 12, subScript)
	     << " inches in month ";
	cout << (subScript + 1) << "." << endl;

	// Display the smallest amount of rainfall.
	cout << "The smallest amount of rainfall was ";
	cout << getSmallest(v, 12, subScript)
	     << " inches in month ";
	cout << (subScript + 1) << "." << endl << endl;

	return 0;
}

double getTotal(vector<double> v, int size)
{
	double total = 0.0; // Accumulator

	// Step through the array and add each value
	// to the total variable.
	for (int i = 0; i < v.size(); i++)
		total += v[i];

	return total;
}

double getAverage(vector<double> v, int size)
{
	// Simpy get the total of the array values
	// and divide by the number of elements.
	double average = getTotal(v, size) / size;
   
	return average;
}

double getLargest(vector<double> v, int size, int &element)
{
	double largest;  // To hold the largest value.
   
	// Assume element 0 holds the largest value.
	largest = v[0];
	element = 0;
   
	// Compare the value in largest to all the
	// other values in the array.
	for (int i = 1; i < v.size(); i++)
	{
		if (v[i] > largest)
		{
			largest = v[i];
			element = i;
		}
	}

	return largest;
}

double getSmallest(vector<double> v, int size, int &element)
{
	double smallest;  // To hold the smallest value
   
	// Assume element 0 holds the smallest value.
	smallest = v[0];
	element = 0;
   
	// Compare the value in largest to all the
	// other values in the array. 
	for (int i = 1; i < v.size(); i++)
	{
		if (v[i] < smallest)
		{
			smallest = v[i];
			element = i;
		}
	}
   
	return smallest;
}
