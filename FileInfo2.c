#include<stdio.h>
#include<sys/statvfs.h>
int main(int argc,char** argv){
        struct statvfs statbuf;
	char file[20];
	printf("Enter File Name with Path\n");
	scanf("%s",&file[0]);
	printf("%s\n",file);
        if(statvfs(file,&statbuf)==-1){
                printf("Error Occured\n");
                return 0;
        }
        printf("Block Size=%lu\n",statbuf.f_bsize);
        printf("Total number of blocks in File=%lu\n",statbuf.f_blocks);
        printf("Name Length of File Possible=%lu\n",statbuf.f_bfree);
        printf("Number of free blocks=%lu\n",statbuf.f_bavail);
         printf("Total Number Of i-nodes=%lu\n",statbuf.f_files);
         printf("Total Number Of free i-nodes==%lu\n",statbuf.f_ffree);
         printf("Number Of i-nodes available to unprivileged process==%lu\n",statbuf.f_favail);
         printf("File System ID=%lu\n",statbuf.f_fsid);
         printf("Mount Flags=%lu\n",statbuf.f_flag);
         printf("Maximum Length of filenames on This file System=%lu\n",statbuf.f_namemax);
        return 0;
}
