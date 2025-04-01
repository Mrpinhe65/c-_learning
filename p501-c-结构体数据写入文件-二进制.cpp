/*************************************************************************
    > File Name: p501-c-结构体数据写入文件-二进制.cpp
    > 作者: 品赫先生
    > Mail: huangpinhe65@gmail.com 
    > Created Time: 2024年10月12日 星期六 15时50分06秒
 ************************************************************************/
#include<stdio.h>

/*
size_t 无符号整数	
size_t fwrite(void* buffer, size_t size, int count, FILE* fp);
size_t fread(void* buffer, size_t size, int count, FILE* fp);
*/

struct MM
{
	char name[20];
	int age;
	int num;
};

void saveFile(const char* fileName)
{
	struct MM temp[3] = {"hwd", 59, 1001, "lxl", 29, 1002, "hlb", 19, 1003};
	FILE* fp = fopen(fileName, "wb");
	//分次写入
	for(int i = 0; i < 3; i++)
	{
		fwrite(&temp[i], sizeof(struct MM), 1 , fp);
	}
	//一次写
	//fwrite(temp, sizeof(struct MM), 3, fp);
	
	fclose(fp);
}

void readFile(const char* fileName)
{
	struct MM readData[3];
	FILE* fp = fopen(fileName, "rd");
	if(fp == nullptr)
	{
		printf("File open error\n");
		return;
	}
	fread(readData, sizeof(struct MM), 3, fp);
	fclose(fp);

	for(int i = 0; i < 3; i++)
	{
		printf("%s\t%d\t%d\n", readData[i].name, readData[i].age, readData[i].num);
	}

}

int main()
{
	saveFile("binary.data");
	readFile("binary.data");
	return 0;
}
