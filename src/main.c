#include <stdio.h>  
#include <getopt.h>
#include <stdlib.h>
#include "pw_short.h"

int main(int argc, char* argv[]) {
    int opt;
    static int flag_s = 0;
    static int flag_l = 0;
    static int flag_h = 0;
    static int flag_a = 0;
    static int flag_v = 0;

    char author[100] = "Joshua D. Winters-Brown";
    char version[100] = "0.1.1";

    char *menu = 
    "\vNAME\n"
    "\tPassGen - Create relatively random and unique passwords.\n"
    "\vSYNOPSIS\n"
    "\tpassgen [OPTION]...\n"
    "\vDESCRIPTION\n"
    "\tCreate a relatively random and unique password using a random collection of alphanumerical\n\tcharacters and symbols. The default behavior of this application is the -s, or --short option.\n\n\tNOTE: Only one option can be used at a time. The options will be interperated\n\tin the order of the list below.\n\n"
    "\t-h, --help\n"
    "\t\tDisplay this message (the help message :)\n\n"
    "\t-s, --short\n"
    "\t\tGenerates a password that will contain no words, only alpha numerical characters,\n\t\tincluding symbols.\n\n"
    // "\t-l, --long\n"
    // "\t\tGenerates a password that will contain a collection of words. These\n\t\tpasswords will only contain alpha numerical characters, excluding symbols.\n\n"
    "\vAUTHOR\n"
    "\tWritten by Joshua D. Winters-Brown.\n\n"
    "\vREPORTING BUGS\n"
    "\tTo report bugs, please visit the github issues link below\n\t\t> https://github.com/ofgrenudo/passgen/issues"
    "\vCOPYRIGHT\n"
    "\tpassgen  Copyright (C) 2023  Joshua D. Winters-Brown.\n\n\tThis program comes with ABSOLUTELY NO WARRANTY; This is free software,\n\tand you are welcome to redistribute it under the terms and conditions\n\tlisted in the gpl-3.0 license file;";
    

    int long_index = 0;
    static struct option long_options[] = {
        /* These options set a flag. */
        {"short",   no_argument,       &flag_s, 1},
        {"long",    no_argument,       &flag_l, 1},
        {"help",    no_argument,       &flag_h, 1},
        {"author",  no_argument,       &flag_a, 1},
        {"version", no_argument,       &flag_v, 1},
    };
    
    while((opt = getopt_long(argc, argv, ":slhav", long_options, &long_index)) != -1) {
        switch(opt) {
            case 's':
                flag_s = 1;
                break;
            case 'l':
                flag_l = 1;
                break;
            case 'h':
                flag_h = 1;
                break;
            case 'a':
                flag_a = 1;
                break;
            case 'v':
                flag_v = 1;
                break;
        }
    }

    // Help must be the leader of the logic block because if someone puts -h or --help we 
    // want it to stop the rest of the command and brick their session by displaying the help message.
    if (flag_h) { printf("%s", menu); }
    else if (flag_s) { char* pw = generate_short(); printf("%s", pw); free(pw);}
    else if (flag_l) { printf("This feature has not been implemented yet.\n");}
    else if (flag_a) { printf("%s", author); }
    else if (flag_v) { printf("Version %s", version); }
    else { char* pw = generate_short(); printf("%s", pw); free(pw); }
}