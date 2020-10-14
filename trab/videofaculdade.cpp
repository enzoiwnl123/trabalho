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

            printf("Bem vindo ao NICEFLIX id %d! Insira seu nome e sua data de nascimento:\n", id);
            scanf_s(" %[^\n]c", name, (unsigned)_countof(name));
            printf("Nome %s cadastrado!\n", sname);

            scanf_s(" %[^\n]c", data, (unsigned)_countof(data));
            printf("Nascimento %s cadastrado!\n", sdata);

            cadastro.cadastraUser(name, data);
            break;
        }


        case 2: // Consultar
        {
            users consulta;
            int id3;
            cout << "Informe o ID para consulta:\n";
            cin >> id3;
            consulta.retornaUser(id3);
            break;
        }

        case 3: //remover cadastro
        {
            users remove;
            int id2;
            cout << "Insira o id para remocao\n";
            cin >> id2;
            remove.deletaUser(id2);
            printf("ID removido!\n", id2);
            break;
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
            break;
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
            char myid, type[10], name[100], dir[50], hh[5], temps[3], lanc, gen[15];
            cout << "Insira seu ID de usuário, o tipo(filme ou serie), o nome, o nome do diretor, a duração hh:mm(00:00 para serie), o n de temporadas, o ano de lançamento e o genero de seu cadastro:\n";
            cin >> myid;
            cin >> type;
            cin >> name;
            cin >> dir;
            cin >> hh;
            cin >> temps;
            cin >> lanc;
            cin >> gen;
            add.cadastraVideo(myid, type, name, dir, hh, temps, lanc, gen);
            break;
        }


        case 2: // Consultar
        {
            videos view;
            int id3;
            cout << "Informe o ID para consulta:\n";
            cin >> id3;
            view.retornaVideos(id3);
            break;
        }

        case 3: //remover cadastro
        {
            videos rm;
            int id2;
            cout << "Insira o id para remocao\n";
            cin >> id2;
            rm.deletaVideo(id2);
            printf("ID removido!\n", id2);
            break;
        }

        case 4: //Editar cadastro
        {
            videos ed;
            char type[10], nome[100], diret[50], hhmm[5], temps[3], genero[15];
            int id, idu, ano;
            cout << "Insira o ID que vc deseja editar:\n";
            cin >> id;
            cout << "Insira os novos dados do cadastro(seu id, tipo, nome, diretor, duracao, temporadas, ano e genero\n";
            cin >> idu;
            cin >> type;
            cin >> nome;
            cin >> diret;
            cin >> hhmm;
            cin >> temps;
            cin >> ano;
            cin >> genero;
            ed.editaVideo(idu, id, type, nome, diret, hhmm, temps, ano, genero);
            break;
        }


        }
    }
    return 0;
}