#include<stdio.h>
#include <stdlib.h>
#include<string.h>

typedef struct{ //con trỏ và kích thước mảng
    int *ptr;
    int size;
}typeArray;

struct typeArray *nhapData(typeArray *value){
    printf("Moi nhap chieu dai mang:");
    scanf("%d", &(value->size));
    value->ptr = (int*)malloc(value->size * sizeof(int));

    for (int i = 0; i < value->size; i++){
        printf("Nhap gia tri tai arr[%d]:",i);
        scanf("%d", &(value->ptr[i]));
    }
}

void TachMang (typeArray *value){
    int even[(value->size + 1)/2], odd[(value->size + 1)/2];
    int x=0,y=0;

    for(int i = 0; i < value->size; i++) {
      if(value->ptr[i] % 2 == 0) {
         even[x] = value->ptr[i];
         x++;
      }else {
         odd[y] = value->ptr[i];
         y++;
      }
    }

    printf("\nMang chan:\t");
    for(int i = 0; i < x; i++) {
      printf(" %d", even[i]);   
    }
    
    printf("\nMang le:\t");
    for(int i = 0; i < y; i++) {
      printf(" %d", odd[i]);   
    }
};


int main(int argc, char const *argv[])
{
    typeArray value;

    nhapData(&value);
    printf("\nMang cua ban:\n\t");
    for (int i = 0; i < value.size; i++)
    {
        printf("%d\t",value.ptr[i]);
    }

    TachMang(&value);

    return 0;
}

