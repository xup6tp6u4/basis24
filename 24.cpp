#include <stdio.h>
#include <stdlib.h>
struct course
{
	char name[10];  
	int cal;
	int com;
	int prog;
} p;
int main(void)
{
	int i;
    FILE *pFile;
	printf("Ū�����e���G\n");
	pFile=fopen("couse.txt", "r");
    if (pFile==NULL)
    {

        printf("�ɮ׶}�ҥ���!!\n");
        exit(1);

	}   
    else
    {
		for(i=0;i<7;i++){
		fscanf(pFile,"%[^,],%d,%d,%d", p.name, &p.cal, &p.com, &p.prog);
		printf("%s\t %d\t %d\t %d", p.name, p.cal, p.com, p.prog); 
		}    
	}
	printf("\n");
    fclose(pFile);
    system("pause");
    return 0;
}
