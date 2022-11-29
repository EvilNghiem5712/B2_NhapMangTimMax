// có 1 rổ tất chứa ngẫu nhiên 3 loại tất đỏ vang xanh
// nhiệm vụ đếm trong rổ đó có bao nhiêu đôi tất cùng màu 
// và tổng số tất có trong rổ.

#include<stdio.h>
#include <stdlib.h>
#include<string.h>

typedef enum{ //định nghĩa kiểu data
    TAT_DO,
    TAT_XANH,
    TAT_VANG
}TAT;

typedef struct{ //con trỏ và kích thước mảng
    TAT *ptr;
    TAT size;
}typeBox;

struct typeArr *nhapData(typeBox *value){
    
    char name[10];
    printf("nhap chieu dai cua mang: ");
    scanf("%d",&(value->size));

    value->ptr = (TAT*)malloc(value->size * sizeof(TAT)); //mang cap phat dong
    
    //scanf("%p",name); // bản chất name (mảng) đã là địa chỉ, chỉ có biến mới cần & để truy địa chỉ
    
    for (int i = 0; i < value->size; i++){
        lable:
        
        printf("nhap gia tri tai arr[%d]:",i);
        scanf("%s", name);

        if (strcmp((char*)"TAT_DO", name)==0)
        {
            value->ptr[i] = TAT_DO;
        }else if (strcmp((char*)"TAT_XANH", name)==0)
        {
            value->ptr[i] = TAT_XANH;
        }else if (strcmp((char*)"TAT_VANG", name)==0)
        {
            value->ptr[i] = TAT_VANG;
        }else{
            printf("nhap sai dinh dang moi nhap lai ");
            goto lable;
        }
        
    }
}

int main(int argc, char const *argv[])
{
    typeBox value;
    nhapData(&value);
    int a,b,c;
    a=0; b=0; c=0;
    for (int i = 0; i < value.size; i++)
    {
        printf("arr[%d]: %d ", i, value.ptr[i]);
       
        if (value.ptr[i]==0){ //đếm số lượng tất trong rổ
            a++;
        }else if (value.ptr[i]==1){
            b++;
        }else if (value.ptr[i]==2){
            c++;
        }
    }

    //printf("\nco %d tat do",a);
    //printf("\nco %d tat xanh",b);
    //printf("\nco %d tat vang",c);
    printf("\nTrong ro co %d doi tat mau do, %d chiec le",a/2,a%2);
    printf("\nTrong ro co %d doi tat mau xanh, %d chiec le",b/2,b%2);
    printf("\nTrong ro co %d doi tat mau vang, %d chiec le",c/2,c%2);

    return 0;
}

