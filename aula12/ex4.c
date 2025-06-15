#include <stdio.h>
#include <string.h>

const char* classificaIMC(float peso, float altura){
    if ((peso / (altura * altura)) < 18.5){
        return "Abaixo do peso.";
    }
    if((peso / (altura * altura)) >= 18.5 && (peso / (altura * altura)) <= 24.9){
        return "Peso normal.";
    }
    if((peso / (altura * altura)) >= 25.0 && (peso / (altura * altura)) <= 29.9){
        return "Sobrepeso.";
    }
    if((peso / (altura * altura)) >= 30.0 && (peso / (altura * altura)) <= 34.9){
        return "Obesidade grau I.";
    }
    if((peso / (altura * altura)) >= 35.0 && (peso / (altura * altura)) <= 39.9){
        return "Obesidade grau II.";
    }
    if((peso / (altura * altura)) >= 40.0){
        return "Obesidade grau III.";
    }

}

int main(){
    float peso, altura;

    printf("Digite o seu peso em quilogramas: ");
    scanf("%f", &peso);
     
    printf("Digite a sua altura em metros: ");
    scanf("%f", &altura);

    const char* imc = classificaIMC(peso, altura);

    printf("Classificacao: %s", imc);
    
    return 0;
 }