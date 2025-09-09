#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
    int fd = 0, iRet = 0;
    char Fname[20] = {'\0'};
    char Buffer[50];

    printf("Enter the file name that you want to read :");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }
    else
    {
        printf("File is Succesfully open with Fd : %d\n",fd);

        while((iRet = read(fd,Buffer,10)) != 0)
        {
            write(1,Buffer,iRet);
            memset(Buffer,'\0',sizeof(Buffer));
        }

        close(fd);
    }

    return 0;
}