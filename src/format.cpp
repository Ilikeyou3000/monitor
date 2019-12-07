#include <string>

#include "format.h"

using std::string;

// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function
string Format::ElapsedTime(long seconds) { 
    long hour = seconds / 3600 % 100;
    int minute = (seconds%3600)/60;
    int second = seconds%60;

    std::string time = std::to_string(hour) + ":" + std::to_string(minute) + ":" + std::to_string(second) ;
    return time;
 }