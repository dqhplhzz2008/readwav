#include<stdio.h>
#include<stdlib.h>
#include "WAVE.h"
#include "hmath.h"
//�������ͷ�ļ�

int main()
{
	FILE* f1 = NULL; FILE* f2 = NULL;
	WAVE_t w = initWAVE_t();//�����ʼ���ľ���
	f1 = fopen("test.wav", "rb");//��סһ���ǿɶ�������ģʽ
	loadWAVEFile(&w, f1);
	fclose(f1);//��ȡ��ϣ��ر�

	//д�������ļ�
	f2 = fopen("matrix1.dat", "w");
	WriteIntMat(f2, w.DATA.data);
	fclose(f2);
	free_WAVE(&w);
	system("pause");
	return 0;
}