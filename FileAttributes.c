#include<stdio.h>
#include<sys/stat.h>
int main(int argc,char** argv){
        struct stat statbuf;
        if(stat("argv[1]",&statbuf)==-1){
                printf("Error Occured\n");
                return 0;
        }
        printf("Id Of Device on which file resides=%lu\n",statbuf.st_dev);
        printf("Inode Of File=%lu\n",statbuf.st_ino);
        printf("File Type & Permission=%u\n",statbuf.st_mode);
        printf("Number of Hard Links To File=%lu\n",statbuf.st_nlink);
        printf("User id of File Owner=%u\n",statbuf.st_uid);
        printf("Gid=%u\n",statbuf.st_gid);
        printf("Id for device Special File=%lu\n",statbuf.st_rdev);
        printf("Total File Size=%lu\n",statbuf.st_size);
        printf("Optional Block Size For I/O=%lu\n",statbuf.st_blksize);
        printf("Number OF blocks Allocated=%lu\n",statbuf.st_blocks);
	printf("Time of Last File Accessed=%lu\n",statbuf.st_atime);
	printf("Time of last File Modification=%lu\n",statbuf.st_mtime);
	printf("Time of Last status change=%lu\n",statbuf.st_ctime);
        return 0;
}
