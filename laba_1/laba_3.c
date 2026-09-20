#include <stdio.h>

int main() {

    printf("> Dowload... < ");
    printf(">              ");
    printf("%s\r  > Download... <");
    printf("%s\r                 ");
    printf("%s\r    > Download... <");
    printf("%s\r                   ");
    printf("%s\r      > Download... <");
    printf("%s\r                     ");
    printf("%s\r        > Download... <");
    printf("%s\r                       ");
    printf("%s\r          > Download... <");
    
    return 0;
}

/*
#include <stdio.h>
#include <unistd.h>

int main() {
    printf("> Download... <");
    fflush(stdout);
    sleep(1);

    printf("\r  > Download... <");
    fflush(stdout);
    sleep(1);

    printf("\r    > Download... <");
    fflush(stdout);
    sleep(1);

    printf("\r      > Download... <");
    fflush(stdout);
    sleep(1);

    printf("\r        > Download... <");
    fflush(stdout);
    sleep(1);

    printf("\r      < Download... >");
    fflush(stdout);
    sleep(1);

    printf("\r    < Download... >");
    fflush(stdout);
    sleep(1);

    printf("\r  < Download... >");
    fflush(stdout);
    sleep(1);

    printf("\r< Download... >\n");

    return 0;
}
*/