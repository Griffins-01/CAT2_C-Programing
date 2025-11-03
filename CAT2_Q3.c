/*
NAME:GRIFFINS NYAMWANGE NYANDUSI
REGNO:PA106/G/28742/25
DESCRIPTION:PROGRAM THAT READS AND PROCESSES A LIST OF INTEGERS AND WRITES TO A 
DIFFERENT FILE
*/
#include <stdio.h>
#include <stdlib.h>

// Function 1: Get 10 integers and write to input.txt
void writeInputFile() {
    FILE *fp;
    int num, i;
    fp = fopen("input.txt", "w");
    if (fp == NULL) {
        printf("Error opening input.txt for writing.\n");
        return;
    }

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &num);
        fprintf(fp, "%d\n", num);
    }

    fclose(fp);
}

// Function 2: Read from input.txt, calculate sum & average, write to output.txt
void processFiles() {
    FILE *inFile, *outFile;
    int num, sum = 0, count = 0;
    float avg;

    inFile = fopen("input.txt", "r");
    if (inFile == NULL) {
        printf("Error opening input.txt for reading.\n");
        return;
    }

    while (fscanf(inFile, "%d", &num) == 1) {
        sum += num;
        count++;
    }
    fclose(inFile);

    if (count == 0) {
        printf("No data found in input.txt.\n");
        return;
    }

    avg = (float) sum / count;

    outFile = fopen("output.txt", "w");
    if (outFile == NULL) {
        printf("Error opening output.txt for writing.\n");
        return;
    }

    fprintf(outFile, "Sum = %d\nAverage = %.2f\n", sum, avg);
    fclose(outFile);
}

// Function 3: Display contents of both files
void displayFiles() {
    FILE *fp;
    char ch;

    printf("\nContents of input.txt:\n");
    fp = fopen("input.txt", "r");
    if (fp == NULL) {
        printf("Error reading input.txt.\n");
        return;
    }
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);

    printf("\nContents of output.txt:\n");
    fp = fopen("output.txt", "r");
    if (fp == NULL) {
        printf("Error reading output.txt.\n");
        return;
    }
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);
}

// Main function
int main() {
    writeInputFile();
    processFiles();
    displayFiles();
    return 0;
}
/*
NAME:GRIFFINS NYAMWANGE NYANDUSI
REGNO:PA106/G/28742/25
DESCRIPTION:
*/

#include<stdio.h>
