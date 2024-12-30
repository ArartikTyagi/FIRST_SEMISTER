#include <stdio.h>
int main() {
    FILE *file = fopen("newfile.txt", "r");  
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    char line[256];
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }
    fclose(file); 
    return 0;
}