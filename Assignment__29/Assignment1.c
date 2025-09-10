#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>      // for open()
#include <unistd.h>     // for read(), close()

int CountCapital(char Fname[])
{
    int fd = 0, iRet = 0, iCnt = 0;
    char Buffer[1024];
    int i = 0;

    // Open file in read-only mode
    fd = open(Fname, O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    // Read the file in chunks
    while((iRet = read(fd, Buffer, sizeof(Buffer))) > 0)
    {
        for(i = 0; i < iRet; i++)
        {
            if((Buffer[i] >= 'A') && (Buffer[i] <= 'Z'))
            {
                iCnt++;
            }
        }
    }

    close(fd);
    return iCnt;
}

int main()
{
    char FileName[30];
    int iRet = 0;

    printf("Enter the File Name :");
    scanf("%s",FileName);

    iRet = CountCapital(FileName);

    printf("Number of Capital Charecters are :%d\n",iRet);

    return 0;
}