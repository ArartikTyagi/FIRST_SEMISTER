#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char filename[100], content[1000], choice;

    // Ask user for filename to create
    printf("Enter the filename to create: ");
    scanf("%s", filename);
    getchar(); 

    // Open file for writing
    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error creating the file!\n");
        return 1;
    }
    printf("\nFile '%s' created successfully!\n", filename);
    printf("Enter the content to write to the file:\n");
    printf("(Press Ctrl+D on a new line when finished)\n");
    while (1) {
        printf("> ");
        if (fgets(content, sizeof(content), stdin) == NULL) {
            break;  
        }
        fputs(content, file);  
    }
    fclose(file);  
    printf("\nFile has been written successfully!\n");
    printf("Would you like to read the content? (y/n): ");
    scanf("%c", &choice);

    if (choice == 'y' || choice == 'Y') {
        file = fopen(filename, "r");
        if (file == NULL) {
            printf("Error opening the file!\n");
            return 1;
        }
        printf("\nFile content:\n");
        printf("-------------\n");
        while (fgets(content, sizeof(content), file) != NULL) {
            printf("%s", content);
        }
        fclose(file);  
    }
    return 0;
}