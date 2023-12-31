#include <stdio.h>
#include <string.h>

void main(int argc, char **argv){
    int input = atoi(argv[1]);  
    char* file_name = argv[2];
    char *output_file_name = (char *)malloc(strlen("encrypted_") + strlen(file_name) + 1);
    strcpy(output_file_name, "encrypted_");
    strcat(output_file_name, file_name);


    // encrypt the contents of text.txt file with xor operation
    printf("Encryptning...");
    FILE *fp1 = fopen(file_name, "r");
    FILE *fp2 = fopen(output_file_name, "w");
    char ch1;
    while((ch1 = fgetc(fp1)) != EOF){
        ch1 = ch1 ^ input;
        fputc(ch1, fp2);
    }
    fclose(fp1);
    fclose(fp2);
}