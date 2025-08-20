#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char note[500];
    int choice;

    printf("1. Write Notes\n");
    printf("2. Read Notes\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    getchar(); // Clear newline from buffer

    if (choice == 1) {
        // Open file in write mode
        fp = fopen("notes.txt", "w");
        if (fp == NULL) {
            printf("Error opening file!\n");
            return 1;
        }

        printf("Enter your notes (max 500 characters):\n");
        fgets(note, sizeof(note), stdin);

        fprintf(fp, "%s", note);
        fclose(fp);
        printf("Notes saved successfully!\n");
    } 
    else if (choice == 2) {
        // Open file in read mode
        fp = fopen("notes.txt", "r");
        if (fp == NULL) {
            printf("No notes found! Please write notes first.\n");
            return 1;
        }

        printf("\n--- Saved Notes ---\n");
        while (fgets(note, sizeof(note), fp) != NULL) {
            printf("%s", note);
        }
        fclose(fp);
    } 
    else {
        printf("Invalid choice!\n");
    }

    return 0;
}
