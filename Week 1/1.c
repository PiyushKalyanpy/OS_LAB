#include <stdio.h>
#include <unistd.h>

int main()
{
    fork();
    printf("Hello, World! From Process %d\n",getpid());
}