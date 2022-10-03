/* stringremove.c
 * Source file for stringremove, a program that removes a string, s2, from
 * within string, s1. Stringremove() takes 3 parameters: 1.) the source string,
 * 2.) the starting index number (addr withing s1), 3.) the number of chars to
 * remove. There is no s2, just s1, the starting index, and the number of
 * chars to remove.
*/

#include <stdio.h>
void remove_string(char s[], int index, int num_char);
void get_string(char s[]);

#define MAX_LEN 81


int main(int argc, char *argv[]) {

    char s[MAX_LEN];
    int index, num_char;

    index = 0;
    num_char = 0;

    printf("Enter text: ");

    get_string(s);

    printf("Enter index and number of characters: ");

    scanf("%i %i", &index, &num_char);

    remove_string(s, index, num_char);


    printf("Modded string: %s\n", s);





















    return(0);
}



void remove_string(char s[], int index, int num_char){

    int region2addr, region2size, i;

    /* calculate region2size */

    region2addr = index + num_char;
    region2size = 0;
    while(s[region2addr + region2size] != '\0')
        ++region2size;
    region2size += 1;


    /* move region2 over num_char */

    for(i = 0; i <= region2size; ++i)
        s[index + i] = s[index + num_char + i];

}




void get_string(char s[]){

    int i;
    char c;

    i = 0;
    do{
        c = getchar();
        s[i] = c;
        ++i;
    }while((c != '\n') && (i < MAX_LEN));
    s[i - 1] = '\0';


}
