#include<stdio.h>
#include<stdlib.h>
#include "WAVE.h"
#include "hmath.h"
//载入各种头文件

int main()
{
	FILE* f1 = NULL; FILE* f2 = NULL;
	WAVE_t w = initWAVE_t();//载入初始化的矩阵
	f1 = fopen("test.wav", "rb");//记住一定是可读二进制模式
	loadWAVEFile(&w, f1);
	fclose(f1);//读取完毕，关闭

	//写入语音文件
	f2 = fopen("matrix1.dat", "w");
	WriteIntMat(f2, w.DATA.data);
	fclose(f2);
	free_WAVE(&w);
	system("pause");
	return 0;
}