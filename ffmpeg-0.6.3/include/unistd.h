#ifndef _UNISTD_H_
#define _UNISTD_H_
#include <windows.h> // Ӱ�� near ������ near�������ؼ��ֽ���, �Ƶ�config_w32_add.h��

static void usleep(int x)
{
	Sleep(x/1000);
}
#endif