#include <iostream>
#include <iomanip>
using namespace std;

double saleTax = 0.0825;

struct Total {
    double coffee;
    double pastry;
    double subtotal;
    double tax;
    double total;
};


Total calculateTotal(double coffeePrice, double pastryPrice, int coffees, int pastries){
    Total r;
    r.coffee   = coffeePrice * coffees;
    r.pastry   = pastryPrice * pastries;
    r.subtotal = r.coffee    + r.pastry;
    r.tax      = r.subtotal  * saleTax;
    r.total    = r.subtotal  + r.tax;
    return r;
}


void printReceiptHeader(string name)
{cout << "\n----- Receipt for " << name << " -----\n\n";}
void printSeparator()
{cout << "\n------------------------------\n\n";}


void printItem(string item, int quantity, double price, double total)
{
    cout << left      << setw(10) << item
         << right     << setw(2)  << quantity
         << " @ $"    << setw(5)  << price
         << "   = $ " << setw(5)  << total << endl;
}


void printTotal(string name, double amount){
    cout << left    << setw(21) << name
         << " = $ " << right    << setw(4) << amount << endl;
}


int main(){
    string name;
    int coffees; int pastries;
    double coffeePrice;double pastryPrice;
    cout << "Welcome to Java Bean Café!\n\n";
    cout << "Please enter your first name: ";
    cin >> name;
    cout << "\nEnter number of coffees purchased: ";
    cin >> coffees;
    cout << "\nEnter price of one coffee: ";
    cin >> coffeePrice;
    cout << "\nEnter number of pastries purchased: ";
    cin >> pastries;
    cout << "\nEnter price of one pastry: ";
    cin >> pastryPrice;

    Total r = calculateTotal(
        coffeePrice,
        pastryPrice,
        coffees,
        pastries
    );

    cout << fixed << setprecision(2);
    printReceiptHeader(name);
    printItem("Coffees",  coffees,  coffeePrice, r.coffee);
    printItem("Pastries", pastries, pastryPrice, r.pastry);
rintSeparator();
    printTotal("Subtotal", r.subtotal);
    cout << endl;
    printTotal("Tax (8.25%)", rax);
    cout << endl;
    printTotal("Total", r.total);
    return 0;
}