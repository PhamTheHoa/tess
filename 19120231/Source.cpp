#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>
#include <conio.h>
#include<string.h>  
#include<iostream>
#include<fstream>
#include<sstream>
#include <list>

using namespace std;
int main() {
	int M, N;
	cout << "nhap M";
	cin >> M ;
	FILE* f;
	f = fopen("number.txt", "wb");
	fwrite(&M,sizeof(M),1,f);
	fseek(f, 1000, SEEK_CUR);
	for (int i = 1;i < M;i++) {
		float in = -2021 + i;
		fwrite(&in,sizeof(M),1,f);
	}
	fclose(f);

}