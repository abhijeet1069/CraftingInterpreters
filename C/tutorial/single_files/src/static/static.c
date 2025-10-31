/**
By default, variables are local to the scope in which they are defined. Variables can be declared as static to increase 
their scope up to file containing them. As a result, these variables can be accessed anywhere inside a file.

OP - 1 1

#include<stdio.h>

int runner(){
    int count = 0;
    count++;
    return count;
}

int main(){
    printf("%d ",runner());
    printf("%d \n",runner());
    return 0;
}

*/

// OP - 1 2
#include<stdio.h>

int runner(){
    static int count = 0;
    count++;
    return count;
}

int main(){
    printf("%d ",runner());
    printf("%d \n",runner());
    return 0;
}