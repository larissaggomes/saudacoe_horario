#include<stdio.h>
#include<time.h>
int fusohorario(int h){
if(h>=6 && h<=12){
    printf("bom dia");
}
else if(h>=13 && h<=17){
    printf("boa tarde");
}
else if(h>=18 && h<=23){
    printf("boa noite");
}
return fusohorario;
}
int main(void){

char nome[20];
int hora,result;
printf("qual e seu nome?");
scanf("%s",&nome);
printf("que horas sao?");
scanf("%i",&hora);
result=fusohorario(hora);
}
