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

int str_cmp(char *str,char *str1)
{
    while (*str && (*str == *str1)) {
        str++;
        str1++;
    }
    return *(unsigned char *)str - *(unsigned char *)str1;
}
void swap(char **a, char **b) {
    char *c;
    
    c = *a;
    *a = *b;
    *b = c;
}

void sort_order(char *arr[], int n) {
    int i;
    int j;

    i = 0;
    while(i < n - 1)
    {
        j = 0;
        while(j < n - 1)
        {
            if(str_cmp(arr[j],arr[j + 1]) > 0){
                swap(&arr[j], &arr[j + 1]);
            }
            j++;
        }
        i++;
    }
}
int main(int argc, char *argv[]){
    int i;
    
    sort_order(argv + 1, argc - 1);
    i = 1;
    while(argc > i){
        write(1,argv[i],size_of(argv[i]));
        write(1,"\n",1);
        i++;
    }
}