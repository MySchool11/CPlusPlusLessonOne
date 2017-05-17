#include <iostream>                             // Import the basic input/output stream library  // Import conio, a c header file (Google it!)
                                                // Whitespace is ignore by the compiler, so use it to structure your code in a readable manner
using namespace std;                            // Tells the compiler we are using the namespace std, see line 8

int main()                                      // All C++ programs need an entry point, main() is it, int means it returns an integer when it ends, this is used for error handling 0 = OK, 1(other number) = problem
{                                               // Start of main()
    std::cout << "How to print to the console"; // cout outputs text to the console. The angle brackets denote the direction of the things, in this case a string toward cout
                                                // The std:: points the compiler toward the namespace in which cout resides, here it is the std namespace
                                                // A namespace is a way of grouping functions and allowing name reuse. So I could create a namespace called sam and a method called cout
                                                // and reference it using sam::cout. Because we have used the using namespace std; declaration at the start of the code, this is not
                                                // necessary but is left in here to explain namespaces and using statements in c++
    double d;                                   // declaring a variable (a double precision floating point number)
    d = 3.151592654;                            // initialising d with a value, 3.141592654
    int i = 12;                                 // a c++ integer variable holding 12, declared and initialised on the same line
    string s = "Hello";                         // a c++ string holding Hello
    cout << endl << "double value: " << d;            // the next three lines move to a new line (endl) and output the double, integer and string we just created to the console
    cout << endl << "integer value: " << i;
    cout << endl << "string value: " << s;
    cout << endl << "memory address used to store the double: " << &d;      // the next three lines print the addresses where the variable are stored (pointers), as easy as placing an ampersand (&) before a variable name
    cout << endl << "memory address used to store the integer: " << &i;
    cout << endl << "memory address used to store the string: " << &s;

    i = 100;                                    // we have now change the value of integer i to 100 from 14
    cout << endl << "integer value changed to: " << i;
    cout << endl << "memory address used to store the integer: " << &i;     // the address will be the same because when i was created the memory was allocated for it and no matter the value that address is where it resides in memory

    cout << endl << "press enter to exit" << endl;      // outputs a string informing user how to exit the program
    cin.get();                                          // console input (cin) get function to await enter being pressed

    return 0x00;                              // main() returns an int and as there where no problems we will return 0 (hex used here)
}                                             // End of main()