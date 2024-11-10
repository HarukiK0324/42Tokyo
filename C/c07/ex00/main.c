#include <unistd.h>
char *ft_strdup(char *src);
int main(){
    char arr[] = "abcdef";
    char *ptr = ft_strdup(arr);
    while(*ptr != '\0'){
        write(1,ptr,1);
        ptr++;
    }
    return 0;
}