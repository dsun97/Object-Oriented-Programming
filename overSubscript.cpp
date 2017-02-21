#include <iostream>
#include <cstdlib> // exit()
using namespace std;
const int LIMIT = 100; //array size
////////////////////////////////////////////////////////////////
class safearay
{
 private:
int arr[LIMIT];
 public:
int& operator [](int n) //note: return by reference
{
if( n< 0 || n>=LIMIT )
{ cout << "\nIndex out of bounds"; exit(1); }
return arr[n];
}
};
////////////////////////////////////////////////////////////////
int main()
{
safearay sa1;
int a, b, c, d, e;

cout << "Enter lower and upper index (separated by a space, ex: 0 10): ";
cin >> a >> b;
for(int j=a; j<b+1; j++) //insert elements
sa1[j] = j*10; //*left* side of equal sign
for(int j=a; j<b+1; j++) //display elements
{
int temp = sa1[j]; //*right* side of equal sign
cout << "Element " << j << " is " << temp << endl;
}

cout << "To modify which cell?: ";
cin >> c;
cout << "Enter a location between " << a << " and " << b << ": ";
cin >> d;
while (d < a || d > b)
{
    cout << "Enter a valid number: ";
    cin >> d;
}

cout << "Change 70 to what? ";
cin >> c;

for(int j=a; j<b+1; j++) //insert elements
{
    sa1[j] = j*10; //*left* side of equal sign
}
for(int j=a; j<b+1; j++) //display elements
{
int temp = sa1[j]; //*right* side of equal sign
if (j == d) temp = c;
cout << "Element " << j << " is " << temp << endl;
}

cout << endl;
cout << "Program exit! " << endl;

return 0;
}
