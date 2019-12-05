main(){
    int a = 1, b= 2;
    int *p;

    p = &a;

    printf("%i %i %i\n", &p, p, &a);
}

void troca(int x, int y){
    x += 1;
    y += 1;
}
