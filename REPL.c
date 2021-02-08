/* First off, a basic repl. It does nothing, but echoes 'Hello World" back to the screen */

#include <stdio.h>

int main() {

puts("The Apeiron Programming Language. An initiative of Vinod Mathew Sebastian\n");

while(1){

printf("Apeiron>>> ");
char inp[255];
scanf("%s", inp);
printf("%s\n", inp);

}

return 0;

}