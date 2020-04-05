#include "lib/hello-time.h"
#include<ctime>
#include<iostream>
using namespace std;

void print_localtime() {
    time_t result = time(nullptr);
    cout<< asctime(localtime(&result));
}
