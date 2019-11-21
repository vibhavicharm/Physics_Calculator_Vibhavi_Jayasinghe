/* Assigmnet 1: Physics Calculator
Student: Vibhavi Jayasinghe
Teacher: Dr_T
Programming Fundamental 2
10-16-2019
*/

#include <iostream>
#include <string>
#include "color.h"
#include "functions.h"
#include "input_validation.h"

using namespace std;

int main() {
  string option = "";
  do{
    showMenu();
    cout << "\nPlease enter your option here: ";
    //option = validateChar(option);
    cin >> option;
    handleOption(option);
  }while(option != "E" && option != "e");
  cout << "\nThank you for using Physics Calculator. GoodBye!";
  
}