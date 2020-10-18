//B. Create a simple cashier program.
#include <iostream>
using namespace std;

int main(){

int prod,num,n;

cout << "___________GEDE'GORGEOUS TEA_____________\n\n"<<endl;
cout << "\t MILK TEA\t||\t₱Pri­ce "<< endl;
cout << " "<< endl;
cout << "1\tOKINAWA\t\t||\t₱80 "<< endl;
cout << "2\tWINTERMELON\t||\t₱75 "<< endl;
cout << "3\tCOOKIES & CREAM\t||\t₱85 "<< endl;
cout << "4\tTHAI MILK TEA\t||\t₱90 "<< endl;
cout << " "<< endl;
cout << "___________________­____________________­___\n\n";

cout << endl<< "Enter Number: ";
cin >> num;
switch (num){
case 1:
cout << "\nEnter Payment: ";
cin >> n; 
if (n>=80){
prod=n-80;
cout << "\nChange:₱ "<<prod<<endl;
}
else
cout << "\nInvalid Payment"<<endl;
break;
case 2:
cout << "\nEnter Payment: ";
cin >> n; 
if (n>=75){
prod=n-75;
cout << "\nChange:₱ "<<prod<<endl;
}
else
cout << "\nInvalid Payment"<<endl;
break;
case 3:
cout << "\nEnter Payment: ";
cin >> n; 
if (n>=85){
prod=n-85;
cout << "\nChange:₱ "<<prod<<endl;
}
else
cout << "\nInvalid Payment"<<endl;
break;
case 4:
cout << "\nEnter Payment: ";
cin >> n; 
if (n>=90){
prod=n-90;
cout << "\nChange:₱ "<<prod<<endl;
}
else
cout << "\nInvalid Payment"<<endl;
break;
}
cout << "\n\nPROGRAMMED BY: Duhaylungsod, Apple Gede P.";

return 0;
}