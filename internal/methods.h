#include<iostream>
#include<math.h>
#include <fstream>
#include <string>


float solve(int i, std::ifstream &file) {
    std::string line;
    std::getline(file, line);
    float value = float(log(stof(line) / i));
    return value;
}