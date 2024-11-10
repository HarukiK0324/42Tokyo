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
    write(1,argv[0],size_of(argv[0]));
    write(1,"\n",1);
}