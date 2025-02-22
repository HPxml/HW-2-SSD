#include <iostream>
int main() {
    int *value = new int(100);  // Dynamically allocate memory
    delete value;               // Properly deallocate the memory to prevent a memory leak
    return 0;
}
