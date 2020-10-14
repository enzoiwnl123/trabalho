#include "usuarios.h"


void users::cadastraUser(char nome[100], char data[12])
{

	FILE* f;
	fopen_s(&f, "users.txt", "r+");
	char text[120];
	char* ret;
	int i = 0;
	while (!feof(f))
	{
		ret = fgets(text, 100, f);
		i++;
	}
	if (feof(f))
	{
		printf_s("Usuario %d cadastrado!", i);
		fprintf_s(f, "%d", i);
		fputs(":", f);
		fputs(nome, f);
		fputs(":", f);
		fputs(data, f);
		fputs("\n", f);
	}
	fclose(f);
};

void users::deletaUser(int id)
{
#define NULO '\0'
	_Post_ _Notnull_ FILE* r;
	_Post_ _Notnull_ FILE* w;
	fopen_s(&r, "users.txt", "r");
	fopen_s(&w, "newusers.txt", "r+");
	int line = 1;
	char text[100];
	while (!feof(r))
	{
		memset(text, NULO, 100);
		fgets(text, 100, r);
		if (id == line)
		{
			fputc('\n', w);
			line = line + 1;
			continue;
		}
		line = line + 1;
		fputs(text, w);
	}
	_fcloseall();
}

void users::retornaUser(int id)
{
	FILE* user;
	char text[100];
	char* ret;
	int i = 0;
	fopen_s(&user, "newusers.txt", "r");
	while (!feof(user))
	{
		i++;
		ret = fgets(text, 100, user);
		if (i == id)
		{
			printf("Usuario %d : %s", i, text);
			continue;
		}
	}
	fclose(user);
}

void users::editaUser(int id, char nome[100], char data[12])
{
	cadastraUser(nome, data);
	deletaUser(id);
	FILE* f;
	fopen_s(&f, "users.txt", "r+");
	char text[100];
	char* ret;
	int i = 0;
	while (!feof(f))
	{
		ret = fgets(text, 100, f);
		i++;
	}
	if (feof(f))
	{
		printf_s("Usuario %d : %s", i, text);
	}
}

void videos::cadastraVideo(int iduser, char type[5], char name[100], char diretor[50], char h[5], int temps, int ano, char gen[15])
{
	FILE* f;
	fopen_s(&f, "videos.txt", "r+");
	int i = 0;
	char text[250];
	char* ret;
	while (!feof(f))
	{
		ret = fgets(text, 250, f);
		i++;
	}
	if (feof(f))
	{
		printf("Video %d cadastrado!", i);
		fprintf_s(f, "%d", i);
		fputs(" / ", f);
		fputs(type, f);
		fputs(" / ", f);
		fputs(name, f);
		fputs(" / ", f);
		fputs(diretor, f);
		fputs(" / ", f);
		fputs(h, f);
		fputs(" / ", f);
		fprintf_s(f, "%d", temps);
		fputs(" / ", f);
		fprintf_s(f, "%d", ano);
		fputs(" / ", f);
		fputs(gen, f);
		fprintf_s(f, "- CADASTRADO PELO USUARIO %d", iduser);
		fputs("\n", f);
	}
	
	
	fclose(f);
} 

void videos::deletaVideo(int id)
{
#define NULO '\0'
	_Post_ _Notnull_ FILE* r;
	_Post_ _Notnull_ FILE* w;
	fopen_s(&r, "videos.txt", "r");
	fopen_s(&w, "newvs.txt", "r+");
	int line = 1;
	char text[200];
	while (!feof(r))
	{
		memset(text, NULO, 100);
		fgets(text, 100, r);
		if (id == line)
		{
			fputc('\n', w);
			line = line + 1;
			continue;
		}
		line = line + 1;
		fputs(text, w);
	}
	_fcloseall();
} 

void videos::retornaVideos(int idv)
{
	FILE* txt;
	fopen_s(&txt, "newvs.txt", "r");
	char text[250];
	char* ret;
	int i = 1;
	while (!feof(txt))
	{
		ret = fgets(text, 250, txt);
		i++;
		if (i == idv)
		{
			printf("Video %d : %s", i, text);
			continue;
		}

	}
	fclose(txt);
}

void videos::editaVideo(int iduser, int idvideo, char t[5], char n[100], char d[50], char h[5], int ts, int a, char g[15])
{
	
	deletaVideo(idvideo);
	cadastraVideo(iduser, t, n, d, h, ts, a, g);
	FILE* f;
	fopen_s(&f, "videos.txt", "r+");
	char text[250];
	char* ret;
	int i = 1;
	while (!feof(f))
	{
		ret = fgets(text, 250, f);
		i++;
	}
	if (feof(f))
	{
		printf_s("Video %d : %s", i, text);
	}
}