#include <stdio.h>                
#include <stdlib.h>               

int main(void)
{             
    char input[] = "hello.txt";
    char exit[] = "exit.txt"; /*declare the files*/
    FILE *enter;
    FILE *exit; /*directorys*/
    int face; 
    int i;
    int spaces = 2; /*declare the variables*/

    enter = fopen(enter, "r"); 
    if (enter == NULL) {
        fprintf(stderr, "Not found %s\n", enter); /*if it doesn't exist, it will send error*/
        exit(8);
    }

    exit = fopen(exit, "w");
    if (exit == NULL) {
        fprintf(stderr, "Failed to find %sname", exit);
        exit(8);
    }

    while (1) {
        face = fgetc(enter);
        if (face == ' ') { 
            face = ' ';
            for (i = 0; i <= spaces; i++) {
                fputc(face, exit);
            }
        }
        if (face == EOF) 
            break;

        fputc(face, exit);
    }

    fclose(enter); 
    fclose(exit); 

    return 0;
}
