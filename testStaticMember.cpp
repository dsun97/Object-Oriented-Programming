#include <iostream>
#include <string>
using namespace std;

// Declaration of Numbers class
class Numbers
{
private:
    int number;    // To hold a number

    // Static arrays to hold words
    static string lessThan20[20];
    static string tens[10];
    static string hundred;
    static string thousand;
	
public:    
    // Constructor
    Numbers(int x){ number = x;}
   
    // Function to print the words for the number
    void print();
};

// Static member variables must be defined
// outside of the class 
string Numbers::lessThan20[20] = 
			 { "zero", "one", "two", "three", "four", "five",
			   "six", "seven", "eight", "nine", "ten", 
			   "eleven", "twelve", "thirteen", "fourteen", 
			   "fifteen", "sixteen", "seventeen", "eighteen",
			   "nineteen", 
			 };

string Numbers::tens[10] = 
			{ "zero", "ten", "twenty", "thirty", "forty",
			  "fifty", "sixty", "seventy", "eighty", "ninety",
			};


string Numbers::hundred = "hundred";
string Numbers::thousand = "thousand";

// *********************************************
// The print fucntion prints the English words *
// for the number                              *
// *********************************************

void Numbers::print()
{
    // Residue holds what remains to be printed.
    int residue = number;
    
    // Take care of thousands, if any.
    int n_thousands = residue/1000;
    residue = residue % 1000;
    if (n_thousands > 0) 
    {
        cout << " " << lessThan20[n_thousands];
        cout << " thousand";
    }    
    
    int n_hundreds = residue/100;
    residue = residue % 100;
    if (n_hundreds > 0) 
    {
        cout << " " << lessThan20[n_hundreds];
        cout << " hundred";
    }
    
    // Take care of thousands, if any.
    int n_tens = residue/10;
    residue = residue % 10;
    if (n_tens > 1) {
    {
        cout << " " << tens[n_tens];
    }
    cout << " " << lessThan20[residue];
    }
    else if(n_tens == 1)
        cout << " " << lessThan20[residue + n_tens * 10];
        
    if (number >= 20001) {
        cout << "You have entered an out of range number!" << endl
             << "Program exit";
        return;
    }

}


int main()
{
   int number;
   
    // Tell user what the program does.
    cout << "Translates whole dollar amounts into words for"
         << "the purpose of writing checks.\n"
         << "Entering a negative number terminates the program.\n"
         << "Enter an amount (less than 20000)for be translated into words: ";
    cin >> number;
    
    while (number >= 0)
    {
        // Create a Numbers object.
        Numbers n(number);
        
        // Print the English description.
        n.print();
        
        // Get another number.
        cout << "\nEnter another number: ";
        cin >> number;
    }         
    return 0;
}
