
#include <iostream>
#include <string>
using namespace std;

// Function prototype
bool isPalindrome(string);

int main()
{
    
    
    
    
    
    string testStrings[6] = 
	        { "ABLE WAS I ERE I SAW ELBA",
              "FOUR SCORE AND SEVEN YEARS AGO",
              "NOW IS THE TIME FOR ALL GOOD MEN",
              "DESSERTS I STRESSED",
              "AKS NOT WHAT YOUR COUNTRY CAN DO FOR YOU",
              "KAYAK" };
   
   
   
   for (int i = 0; i < 6; i++)
   {
      string rev = string(testStrings[i].rbegin(), testStrings[i].rend());
      cout << "\"" << testStrings[i] << "\"";
      if(testStrings[i].compare(rev) == 0)
         cout << " is a palindrome.\n";
      else
         cout << " is NOT a palindrome.\n";
   }

	return 0;
}
