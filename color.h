#ifndef COLOR_H
#define COLOR_H
#include <string>

//Function prototypes
std::string change_color(int);
std::string reset_color();

std::string change_color(int color) {
  return "\x1b[" + std::to_string(color) + ";1m";
}

std::string reset_color() {
  return "\x1b[0m";
}
#endif