#include "main/hello-greet.h"
#include "lib/hello-time.h"
#include <ctime>
#include <iostream>
#include <string>
using namespace std;
int main(int argc, char *argv[]) {
    std::string  who = "world";
    if(argc > 1) {
        who = argv[1];
    }
    cout<< get_greet(who) << endl;
    print_localtime() ;
    return 0;
}
