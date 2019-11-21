/* Assigmnet 1: Physics Calculator
Student: Vibhavi Jayasinghe
Teacher: Dr_T
Programming Fundamental 2
10-22-2019
*/

#include <iostream>
#include <string>
#include "color.h"
#include "input_validation.h"

using namespace std;

void handleOption(string);
void showMenu();
void calculateVelocity(double, double);
void calculateAcceleration(double, double);
void calculateMomentum(double, double);
void calculateMotion(string, double, double, double, double, double, double);
void calculateNewton(double,double);
void calculateWeight(double, double);


void showMenu(){
  cout << "\n---------------------------------";
  cout << "\nWelcome to the Physics Calculator";
  cout << "\n---------------------------------\n";
  cout << "\nA: Velocity\nB: Acceleration\nC: Motion\nD: Newton's Second Law\nF: Weight\nG: Momentum\nE: Exit\nX: Clear the screen\n";
}

void handleOption(string option){
  double ds, dt, dv, dm, da, dg, u, v, a, t, s0, s1;
  string s = "";
  if(option == "A" || option == "a"){
    calculateVelocity(ds, dt);
  }
  else if(option == "B" || option == "b"){
    calculateAcceleration(dv, dt);
  }
  else if(option == "C" || option == "c"){
    calculateMotion(s, u, v, a, t, s0, s1);
  }
  else if(option == "D" || option == "d"){
    calculateNewton(dm, da);
  }
  else if(option == "F" || option == "f"){
    calculateWeight(dm, dg);
  }
  else if(option == "G" || option == "g"){
    calculateMomentum(dm, dv);
  }
  else if(option == "X" || option == "x"){
    cout << "\x1B[2J\x1B[H";
  }
}


void calculateVelocity(double ds, double dt){
  string dsUnits = "", dtUnits = "";
  cout << change_color(30);
  cout << "\nLet's calculate Velocity.\nVelocity = ds/dt";
  cout << "\nPlease enter value for distance(ds): ";
  cin >> ds;
  cout << "Please enter Units for distance: ";
  cin >> dsUnits;
  cout << "Please enter value for time(dt): ";
  cin >> dt;
  cout << "Please enter Units for time: ";
  cin >> dtUnits;

  cout << "\nThe Velocity is " << (ds / dt) << " " << dsUnits << "/" << dtUnits << endl;
  cout << reset_color();
}

void calculateAcceleration(double dv, double dt){
  string dvUnits = "", dtUnits = "";
  cout << change_color(34);
  cout << "\nLet's calculate Acceleration.\nAcceleration = dv/dt";
  cout << "\nPlease enter value for velocity(dv): ";
  cin >> dv;
  cout << "Please enter Units for dv: ";
  cin >> dvUnits;
  cout << "Please enter value for time(dt): ";
  cin >> dt;
  cout << "Please enter Units for dt: ";
  cin >> dtUnits;

  cout << "\nThe Acceleration is " << (dv / dt) << " " << dvUnits << "/" << dtUnits << endl;
  cout << reset_color();
}

