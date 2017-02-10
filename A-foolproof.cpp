#include <iostream>
#include <sstream> // stringstream
#include <string>
 
using namespace std;
 
void menu() {
    cout << "___________Fool_Proof_Menu___________\n" 
         << "   1 - Enter a line of txt\n"
         << "   2 - Enter a phrase of txt\n"
         << "   3 - Enter an integer of txt\n"
         << "   4 - Enter a floating point number\n"
         << "   q - quit\n"
         << "   Enter your choice: ";
}
 

int main() 
{
    int i;
    double d;
    string input, choice, text;
    bool stay = true;
    while(true) {
        menu();
        cin >> choice;
        cin.ignore(1000, 10);
        
        if(choice.size() == 1) {
            char ch = choice[0];
            
            switch(ch) {
                case '1': //line of text
                {
                    cout << "Enter a line of text string: ";
                    while(true) {
                        
                        getline(cin, input);
                        stringstream ss(input);
                        text = ss.str();
                        if(!ss.fail()) break;
                        cout << "Error in converting the string you entered.\n";
                    }
                    cout << "You have entered a string: " << text << endl << endl;
                    break;
                }
                
                case '2': //one word
                {
                    cout << "Enter a word of text: ";
                    while(true) {
                        getline(cin, input, ' '); //delimiter
                        cin.ignore(1000,10);
                        stringstream ss(input);
                        ss >> text;
                        if(!ss.fail()) break;
                        cout << "Error in converting the string you entered.\nTry Again";
                    }
                    cout << "You have entered a word: " << text << endl << endl;
                    break;
                }
                
                case '3': //integer
                {
                    cout << "\nEnter an integer number: ";
                    while(true) {
                        getline(cin, input);
                        stringstream ss(input);
                        ss >> i;
                        if (ss.fail()) break; // it is an integer
                            cout << " Error in converting the string you entered.\nTry Again: ";
                    }
                    cout << " You have entered an integer: " << i << endl << endl;
                    break;
                }
                
                case '4': //floating point
                {
                    cout << "\nEnter a floating number: ";
                    while(true) {
                        getline(cin, input);
                        stringstream ss(input);
                        ss >> d;
                        if (ss.fail()) break; // it is an integer
                            cout << " Error in converting the string you entered.\nTry Again";
                    }
                    cout << " You have entered an integer: \n\t" << d << endl;
                    break;
                }
                
                case 'q':
                case 'Q':
                
                    stay = false;
                    break;
                  
                
                default: 
                    cout << "   Commands not supported.\n\n";
            }
        }
    }
}
