#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {

    int quantity; //contains amount of items purchased
    float itemPrice; //contains price of each item
    float totalBill; //contains total bill
    string itemName; //contains the name of the item

    cout<<"What is the name of the item: ";
    cin>>itemName;

    //this line of code can capture an entire name with spaces: getline(cin, itemName);


    cout<<setprecision(2)<<fixed<<showpoint; //formats the output, some format methods are sticky(persistent)
    cout<<"Please input the number of items bought: "<<endl;

    //set precision to four: setprecision(4)


    cin>>quantity; //brings in the number of items purchased
    cout<<"Please input the unit price: "<<endl;
    cin>>itemPrice;

    totalBill = quantity * itemPrice;

    cout<<"The total price is: "<<totalBill<<endl;

    return 0;
}

int secondary(){
    float price1, price2; //the price of 2 items
    int quantity1, quantity2; //the quantity of 2 items;

    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"Please input the price and quantity of the first item: ";

    cin>>price1>>quantity1;

    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"Please input the price and quantity of the second item: ";

    cin>>price2>>quantity2;

    cout << setw(15)<<"Price"<<setw(12)<<"Quantity\n\n";

    cout<<"The price of the first item is "<<price1<<endl;
    cout<<"The quantity of the first item is "<<quantity1<<endl;

    cout<<"The price of the second item is "<<price2<<endl;
    cout<<"The quantity of the second item is "<<quantity2<<endl;

    return 0;
}

int hypotenuse(){
    float a,b; //the smaller side lengths of a right triangle
    float hyp; //the hypotenuse calculated by the program

    cout<<"Please input the value of the two triangle sides: "<<endl;
    cin>>a>>b;

    hyp=sqrt(pow(a,2)+pow(b,2));

    cout<<"The sides of the right triangle are "<<a<<" and "<<b<<endl;
    cout<<"The hypotenuse is "<<hyp<<endl;

    //cout<<"The hypotenuse is "<<setprecision(5)<<hyp<<endl;
    //cout<<"The hypotenuse is "<<setprecision(2)<<hyp<<endl;

    return 0;
}