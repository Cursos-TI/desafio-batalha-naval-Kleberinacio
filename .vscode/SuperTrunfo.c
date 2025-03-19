#include <stdio.h>

// Desafio Super Trunfo - Cartas Países

int main(){

  char nome1[20], nome2[20];
  unsigned long int populacao1, populacao2;
  int turismo1, turismo2;
  float area1, area2;
  float pib1, pib2;
  float densidade1, densidade2, percapita1, percapita2;
  float superpoder1, superpoder2;
  int escolha1Jogador, escolha2Jogador;
  float resultado1, resultado2, somaAtributos1, somaAtributos2;
 
  //Código fonte Carta1 
  
  printf("Carta1:\n");
  printf("Nome do País: \n");
  scanf("%s", &nome1);
  printf("População: \n");
  scanf("%lu", &populacao1);  
  printf("Área: \n");
  scanf("%f", &area1);
  printf("PIB: \n");
  scanf("%f", &pib1);
  printf("Número de Pontos Turísticos: \n");
  scanf("%d", &turismo1);
  printf("\n");

  //Formula Densidade Populacional e PIB per Capita Carta 1

  densidade1 = populacao1 / area1;

  percapita1 = pib1 / populacao1;

  //Formula soma dos atributos numéricos Carta 1

  superpoder1 = (float) populacao1 + area1 + pib1 + turismo1 + 1 / densidade1 + percapita1;

  //Código fonte Carta2
  
  printf("Carta2:\n");
  printf("Nome do País: \n");
  scanf("%s", &nome2);
  printf("População: \n");
  scanf("%lu", &populacao2);  
  printf("Área: \n");
  scanf("%f", &area2);
  printf("PIB: \n");
  scanf("%f", &pib2);
  printf("Número de Pontos Turísticos: \n");
  scanf("%d", &turismo2);
  printf("\n");

  //Formula Densidade Populacional e PIB per Capita Carta 2

  densidade2 = populacao2 / area2;

  percapita2 = pib2 / populacao2;

  //Formula soma dos atributos numéricos Carta 2

  superpoder2 = (float) populacao2 + area2 + pib2 + turismo2 + 1 / densidade2 + percapita2;

  //Print Carta 1

  printf("Carta1\n");
  printf("Nome do País: %s\n", nome1);
  printf("População: %lu\n", populacao1);
  printf("Área: %.2fkm²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", turismo1);
  /*printf("Densidade Populacional: %.2f\n", densidade1);
  printf("PIB per Capita: %.2f\n", percapita1);
  printf("Super Poder: %.2f\n", superpoder1);*/
  printf("\n");
  
  //Print Carta 2

  printf("Carta2\n");
  printf("Nome do País: %s\n", nome2);
  printf("População: %lu\n", populacao2);
  printf("Área: %.2fkm²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", turismo2);
  /*printf("Densidade Populacional: %.2f\n", densidade2);
  printf("PIB per Capita: %.2f\n", percapita2);
  printf("Super Poder: %.2f\n", superpoder2);*/
  printf("\n");
  
  //Primeiro menu Opções de Ataque 

  printf("*** Jogo Super Trunfo ***\n");
  printf("Escolha o primeiro atributo da Carta 1:\n");
  printf("1. População\n");
  printf("2. Área\n");
  printf("3. PIB\n");
  printf("4. Número de Pontos Turísticos\n");
  /*printf("5. Densidade populacional\n");
  printf("6. PIB per Capita\n");
  printf("7. Super Poder\n");*/
  printf("Escolha: ");
  scanf("%d", &escolha1Jogador);
  printf("\n");

  switch (escolha1Jogador)
  {
      //Ataque População
      case 1:
      printf("Escolheu População\n");
      printf("\n");
      resultado1 = populacao1 > populacao2 ? 1 : 0;
      break;

      //Ataque Área
      case 2:
      printf("Escolheu Área\n");
      printf("\n");
      resultado1 = area1 > area2 ? 1 : 0;
      break;

      //Ataque PIB
      case 3:
      printf("Escolheu PIB\n");
      printf("\n");
      resultado1 = pib1 > pib2 ? 1 : 0;
      break;

      //Ataque Número de Pontos Turísticos
      case 4:
      printf("Escolheu Número de Pontos Turísticos\n");
      printf("\n");
      resultado1 = turismo1 > turismo2 ? 1 : 0;
      break;

      //Ataque Densidade Populacional
      /*case 5:
      printf("Escolheu Densidade Populacional\n");
      printf("\n");
      resultado1 = densidade1 < densidade2 ? 1 : 0;
      break;

      //Ataque PIB per Capita
      case 6:
      printf("Escolheu PIB per Capita\n");
      printf("\n");
      resultado1 = percapita1 > percapita2 ? 1 : 0;
      break;

      //Ataque Super Poder
      case 7:
      printf("Escolheu Super Poder\n");
      printf("\n");
      resultado1 = superpoder1 > superpoder2 ? 1 : 0;
      break;*/

      //Opção Inválida
      default:
      printf("Opção inválida\n");
      break;
      printf("\n");
  }

  //Segundo menu Opções de Ataque

  printf("*** Jogo Super Trunfo ***\n");
  printf("Escolha o segundo atributo da Carta 1:\n");
  printf("1. População\n");
  printf("2. Área\n");
  printf("3. PIB\n");
  printf("4. Número de Pontos Turísticos\n");
  /*printf("5. Densidade populacional\n");
  printf("6. PIB per Capita\n");
  printf("7. Super Poder\n");*/
  printf("Escolha: ");
  scanf("%d", &escolha2Jogador);
  printf("\n");

  if (escolha1Jogador == escolha2Jogador) {
    printf("Você escolheu o mesmo atributo!");
  } else {
      
  switch (escolha2Jogador)
  {
      //Ataque População
      case 1:
      printf("Escolheu População\n");
      printf("\n");
      resultado2 = populacao1 > populacao2 ? 1 : 0;
      break;

      //Ataque Área
      case 2:
      printf("Escolheu Área\n");
      printf("\n");
      resultado2 = area1 > area2 ? 1 : 0;
      break;

      //Ataque PIB
      case 3:
      printf("Escolheu PIB\n");
      printf("\n");
      resultado2 = pib1 > pib2 ? 1 : 0;
      break;

      //Ataque Número de Pontos Turísticos
      case 4:
      printf("Escolheu Número de Pontos Turísticos\n");
      printf("\n");
      resultado2 = turismo1 > turismo2 ? 1 : 0;
      break;

      //Ataque Densidade Populacional
      /*case 5:
      printf("Escolheu Densidade Populacional\n");
      printf("\n");
      resultado2 = densidade1 < densidade2 ? 1 : 0;
      break;

      //Ataque PIB per Capita
      case 6:
      printf("Escolheu PIB per Capita\n");
      printf("\n");
      resultado2 = percapita1 > percapita2 ? 1 : 0;
      break;

      //Ataque Super Poder
      case 7:
      printf("Escolheu Super Poder\n");
      printf("\n");
      resultado2 = superpoder1 > superpoder2 ? 1 : 0;
      break;*/

      //Opção Inválida
      default:
      printf("Opção inválida\n");
      break;
      printf("\n");
    
    }
    //Resultado Comparação das Cartas
    printf("Resultado Comparação das Cartas\n");
  if (resultado1 && resultado2) 
  {
    printf("Carta 1 venceu!\n");
  } else if (resultado1 != resultado2) 
  {
    printf("Empatou!\n");
  } else {
    printf("Carta 2 venceu!\n");
  }
}
printf("\n");

    //Resultado Soma e Comparação das Cartas
    printf("Resultado Soma dos Atributos e Comparação das Cartas\n");

  if ((escolha1Jogador == 1 && escolha2Jogador == 2) || (escolha1Jogador == 2 && escolha2Jogador == 1)){
    somaAtributos1 = (populacao1 + area1);
    somaAtributos2 = (populacao2 + area2);
     printf("A soma dos atributos Carta 1 é: %.2f\n", somaAtributos1);
     printf("A soma dos atributos Carta 2 é: %.2f\n", somaAtributos2);
     if (somaAtributos1 > somaAtributos2)
     {
        printf("Carta 1 venceu!\n");
     } else if(somaAtributos1 == somaAtributos2){
        printf("Empatou!\n");
     } else{
        printf("Carta 2 venceu!\n");
     }
     
  } else if ((escolha1Jogador == 1 && escolha2Jogador == 3) || (escolha1Jogador == 3 && escolha2Jogador == 1)){
    somaAtributos1 = populacao1 + pib1;
    somaAtributos2 = populacao2 + pib2;
    printf("A soma dos atributos Carta 1 é: %.2f\n", somaAtributos1);
    printf("A soma dos atributos Carta 2 é: %.2f\n", somaAtributos2);
    if (somaAtributos1 > somaAtributos2)
    {
       printf("Carta 1 venceu!\n");
    } else if(somaAtributos1 == somaAtributos2){
       printf("Empatou!\n");
    } else{
       printf("Carta 2 venceu!\n");
    }
  } else if((escolha1Jogador == 2 && escolha2Jogador == 3) || (escolha1Jogador == 3 && escolha2Jogador == 2)){
    somaAtributos1 = area1 + pib1;
    somaAtributos2 = area2 + pib2;
    printf("A soma dos atributos Carta 1 é: %.2f\n", somaAtributos1);
    printf("A soma dos atributos Carta 2 é: %.2f\n", somaAtributos2);
    if (somaAtributos1 > somaAtributos2)
    {
       printf("Carta 1 venceu!\n");
    } else if(somaAtributos1 == somaAtributos2){
       printf("Empatou!\n");
    } else{
       printf("Carta 2 venceu!\n");
    }
  } else if((escolha1Jogador == 1 && escolha2Jogador == 4) || (escolha1Jogador == 4 && escolha2Jogador == 1)){
    somaAtributos1 = populacao1 + turismo1;
    somaAtributos2 = populacao2 + turismo2;
    printf("A soma dos atributos Carta 1 é: %.2f\n", somaAtributos1);
    printf("A soma dos atributos Carta 2 é: %.2f\n", somaAtributos2);
    if (somaAtributos1 > somaAtributos2)
    {
       printf("Carta 1 venceu!\n");
    } else if(somaAtributos1 == somaAtributos2){
       printf("Empatou!\n");
    } else{
       printf("Carta 2 venceu!\n");
    }
} else if((escolha1Jogador == 2 && escolha2Jogador == 4) || (escolha1Jogador == 4 && escolha2Jogador == 2)){
    somaAtributos1 = area1 + turismo1;
    somaAtributos2 = area2 + turismo2;
    printf("A soma dos atributos Carta 1 é: %.2f\n", somaAtributos1);
    printf("A soma dos atributos Carta 2 é: %.2f\n", somaAtributos2);
    if (somaAtributos1 > somaAtributos2)
    {
       printf("Carta 1 venceu!\n");
    } else if(somaAtributos1 == somaAtributos2){
       printf("Empatou!\n");
    } else{
       printf("Carta 2 venceu!\n");
    }
} else if((escolha1Jogador == 4 && escolha2Jogador == 3) || (escolha1Jogador == 3 && escolha2Jogador == 4)){
    somaAtributos1 = turismo1 + pib1;
    somaAtributos2 = turismo2 + pib2;
    printf("A soma dos atributos Carta 1 é: %.2f\n", somaAtributos1);
    printf("A soma dos atributos Carta 2 é: %.2f\n", somaAtributos2);
    if (somaAtributos1 > somaAtributos2)
    {
       printf("Carta 1 venceu!\n");
    } else if(somaAtributos1 == somaAtributos2){
       printf("Empatou!\n");
    } else{
       printf("Carta 2 venceu!\n");
    }
}

  return 0;
  
}