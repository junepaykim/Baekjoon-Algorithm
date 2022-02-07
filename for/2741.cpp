#include <iostream>

int main(int argc, char* argv[]) {
    int count;
    std::cin >> count;
    for(int i=0; i<count; i++)
        std::cout << i+1 << "\n";
    
    return 0;
}

