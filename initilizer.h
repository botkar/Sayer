#pragma once

#include <iostream>
#include <string>
using namespace std;
void cls() {
  system("clear");
}

#ifdef __APPLE__
  void close() {
    cls();
    system("say Goodbye!");
    cout << "\e[1;31mClosing...\e[0m";
    exit(1);
  }
  string speed = "220"; // This is ment to be a string.
  string name = getenv("USER");
  string inputf, inpute;
  bool isMac = true;
#else 
  bool isMac = false;
#endif
