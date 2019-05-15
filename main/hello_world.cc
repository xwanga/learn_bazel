#include "lib/hello_greet.h"
#include "main/hello_time.h"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
    string who = "world";
    if (argc > 1) {
        who = argv[1];
    }
    cout << get_greet(who) << endl;
    print_localtime();
    return 0;
}
