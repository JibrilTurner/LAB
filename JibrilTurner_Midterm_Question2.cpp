
/*
g++ JibrilTurner_Midterm_Question1.cpp -o JibrilTurner_Midterm_Question1.exe
.\JibrilTurner_Midterm_Question1.exe                
*/

#include <iostream>
#include <string>
using namespace std;
const int OFFSET = 9; 
const int LIMIT = 35; 

void AnArrayLessAlgrothim(int VALUE){
    if (VALUE < OFFSET){
         cout << VALUE << endl;
    }
    else if (VALUE < LIMIT){ 
        // cout << static_cast<char>('A' + (VALUE - 9)) << endl; 
        cout << (char)('A' + (VALUE - OFFSET)) << endl; 
        } else {
        cout << VALUE << endl;
    }
}

int main(){
int VALUE;
cout << "VALUE : ";
cin >> VALUE; 
cout << "OUTPUT: ";
AnArrayLessAlgrothim(VALUE);


// for (int i = 0;  i < LIMIT;  i++){
// AnArrayLessAlgrothim(i);


return 0; 

}

// return 0; 
// }


// OFFSET = -9
//[A B  C  D]
//[9 10 11 12]

// OFFSET = 9
//[S T U V]
//[9 10 11 12]

// OFFSET = 0 
// [J K L N]
//[ 9 10 11 12]