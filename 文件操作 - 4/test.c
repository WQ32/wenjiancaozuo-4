#include <stdio.h>

//fwrite����  - ������
//size_t fwrite(const void * buffer,size_t size,size_t count,FILE*stream)
 
struct S
{
	char name[10];
	int age;
	float score;
};
int main()
{
	//struct S s = { "����",19,59.9 };
	struct S tmp = { 0 };
	/*FILE* pf = fopen("test.txt", "wb");*/
	FILE* pf = fopen("test.txt", "rb");
	if (pf == NULL)
	{
		return 0;
	}
	
	//д�ļ� - �Զ�������ʽд
	/*fwrite(&s, sizeof(struct S), 1, pf);*/
	
	//���ļ� - Ҳ�Զ����Ƶ���ʽ��
	fread(&tmp, sizeof(struct S), 1, pf);
	printf("%s  %d  %lf\n", tmp.name, tmp.age, tmp.score);
	
	fclose(pf);
	pf = NULL;
	return 0;
}