#include <stdio.h>
#include <stdlib.h>
#include "pw_short.h"

int main(int argc, char* argv[]) {
    char* pw = generate_short();
    printf("%s", pw);
    free(pw);
}