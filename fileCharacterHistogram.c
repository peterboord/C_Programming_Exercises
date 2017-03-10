#include <stdio.h>
// This program reads a file "file.txt" in the executable directory
// and prints out a list of characters present in the file,
// together with a count of each character
void initArray(int *a, int arraySize);
void printHist(int *a, int arraySize);

int main ()
{
    FILE *fp;
    int c;
    char *filename;
    int histAscii[256];


    int arraySize = sizeof(histAscii)/sizeof(histAscii[0]);
    printf("No elements = %d\n", arraySize);

    initArray(histAscii, arraySize);

    filename = "file.txt";
    fp = fopen(filename,"r");

    while(1)
    {
        c = fgetc(fp);
        if( feof(fp) )
        {
            break ;
        }
        histAscii[c] += 1;
    }

    printHist(histAscii, arraySize);
    fclose(fp);

    return(0);
}

void initArray(int *a, int arraySize) {
    int i;
    for(i=0; i<arraySize; i++) {
        a[i] = 0;
    }
}

void printHist(int *a, int arraySize) {
    int i;
    printf("Index\tCode\tNo. Codes\n");
    for(i=0; i<arraySize; i++) {
        if (a[i] != 0) {
            printf("%d\t%c\t%d\n", i, i, a[i]);
        }
    }
}
