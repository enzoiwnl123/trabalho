#pragma once
#include <iostream>
#include <fstream>
#include <istream>
#include "atlstr.h"
#include <string>
#include <string.h>
#include <cstring>
#include <fileapi.h>
#include <time.h>
#include <vector>
#include <list>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
using namespace std;

class users
{
public:
	void cadastraUser(char nome[100], char data[12]);
	void deletaUser(int id);
	void retornaUser(int id);
	void editaUser(int id, char nome[100], char data[12]);
};


class videos
{
public:
	void cadastraVideo(int iduser, char type[5], char name[100], char diretor[50], char h[5], int temps, int ano, char gen[15]);
	void deletaVideo(int id);
	void retornaVideos(int idv);
	void editaVideo(int iduser, int idvideo, char t[5], char n[100], char d[50], char h[5], int ts, int a, char g[15]);
};
