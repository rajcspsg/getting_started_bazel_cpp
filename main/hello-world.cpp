#include "hello-greet.h"
#include <ctime>
#include <iostream>
#include <string>
using namespace std;

void print_localtime() {
    std::time_t result = std::time(nullptr);
    cout<< std::asctime(std::localtime(&result));
}

int main(int argc, char *argv[]) {
    std::string  who = "world";
    if(argc > 1) {
        who = argv[1];
    }
    cout<< get_greet(who) << endl;
    print_localtime() ;
    return 0;
}
