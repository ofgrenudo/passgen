#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "pw_short.h"

/**
 * Generate a short password consisting of characters in the english alphabet, numbers, and symbols.
 * 
 * This function will use a predefined dictionary and spit out to you a random password.
 * 
 * @example
 * 
 * ## Example Usage
 * 
 * ```c
 * #include "pw_short.h"
 * char* pw = generate_short();
 * printf("Your password is > %s", pw);
 * 
 * free(pw);
 * ```
 * 
 * Note because you are using a pointer, you must free the memory after to avoid a memory leak.
 * 
 * 
 * @param none
 * @return your password as a char*[].
*/
char* generate_short() {
    char dictionary[66] = "abcdefghijklmnopqrstuvwxyz1234567890~!@#$%%^&*()_+[];\',./\\{}|:\"<>\?";
    int dictionary_length = strlen(dictionary);
    const int password_length = 15;
    char* generated_password = malloc (sizeof(char) * password_length);

    int i = 0;
    srand(time(NULL));
    while(i < password_length) {
        int random_charater_selector = rand() % dictionary_length;
        generated_password[i] = dictionary[random_charater_selector];
        i++;
    }

    return generated_password;
}

char* generate_short_no_symb() {
    char dictionary[36] = "abcdefghijklmnopqrstuvwxyz1234567890";
    int dictionary_length = strlen(dictionary);
    const int password_length = 15;
    char* generated_password = malloc (sizeof(char) * password_length);

    int i = 0;
    srand(time(NULL));
    while(i < password_length) {
        int random_charater_selector = rand() % dictionary_length;
        generated_password[i] = dictionary[random_charater_selector];
        i++;
    }
    
    return generated_password;
}