#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>



int main(int argc, char* argv[])

{
    char motSecret[] = "DEFAUT";
    printf("%s 1 ", motSecret);
    selectionMot(&motSecret);
    printf("%s" , motSecret);
    menu();


}
