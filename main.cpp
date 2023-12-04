#include <iostream>
#include <omp.h>
#include "./internal/methods.h"
#include <string>


int main() {
    std::string line;
    std::ifstream file("../files/expofile1.txt");

    if (file.is_open()) {
#pragma omp parallel num_threads(3)
#pragma omp for
        for (int i = 0; i < 100; i++) {
#pragma omp critical
            std::cout<<"[line "<<i<<"] "<< solve(i,file)<<"  [thread "<<omp_get_thread_num()<<"]"<<std::endl;
        }
    } else {
        std::cout << " file not open";
    }
    file.close();

    return 0;
}