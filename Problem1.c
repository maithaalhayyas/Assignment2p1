#include <stdio.h>

int main(int argc, char ** argv){
    int i = 1;
    label:

    printf("%s\n", argv[i]);

    i++;

    if (i < argc) {
    }
    return 0;
}
