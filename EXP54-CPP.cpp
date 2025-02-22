#include <iostream>
int main() {
    int *value = new int(200); // Dynamically allocated memory
    delete value; // Properly deallocate memory
    value = nullptr; // Prevent dangling pointer
    return 0;
}
