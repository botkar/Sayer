#include "initilizer.h"

void input() {
    cout << "\e[1;34m" + name + "\e[0m\e[1;30m >> \e[0m";
    cin >> inputf;
    if (inputf == "exit") {
      close();
    }
    inpute = "say -r " + speed + " " + inputf;
    system(inpute.c_str());
    cls();
}

int main() { 
    if (!isMac) {
      return 0;
    }
    cls();
    while (true){
      cout << "\e[0;32mHello welcome to sayer for MacOS! Give exit as the input to exit.\e[0m\n";
      input();
    }
    return 0;
}
