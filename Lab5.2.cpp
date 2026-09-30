#include <iostream>
#include <string>
#include <iomanip>
using namespace std;



/*/
Im sorry, if this code a a little verbose for what its doing since this is a introdoctory course. I miss spending 5 hours writting 
code like this. I wanted to avoid using vectors and having to dereference pointers thus leadking to this
the code i refernced is below in block comments. Its pretty aint it. 
*/

//ME having tons of fun please
/*
struct Item
{
    int itemValue = 0;
    string itemName = "";
    string rarity = "";
};

int addItems(Item records[], int maxItems)
{
    int itemCount = 0;

    while (itemCount < maxItems){
        cout << "Enter item name (or 'done' to finish): ";
        cin >> records[itemCount].itemName;
        if (records[itemCount].itemName == "done"){
            break;
        }
        cout << "Enter value in gold: ";
        cin >> records[itemCount].itemValue;
        cout << "Enter rarity (Common, Rare, Epic, Legendary): ";
        cin >> records[itemCount].rarity;
        cout << ">> Item recorded.\n\n";
        itemCount++;
    }
    return itemCount;
}


int calculateTotal(Item records[], int itemCount)
{
    int totalValue = 0;
    for (int i = 0; i < itemCount; i++){
        totalValue += records[i].itemValue;
    }
    return totalValue;
}

// Actual assignment of rarity happyens here 
void countRarities(Item records[], int itemCount,
                   int& common, int& rare,
                   int& epic  , int& legendary
                )
{
    common = 0; rare = 0;
    epic = 0;  legendary = 0;

    for (int i = 0; i < itemCount; i++)
    try{
        if (
            records[itemCount].rarity != "Common" &&
            records[itemCount].rarity != "Rare" &&
            records[itemCount].rarity != "Epic" &&
            records[itemCount].rarity != "Legendary"
        
        )
        {throw invalid_argument("Invalid rarity");}
    }
    catch (const invalid_argument& e){
        cout << "Error: " << e.what() << endl;
    }

}

int countSuspicious(Item records[], int itemCount)
{
    int suspicious = 0;
    for (int i = 0; i < itemCount; i++){
        if (records[i].itemValue > 1000){
            suspicious++;
        }
    }
    return suspicious;
}

void printSummary(int itemCount, int totalValue,
                  int common, int rare,
                  int epic, int legendary,
                  int suspicious)
{
    double averageValue = 0;

    if (itemCount > 0){
        averageValue = static_cast<double>(totalValue) / itemCount;
    }

    cout << "\n--- Loot Summary ---\n";
    cout << "Total Items: " << itemCount << endl;
    cout << "Total Value: " << totalValue << " gold" << endl;

    cout << fixed << setprecision(2);
    cout << "Average Value: " << averageValue << " gold" << endl;

    cout << "Common: "    << common << endl;
    cout << "Rare: "      << rare << endl;
    cout << "Epic: "      << epic << endl;
    cout << "Legendary: " << legendary << endl;
    cout << "Warning: "   << suspicious
         << "item(s) flagged as suspiciously valuable!" << endl;
}

int main()
{
    const int MAX_ITEMS = 5;
    Item records[MAX_ITEMS];
    int itemCount = addItems(records, MAX_ITEMS);
    int totalValue = calculateTotal(records, itemCount);
    int common, rare, epic, legendary;

    countRarities(records, itemCount,
                  common, rare, epic, legendary);

    int suspicious = countSuspicious(records, itemCount);

    printSummary(itemCount, totalValue,
                 common, rare, epic, legendary,
                 suspicious);

    return 0;
}
*/


#include <iostream>
#include <string>
using namespace std;

int getTotal(int count)
{
    int total = 0;
    int value;
    string name;

    for (int i = 0; i < count; i++){
        cout << "Enter item name: ";
        cin >> name;

        cout << "Enter value: ";
        cin >> value;

        total += value;
    }

    return total;
}

void countRarities(int count){
    string rarity;
    int common = 0;
    int rare = 0;
    int epic = 0;
    int legendary = 0;

    for (int i = 0; i < count; i++){
        cout << "Enter rarity: ";
        cin >> rarity;

        if (rarity == "Common")
            common++;
        else if (rarity == "Rare")
            rare++;
        else if (rarity == "Epic")
            epic++;
        else if (rarity == "Legendary")
            legendary++;
    }

    cout << "Common: " << common << endl;
    cout << "Rare: " << rare << endl;
    cout << "Epic: " << epic << endl;
    cout << "Legendary: " << legendary << endl;
}

