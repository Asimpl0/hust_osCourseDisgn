#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>



int main(void)
{
    char data[50];
    char towrite[50];
    int fd = open("/dev/MyDev", O_RDWR);

	if(fd==-1)
	{
		printf("open device failed!\n");
	   return -1;
	}
    printf("open device successfully!\n");

      read(fd,data,sizeof(data));
    printf("the content read from dev is : %s\n",data);

    printf("input what you wan to write: \n");
    fgets(towrite,sizeof(towrite),stdin);
    write(fd,towrite,sizeof(towrite));

    read(fd,data,sizeof(data));
    printf("the content read from dev is : %s\n",data);
    
    return 0;
}
