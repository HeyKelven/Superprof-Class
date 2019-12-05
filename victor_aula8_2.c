int main(){

    int v = 42;
    int *p;
    p = &v;

    *p = 34;

    printf("%d %d\n", v, *p);

}