void printSummary(int count, int total){
    cout << "\n--- Loot Summary ---\n";
    cout << "Total Items: " << count << endl;
    cout << "Total Value: " << total << " gold" << endl;
}

int main(){
    int count;
    cout << "How many items? ";
    cin >> count;
    int total = getTotal(count);
    countRarities(count);
    printSummary(count, total);

    return 0;
}









//Ref
/*

#include <iostream>

// This is an example of how pointers can be used to change the actual values of variables rather than just copies of them.
// This is called "pass by reference" because we are passing the memory location of the variable rather than a copy of the variable.
// This is a very common technique in C++.

void swap(int* a, int* b) { // saying i want the memoery location of a and b
    int temp = *a; // saying i want temp to be the value of a 
    *a = *b; // setting the value of a to be the value of b
    *b = temp; // setting the value of b to be the value of temp
}

int main() {
    int a = 1;
    int b = 5;

    std::cout << "Address of a: " << &a << std::endl; // the & is getting the address of variable
    std::cout << "Address of b: " << &b << std::endl; // the & is getting the address of variable

    std::cout << "Before swapping: a = " << a << ", b = " << b << std::endl;

    swap(&a, &b); // following through 

    std::cout << "After swapping: a = " << a << ", b = " << b << std::endl;

    return 0;
}

*/
/*
 namespace std;

// Write a function that takes a vector of Student objects and writes the data to a file.
struct Student {
    std::string name;
    std::vector<int> grades;
    std::vector<std::string> dates;
    std::vector<int> id;
};

   void removeAssignment(Student& student, int assignmentIndex) {
    if (assignmentIndex >= 0 && assignmentIndex < student.grades.size()) {
        student.grades.erase(student.grades.begin() + assignmentIndex);
        student.dates.erase(student.dates.begin() + assignmentIndex);
    }
}

void insertSGrade(Student& student, int grade, const std::string& date, int id) {
    student.grades.push_back(grade);
    student.dates.push_back(date);
    student.id.push_back(id);
}


void writeStudentsToFile(const std::vector<Student>& students, const std::string& filename) {
    std::ofstream outputFile(filename);
    if (!outputFile) {
        std::cout << "Error opening file " << filename << std::endl;
        return;
    }

    for (int i = 0; i < students.size(); i++) {
        const Student& student = students[i];
        outputFile << "Name: " << student.name << std::endl;
        for (int j = 0; j < student.grades.size(); j++) {
            outputFile << "Assignment " << (j + 1) << ":" << std::endl;
            outputFile << "Grade: " << student.grades[j] << std::endl;
            outputFile << "Date: " << student.dates[j] << std::endl;
            outputFile << "ID: " << student.id[j] << std::endl;
            outputFile << std::endl;
        }
    }

    outputFile.close();
    std::cout << "Student data written to " << filename << std::endl;
}

int idMaker() {

    int id = rand() % 100000;  //  random number between 0 and 1

    return id;
}
int main() {
    std::vector<Student> students;
    
    // Create and populate the first student
    Student john;
    john.name = "John";
    insertSGrade(john, 90, "1/1/2020", idMaker());
    insertSGrade(john, 70, "1/3/2020", idMaker());
    insertSGrade(john, 85, "1/5/2020", idMaker());
    insertSGrade(john, 100, "1/7/2020", idMaker());
    insertSGrade(john, 95, "1/9/2020", idMaker());
    insertSGrade(john, 80, "1/11/2020", idMaker());
    insertSGrade(john, 75, "1/13/2020", idMaker());
    insertSGrade(john, 65, "1/15/2020", idMaker());
    insertSGrade(john, 70, "1/17/2020", idMaker());
    insertSGrade(john, 75, "1/19/2020", idMaker());
    insertSGrade(john, 80, "1/21/2020", idMaker());

    
    // removeAssignment(john, 1);
    
    //  John to the students vector
    students.push_back(john);
    
    // create and populate the second student
    Student alice;
    alice.name = "Alice";
    insertSGrade(alice, 85, "2/1/2020", idMaker());

    // removeAssignment(alice, 0);
    
    // add Alice to the students vector
    students.push_back(alice);
    
    // write student data to file
    writeStudentsToFile(students, "students.txt");
    
    return 0;
}
*/