#include<stdio.h>

int main(){
    FILE *fptr;
    char ch[100];

    fptr = fopen("try.txt", "r"); // w, r, a, wb, rb, ab

    if(fptr == NULL){
        printf("File not found\n");
        return 1;
    }

    // ch = fgetc(fptr);// t

    
    
    // while(ch != EOF){
    //     printf("%c", ch);
    //     ch = fgetc(fptr);
    // }

    // fscanf(fptr, "%s", ch);

    fscanf(fptr, "%s", ch);

    printf("%s", ch);

    fclose(fptr);


    // write to file-------------------------------------

    // fptr = fopen("try.txt", "w");

    // printf("Enter a string: ");
    // gets(ch);

    
    // // fprintf(fptr, "%s", ch);

    // while (*ch != '\0')
    // {
    //     fputc(*ch, fptr);
    //     ch++;
    // }
    
    

    // fclose(fptr);

    return 0;
}