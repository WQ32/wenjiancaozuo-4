#include <stdio.h>

//fwrite函数  - 二进制
//size_t fwrite(const void * buffer,size_t size,size_t count,FILE*stream)
 
struct S
{
	char name[10];
	int age;
	float score;
};
int main()
{
	//struct S s = { "张三",19,59.9 };
	struct S tmp = { 0 };
	/*FILE* pf = fopen("test.txt", "wb");*/
	FILE* pf = fopen("test.txt", "rb");
	if (pf == NULL)
	{
		return 0;
	}
	
	//写文件 - 以二进制形式写
	/*fwrite(&s, sizeof(struct S), 1, pf);*/
	
	//读文件 - 也以二进制的形式读
	fread(&tmp, sizeof(struct S), 1, pf);
	printf("%s  %d  %lf\n", tmp.name, tmp.age, tmp.score);
	
	fclose(pf);
	pf = NULL;
	return 0;
}