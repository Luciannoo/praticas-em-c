// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main(){
//     int escolhaJogador, escolhaComputador;
//     srand(time(0));

//     printf("***Jogo de Jokkenpô***\n");
//     printf("Escolha uma opção:\n");
//     printf("1. Pedra\n");
//     printf("2. Papel\n");
//     printf("3. Tesoura\n");
//     printf("Escolha: ");
//     scanf("%d", &escolhaJogador);

//     escolhaComputador = rand() % 3 + 1;

//     switch (escolhaJogador){
//     case 1:
//         printf("Jogador: Pedra -");
//     break;
//     case 2:
//         printf("Jogador: Papel -");
//     break;
//     case 3:
//         printf("Jogador: Tesoura -");
//     break;
//     default:
//         printf("Escolha inválida");
//     break;
//     }

//     switch (escolhaComputador){
//     case 1:
//         printf("Comutador: Pedra -");
//     break;
//     case 2:
//         printf("Comutador: Papel -");
//     break;
//     case 3:
//         printf("Comutador: Tesoura -");
//     break;
//     default:
//         printf("inválido!");
//     break;
//     }

//     if (escolhaComputador == escolhaJogador){
//         printf("### Jogo empatou! ###");
//     } else if(escolhaJogador == 1 ) (escolhaComputador == 3) || (escolhaJogador == 2) && (escolhaComputador == 1) (escolhaJogador == 3) && (escolhaComputador == 2){
//         printf("### Parabéns, você ganhou! ###");
//         } else {
//             printf("### Você perdeu! ###");
//         }
// }