#include <fcntl.h>  // For creat()
#include <unistd.h> // For close()
#include <stdio.h>  // For perror() and printf()

int main()
{
    int fd = 0;

    fd = open(O_RDONLY,0777);

    if(fd == -1)
    {
        printf("Unbale to Create File\n");
    }
    else
    {
        printf("File Succesfully Created With FD : %d\n",fd);

    }

    return 0;
}