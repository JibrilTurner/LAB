/*
Program Reference
https://github.com/JibrilTurner/CPlusPlusMacOs/blob/master/Intemeddiate%20/passByRefrance.cpp
void swap(int* a, int* b) { // saying i want the memoery location of a and b
    int temp = *a;          // saying i want temp to be the value of a 
    *a = *b;                // setting the value of a to be the value of b
    *b = temp;              // setting the value of b to be the value of temp

    Instead of working with pointers to swap within a function,
    This program runs everything in main... 
    using comparsion operators to determine what is swapped
*/
  
/*
g++ JibrilTurner_Midterm_Question2.cpp -o JibrilTurner_Midterm_Question2.exe
.\JibrilTurner_Midterm_Question2.exe                
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int TEMP;
    int a;
    int b; 
    int c;

    int END = 3;
    int START = 0; 
    cout << "Expected Input         [a b c]"<< endl; 
    cout << "Note: Add Spaces" << endl;
    cout << "Input                  [     ]";
    cout << "\b\b\b\b\b\b"; // BACKSPACE, BACKSPACE . . . . . . . Until the cursor is at the start of [    ]
                            //                                    instead of \n                        ^    
                            //                                    its                                 [^   ]        
                            // Note: You can also use \033[6D  
                            // to achive the same effect                

    cin  >> a >> b >> c; 

    if (a > b){ 
         TEMP = a;
         a = b; 
         b = TEMP;
    }
        if (a > c){ 
         TEMP = a;
         a = c; 
         c = TEMP;
    }
    
    if (b > c){ 
         TEMP = b;
         b = c; 
         c = TEMP;
    }

    cout << "Output                 ["<< a << " " << b << " "  << c <<"]"<< endl; 

return 0; 
}


