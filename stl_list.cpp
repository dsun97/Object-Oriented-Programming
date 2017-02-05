#include <iostream>
#include <list>
#include <vector>

using namespace std;

bool contains(list<int> mylist, int elem) {
   list<int>::iterator it;
   for (it = mylist.begin(); it!=mylist.end(); it++)
   if (*it == elem) return true;

   return false;
}
void printlist(list<int> mylist, list<int>::iterator it ) {

   cout << "mylist contains: ";
   for (it = mylist.begin(); it != mylist.end(); it++)
     cout << ' ' << *it;
     cout << '\n';

   int i = 1;
   
   for (it = mylist.begin(); it != mylist.end(); it++) {
   if(*it% 2 == 0) {
     it = mylist.erase(it);
     }
   }

   cout << "mylist contains: ";
   for (it = mylist.begin(); it != mylist.end(); it++)
     cout << ' ' << *it;
     cout << '\n';

   for (int i=1; i<=3; i++) mylist.push_back(i);


   cout << "mylist contains: ";
   for (it = mylist.begin(); it != mylist.end(); it++)
     cout << ' ' << *it;
   cout << '\n';

   for (int i= 4; i <= 6; i++) {
      cout << "List contains (" << i << ")? ";
        if (contains(mylist, i))
          cout << "yes\n";
        else cout << "no\n";
   }

   mylist.sort();

   cout << "mylist contains: ";
   for (it = mylist.begin(); it != mylist.end(); it++)
     cout << ' ' << *it;
   cout << '\n';
 
   cout << "mylist has " << mylist.size() << " items.\n";

}

int main () 
{
  list<int> mylist;
  list<int>::iterator it;

  if(mylist.empty()) cout << "This newly created list contains nothing\n";

  // set some initial values:
  for (int i = 1; i <= 10; i++) mylist.push_back(i);

  if(!mylist.empty()) cout << "This list contains something\n";
  
  printlist(mylist, it);

}

