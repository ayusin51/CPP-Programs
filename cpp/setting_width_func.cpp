/*
    cin -> istream -> stdin
    cout -> ostream -> stdout
    cerr -> unbuffered errors -> stderr -> compile time errors which are not stored
    clog -> buffered errors -> compile time errors which not stored
    
    ## Overloaded operators : >> and <<
        
        >> : get() and getline()
        << : put() and write()
    
    ## iostream Member functions 
        
        width() -> sets width for cout . Output is right aligned
    	fill() -> sets the emply blocks with passed parameter
	 
*/

#include <iostream>
using namespace std;

int main()
{
    cout.width(5);
    cout.fill('$');
    cout << 3456;
    cout.width(2);
    cout << 1;
    cout.width(3);
    cout << 1234 << endl;
    cout << 3.3556778;
}
