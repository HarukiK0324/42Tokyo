#include <unistd.h>
int size_of(char *str)
{
    int i;
    
    i = 0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}
int main(int argc, char *argv[]){
    int i;

    i = 1;
    while(argc > i){
        write(1,argv[i],size_of(argv[i]));
        write(1,"\n",1);
        i++;
    }
}