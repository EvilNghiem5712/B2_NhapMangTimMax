#include<stdio.h>
#include <stdlib.h>

struct typeArr
{
    int *arr; //kieu con tro mang
    int size; // kich thuoc mang
};

struct typeArr *nhapData(){
    static struct typeArr arr; //dia chi co dinh
    
    int *ptr;
    int size;
    
    printf("nhap chieu dai cua mang: ");
    scanf("%d",&size);

    ptr = (int*)malloc(size* sizeof(int)); //mang cap phat dong

    for (int i = 0; i < size; i++){
        printf("nhap gia tri tai arr[%d]:",i);
        scanf("%d", &(ptr[i]));
    }

    arr.size=size;
    arr.arr=ptr;

    return &arr; //tra ve dang dia chi
}

void SapxepMinMax(struct typeArr *value){ //sap sep chon
    int a = 0;
    for (int i = 0; i < value->size; i++)
    {
        for (int j = i + 1; j < value->size; j++)
        {
            if (value->arr[i] > value->arr[j])
            {       
                a = value->arr[i];
                value->arr[i] = value->arr[j];
                value->arr[j] = a;
            }
        }
    }
}

void SapsepMaxMin(struct typeArr *value){ //sap sep chon
    int b = 0;
    for (int i = 0; i < value->size; i++)
    {
        for (int j = i + 1; j < value->size; j++)
        {
            if (value->arr[i] < value->arr[j])
            {       
                b = value->arr[i];
                value->arr[i] = value->arr[j];
                value->arr[j] = b;
            }
        }
    }
}

int TimMax(struct typeArr *value){
    int max;
    for (int i = 0; i < value->size; i++)
    {
        if (max < value->arr[i])
        {
            max = value->arr[i];
        }
    }
    return max;
}

int main(int argc, char const *argv[])
{
    struct  typeArr *data;
    data = nhapData();
     
    for (int i = 0; i < data->size; i++)
    {
        printf("Arr[%d]: %d\n",i,*(data->arr+i));
    }
    
    SapxepMinMax(data);
    printf("Day tu be den lon la: ");
    for (int i = 0; i < data->size; i++){
        printf("%d  ",*(data->arr + i));
    }

    SapsepMaxMin(data);
    printf("\nDay tu lon den be la: ");
    for (int i = 0; i < data->size; i++){
        printf("%d  ",*(data->arr + i));
    }

    TimMax(data);
    printf("\nSo lon nhat la: %d\n",TimMax(data));

    return 0;
}
