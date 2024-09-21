#include <stdio.h>

void print_word(char* word) {
    printf("%s", word);
}

int main() {
    char* destination_word = "Malaysia";
    print_word(destination_word); // will print "Hello" to the console
    return 0;
}
