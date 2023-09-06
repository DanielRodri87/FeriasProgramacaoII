#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char key[20], user[20], keypad[20] = "admin", userpad[20] = "admin";
    int op;

    do
    {
        system("cls");
        printf("\n=======================================================\n");
        printf("\n========================= LOGIN =========================\n");
        printf("\n=======================================================\n");

        printf("\nDigite uma opção: \n1 - Cliente\n2 - Funcionário\n3 - Sair -> ");
        scanf("%d", &op);
        
        switch (op)
        {
        case 1:
            printf("\nDigite o usuário: ");
            scanf("%s", user);
            printf("\nDigite a senha: ");
            scanf("%s", key);
            if (strcmp(user, userpad) == 0 && strcmp(key, keypad) == 0)
            {
                printf("\nLogin efetuado com sucesso!\n");
                system("pause");
            }
            else
            {
                printf("\nUsuário ou senha incorretos!\n");
                system("pause");
            }
            break;
        case 2:
            printf("\nDigite o usuário: ");
            scanf("%s", user);
            printf("\nDigite a senha: ");
            scanf("%s", key);
            if (strcmp(user, userpad) == 0 && strcmp(key, keypad) == 0)
            {
                printf("\nLogin efetuado com sucesso!\n");
                system("pause");
            }
            else
            {
                printf("\nUsuário ou senha incorretos!\n");
                system("pause");
            }
            break;

        default:
            printf("\nOpção inválida!\n");
            system("pause");
            break;
        }
    

    } while (op!=3);
    return 0;
}