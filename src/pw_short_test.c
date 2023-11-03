#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "pw_short.h"

int main(void) {
    char* pw_short = generate_short();
    char* pw_short_no_symb = generate_short_no_symb();
    
    int pw_short_is_length = 0;
    int pw_short_no_symb_is_length = 0;

    if (strlen(pw_short) == 15) { pw_short_is_length = 1; }
    if (strlen(pw_short_no_symb) == 15) { pw_short_is_length = 1; }
    
    printf("\nAsserting that pw_short/generate_short() returns 15 character string... > %s\t%s", pw_short_is_length ? "false" : "true", pw_short);
    printf("\nAsserting that pw_short/generate_short_no_symb() returns 15 character string... > %s\t%s", pw_short_no_symb_is_length ? "false" : "true", pw_short_no_symb);

    int character = 0;
    char unique_symbols[37] = "~!@#$%%^&*()_+{}|:\"<>\?`-=[]\\;',./";
    int special_symbols_found = 0;
    char character_found[1];
    // Loop through the character array
    for (int i = 0; pw_short_no_symb[i] != '\0'; i++) {
        // Check if the current character is a special symbol
        for (int j = 0; unique_symbols[j] != '\0'; j++) {
            if (pw_short_no_symb[i] == unique_symbols[j]) {
                character_found[0] = pw_short_no_symb[i];
                special_symbols_found = 1;
                break; // Exit the inner loop since we found a match
            }
        }
    }

    printf("\nAsserting that pw_short/generate_short_no_symb() returns no special symbols... > %s\t", special_symbols_found ? "false" : "true");
    if(special_symbols_found) { printf("%s", character_found[0]); }

    free(pw_short);
    free(pw_short_no_symb);

    return 0;
}