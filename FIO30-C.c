#include <stdio.h>
int main() {
    FILE *file = fopen("data.txt", "r"); // Safe file opening
    if (file) {
        fclose(file);
    }
    return 0;
}
