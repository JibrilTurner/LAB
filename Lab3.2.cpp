#include <iostream>
#include <iomanip>
using namespace std;

struct student {
    string StudentName;
    double HomeworkScore;
    double ExamScore;
    double total;
};

student calculateGrade(string name, double HomeworkScore, double ExamScore){
    student s;

    s.StudentName   = name;
    s.HomeworkScore = HomeworkScore;
    s.ExamScore     = ExamScore;
    s.total         = (0.40 * HomeworkScore) 
                    + (0.60 * ExamScore);

    return s;
}

void Header(){
    cout << left     << setw(10) << "Name"
         << right    << setw(10) << "HW"
         << setw(10) << "Exam"
         << setw(10) << "Final" << endl;
}

void printTotal(student s){
    cout << left     << setw(10) << s.StudentName
         << right    << setw(10) << s.HomeworkScore
         << setw(10) << s.ExamScore
         << setw(10) << s.total << endl;
}

int main(){

    student Alice      = calculateGrade("Alice",      90, 82);
    student Bo         = calculateGrade("Bob",        90, 82);
    student SteveLacy  = calculateGrade("SteveLacy",  90, 82);
    student JohnHustle = calculateGrade("JohnHustle", 90, 82);

    Header();
    printTotal(Alice);
    printTotal(Bo);
    printTotal(SteveLacy);
    printTotal(JohnHustle);

    return 0;
}