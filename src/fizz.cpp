using namespace std;
#include <iostream>
#include "fizz.h"


string fizz::Fizz(int input) {
    string temp;
    if(input % 3 == 0 && input % 5 == 0) {
        return "FizzBuzz";
    }
    if(input % 3 == 0) {
        return "Fizz";
    }
    if(input % 5 == 0) {
        return "Buzz";
    }

    temp = to_string(input);
	return temp;
}
