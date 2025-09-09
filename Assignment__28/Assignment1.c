#include <fcntl.h>  // For creat()
#include <unistd.h> // For close()
#include <stdio.h>  // For perror() and printf()

int main()
{
    int fd = 0;

    fd = creat("Demo.txt",0777);

    if(fd == -1)
    {
        printf("Unbale to Create File\n");
    }
    else
    {
        printf("File Succesfully Created With FD : %d\n",fd);

        colse(fd);  
    }

    return 0;
}