void calculateMotion(string s, double u, double v, double a, double t, double s1, double s2){
  string uUnits = "", tUnits = "", aUnits = "", sUnits = "";
  cout << change_color(1);
  cout << "\nYou can calculate motion from these 4 equations.\n";
  cout << "\nA: v = u + at\nB: s = ut + 1/2(at^2)\nC: v^2 = v0^2 + 2a(s-s0)\nD: v = 1/2*(u + v)";
  do{
    cout << "\n\nPlease choose an equation to calculate Motion: ";
    cin >> s;
  
    if(s == "A" || s == "a"){
      cout << change_color(2);
      cout << "\nYou have choosen v = u + at equation.\n";
      cout << "\nPlease enter value for initial velocity(v): ";
      cin >> u;
      cout << "Please enter units for initial velocty: ";
      cin >> uUnits;
      cout << "Please enter value for Acceleration: ";
      cin >> a;
      cout << "Please enter value for time: ";
      cin >> t;

      cout << "The Motion is " << (u + (a * t)) << " " << uUnits << endl;
      cout << reset_color();
    }
    else if (s == "B" || s == "b"){
      cout << change_color(2);
      cout << "\nYou have choosen s = ut + 1/2(at^2) equation.\n";
      cout << "\nPlease enter initial velocity: ";
      cin >> u;
      cout << "Please enter units for initial velocity: ";
      cin >> uUnits;
      cout << "Please enter value for time: ";
      cin >> t;
      cout << "Please enter units for time: ";
      cin >> tUnits;
      cout << "Please enter value for Acceleration: ";
      cin >> a;
      
      cout << "\nThe motion is " << ((u * t) + (0.5 * (a * (t * t)))) << " " << uUnits << tUnits << endl;
      cout << reset_color();
    }
    else if(s == "C" || s == "c"){
      cout << change_color(2);
      cout << "\nYou have choosen v^2 = u^2 + 2a(s-s0) equation.\n";
      cout << "\nPlease enter value for initial velocity: ";
      cin >> u;
      cout << "Please enter value for Acceleration: ";
      cin >> a;
      cout << "Please enter units for Acceleration: ";
      cin >> aUnits;
      cout << "Please enter value for final distance: ";
      cin >> s2;
      cout << "Please enter units for distance: ";
      cin >> sUnits;
      cout << "Please enter value initial distance: ";
      cin >> s1;

      cout << "The Motion is " << ((u * u) + (2 * (a * (s2 - s1)))) << " " << aUnits << sUnits << endl;
      cout << reset_color();
    }
    else if(s == "D" || s == "d"){
      cout << change_color(2);
      cout << "\nYou have choosen v = 1/2*(u + v) equation.\n";
      cout << "\nPlease enter value for initial velocity: ";
      cin >> u;
      cout << "Please enter units for initial velocity: ";
      cin >> uUnits;
      cout << "Please enter value for final velocity: ";
      cin >> v;

      cout << "\nThe motion is " << ((0.5) * (u + v)) << " " << uUnits << endl;
      cout << reset_color();
    }
    else{
      cout << "Invalid selection.";
    }
  }while(s != "A" || s != "a" || s != "B" || s != "b" || s != "C" || s != "c" || s != "D" || s != "d");
  cout << reset_color();
}


void calculateNewton(double dm, double da){
  string dmUnits = "", daUnits = "";
  cout << change_color(35);
  cout << "\nLet's calculate Newton's Second Law. \nF = ma";
  cout << "\nPease enter value for mass (dm): ";
  cin >> dm;
  cout << "Please enter units for mass: ";
  cin >> dmUnits;
  cout << "Please enter value for Acceleration(da): ";
  cin >> da;
  cout << "Please enter units for Acceleration: ";
  cin >> daUnits;

  cout << "\nThe Newton's Second Law is " << (dm * da) << " " << dmUnits << daUnits << endl;
  cout << reset_color();
}

void calculateWeight(double dm, double dg){
  string dgUnits = "", dmUnits = "";
  cout << change_color(36);
  cout << "\nLet's calculate Weight.\nW = mg";
  cout << "\nPlease enter value for mass (dm): ";
  cin >> dm;
  cout << "Please enter units for mass: ";
  cin >> dmUnits;
  cout << "Please enter value for gravity (dg): ";
  cin >> dg;
  cout << "Please enter units for gravity: ";
  cin >> dgUnits;

  cout << "\nThe weight is " << (dm * dg) << " " << dmUnits << dgUnits << endl;
  cout << reset_color();
}

void calculateMomentum(double dm, double dv){
  string dmUnits = "", dvUnits = "";
  cout << change_color(96);
  cout << "\nLet's calculate Momentum.\nP = mv";
  cout << "\nPlease enter value for mass: ";
  cin >> dm;
  cout << "Please enter units for mass: ";
  cin >> dmUnits;
  cout << "Please enter value for Velocity: ";
  cin >> dv;
  cout << "Please enter units for velocity: ";
  cin >> dvUnits;

  cout << "\nThe momentum is " << (dm * dv) << " " << dmUnits << dvUnits << endl;
  cout << reset_color();
}


