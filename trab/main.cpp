#include "usuarios.h"

int people() {

    system("color 3f");

    int menu = 0;
    printf("\t\t\t\t\t ---------NICEFLIX--------\n\n");
    printf("\t\t\t\t\t 1 - Inserir cadastro\n");
    printf("\t\t\t\t\t 2 - consultar cadastro\n");
    printf("\t\t\t\t\t 3 - remover cadastro\n");
    printf("\t\t\t\t\t 4 - alterar cadastro\n");
    printf("\t\t\t\t\t 5 - sair do programa\n\n");
    printf("\t\t\t\t\t---escolha a opcao desejada---\n");
    scanf_s("\t\t\t\t\t %d", &menu);

    //menu principal
    while (menu != 5) {

        switch (menu) {
        case 1: //Cadastrar
        {
            users cadastro;
            int id = 0;
            char name[100];
            string* sname = (string*)name;
            char data[12];
            string* sdata = (string*)data;

            printf("Bem vindo ao NICEFLIX! Insira seu nome e sua data de nascimento:\n");
            scanf_s(" %[^\n]c", name, (unsigned)_countof(name));
            printf("Nome %s cadastrado!\n", sname);

            scanf_s(" %[^\n]c", data, (unsigned)_countof(data));
            printf("Nascimento %s cadastrado!\n", sdata);

            cadastro.cadastraUser(name, data);
            people();
        }


        case 2: // Consultar
        {
            users consulta;
            int id3;
            cout << "Informe o ID para consulta:\n";
            cin >> id3;
            consulta.retornaUser(id3);
            people();        }

        case 3: //remover cadastro
        {
            users remove;
            int id2;
            cout << "Insira o id para remocao\n";
            cin >> id2;
            remove.deletaUser(id2);
            printf("ID removido!\n", id2);
            people();
        }

        case 4: //Editar cadastro
        {
            users edit;
            char nome[100];
            char data[12];
            int id;
            cout << "Insira o ID que vc deseja editar:\n";
            cin >> id;
            cout << "Insira seu novo nome:\n";
            cin >> nome;
            cout << "Insira a data de nascimento:\n";
            cin >> data;
            edit.editaUser(id, nome, data);
            people();
        }

        case 5:
        {
            exit(0);
        }

        }
    }
    return 0;
};

int vs()
{
    system("color 3f");

    int menu = 0;
    printf("\t\t\t\t\t ---------NICEFLIX--------\n\n");
    printf("\t\t\t\t\t 1 - Inserir cadastro\n");
    printf("\t\t\t\t\t 2 - consultar cadastro\n");
    printf("\t\t\t\t\t 3 - remover cadastro\n");
    printf("\t\t\t\t\t 4 - alterar cadastro\n");
    printf("\t\t\t\t\t 5 - sair do programa\n\n");
    printf("\t\t\t\t\t---escolha a opcao desejada---\n");
    scanf_s("\t\t\t\t\t %d", &menu);

    //menu principal
    while (menu != 5) {

        switch (menu) {
        case 1: //Cadastrar
        {
            videos add;
            char type[5];
            char name[100], diretor[50], h[5], gen[15];
            int temps = 0, ano = 0, myid = 0;
            string* sname = (string*)name;
            string* sdata = (string*)diretor;
            cout << "Insira seu ID:\n";
            cin >> myid;
            fflush(stdin);

            printf("Insira o tipo(filme/serie), o titulo, o diretor, a duracao(hh:mm), o n de temporadas, o ano de lancamento e o genero de seu cadastro:\n");
            cin >> type;
            printf("Tipo %s cadastrado\n", type);
            fflush(stdin);
            
            scanf_s(" %[^\n]c", name, (unsigned)_countof(name));
            printf("Nome %s cadastrado!\n", sname);

            scanf_s(" %[^\n]c", diretor, (unsigned)_countof(diretor));
            printf("Diretor %s cadastrado!\n", sdata);
            fflush(stdin);

            cin >> h;
            printf("Duracao %s cadastrada!\n", h);

            scanf_s(" %d", &temps);
            printf("Temporadas cadastradas!\n");

            scanf_s(" %d", &ano);
            printf("Ano cadastrado!\n");

            scanf_s(" %[^\n]c", gen, (unsigned)_countof(gen));
            printf("Genero cadastrado!\n");

            add.cadastraVideo(myid, type, name, diretor, h, temps, ano, gen);
            vs();
        }


        case 2: // Consultar
        {
            videos view;
            int id3;
            cout << "Informe o ID para consulta:\n";
            cin >> id3;
            view.retornaVideos(id3);
            vs();        
        }

        case 3: //remover cadastro
        {
            videos rm;
            int id2;
            cout << "Insira o id para remocao\n";
            cin >> id2;
            rm.deletaVideo(id2);
            printf("ID removido!\n", id2);
            vs();
        }

        case 4: //Editar cadastro
        {
            videos ed;
            char fs[5];
            char nome[100], diretor[50], h[5], gen[15];
            int temps = 0, ano = 0, iduser = 0, idvideo = 0;
            string* sname = (string*)nome;
            string* sdata = (string*)diretor;
            cout << "Insira o ID do video que deseja editar:\n";
            cin >> idvideo;
            cout << "Insira seu ID:\n";
            cin >> iduser;
            fflush(stdin);

            printf("Insira o tipo(filme/serie), o titulo, o diretor, a duracao(hh:mm), o n de temporadas, o ano de lancamento e o genero de seu cadastro:\n");
            cin >> fs;
            printf("Tipo %s cadastrado\n", fs);
            fflush(stdin);

            scanf_s(" %[^\n]c", nome, (unsigned)_countof(nome));
            printf("Nome %s cadastrado!\n", sname);

            scanf_s(" %[^\n]c", diretor, (unsigned)_countof(diretor));
            printf("Diretor %s cadastrado!\n", sdata);
            fflush(stdin);

            cin >> h;
            printf("Duracao %s cadastrada!\n", h);

            scanf_s(" %d", &temps);
            printf("Temporadas cadastradas!\n");

            scanf_s(" %d", &ano);
            printf("Ano cadastrado!\n");

            scanf_s(" %[^\n]c", gen, (unsigned)_countof(gen));
            printf("Genero cadastrado!\n");
            ed.editaVideo(iduser, idvideo, fs, nome, diretor, h, temps, ano, gen);
            vs();
            
        }


        }
    }
    return 0;
};

int main()
{
    system("color 3f");
    int menu = 0;
    cout << "Insira a opcao desejada:\n";
    cout << "1 - Menu de usuarios\n2- Menu de videos\n3- Sair do programa\n";
    cin >> menu;
    while (menu != 3)
    {
        switch (menu)
        {
        case 1:
        {
            people();
        }
        case 2:
        {
            vs();
        }
        }
    }
    return 0;
};

