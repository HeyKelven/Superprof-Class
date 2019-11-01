int main (){
    char cidade;
    char nota = '6';

    cidade = 'a';
    

    switch(cidade){
        case 'a':
        case 'A':
            printf("Alagoas\n");
            printf("Amapá\n");
            printf("Amazonas\n");
            break;
        case 'B':
        case 'b':
            printf("Belo Horinzonte\n");
            break;
        case 'S':
        case 's':
            printf("São Paulo\n");
            break;
        default:
            printf("Não existe!\n");
    }

    
    // switch(nota){
    //     case '0':    
    //     case '1':
    //     case '2':
    //     case '3':
    //     case '4':
    //         printf("Reprovado!\n");
    //         break;
        
    //     case '5':
    //     case '6':
    //     case '7':
    //     case '8':
    //     case '9':
    //     case '10':
    //         printf("Aprovado!\n");
    //         break;
    // }

}