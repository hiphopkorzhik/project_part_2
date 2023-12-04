#include <iostream>
#include <fstream>
#include <math.h>

int main() {
    std::ofstream expFile;          // поток для записи
    std::ofstream indFile;

    expFile.open("../files/expofile1.txt");// открываем файл для записи
    indFile.open("../files/indofile1.txt");

    if (expFile.is_open()) {
        for (int i = 0; i < 200; i++) {
            float index= rand()% 40;
            indFile<<"i= "<<i<<"  index: "<<index<<std::endl;
            expFile << float(i* exp(index))<<std::endl;
        }
    }
    expFile.close();
    indFile.close();
    std::cout << "File has been written" << std::endl;
}