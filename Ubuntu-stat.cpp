#include<bits/stdc++.h>
#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
int main()

{

	struct stat sfile;
	stat("stat.c",&sfile);

	printf("user id %d \n",sfile.st_uid);
	printf("st_dev %lu \n",sfile.st_dev);
	printf("inode number %lu \n",sfile.st_ino);
	printf("st_nlink %lu \n",sfile.st_nlink);
	printf("st_size %lu \n",sfile.st_size);
	printf("permission %o \n",sfile.st_mode);
	printf("last edit time %lu \n",sfile.st_atim);


	return 0;
}
