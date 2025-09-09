#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

#define BUFFER_SIZE 1024

int main()
{
    int fd = 0, iRet = 0;
    char Fname[20];
    char Buffer[BUFFER_SIZE];

    printf("Enter the file name to write data: ");
    scanf("%s", Fname);

    
    fd = open(Fname, O_WRONLY | O_APPEND);
    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File successfully opened with fd : %d\n", fd);

       
        printf("Enter the data you want to write: ");
        getchar();
        fgets(Buffer, BUFFER_SIZE, stdin);

        iRet = write(fd, Buffer, strlen(Buffer));
        if(iRet == -1)
        {
            printf("Unable to write to file\n");
        }
        else
        {
            printf("%d bytes successfully written to the file\n", iRet);
        }

        close(fd);
    }

    return 0;
}
