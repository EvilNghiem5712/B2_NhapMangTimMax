#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int ngayS, thangS, namS, ngayN, thangN, namN;

    //dk tinh tuoi
    printf("nhap vao nam hien tai: "); scanf("%d", &namN);
    if (namN<namS || namN<1900){
        printf("nam hien tai khong hop le moi ban nhap lai: ");
        scanf("%d",&namN);
    }
    
    printf("nhap vao thang hien tai: "); 

    lable_1:
    
    scanf("%d", &thangN);

    switch (thangN)
    {
    case 1:
        {//31 ngay
        printf("nhap vao ngay hien tai: "); 
        scanf("%d", &ngayN);
        if(ngayN<0 || ngayN>=32){
            printf("ngay khong hop le moi nhap lai:");
            scanf("%d",&ngayN);
        }}
        break;
    case 2:
        {//29 ngay nam nhuan, != 28 ngay
        printf("nhap vao ngay hien tai: "); 
        scanf("%d", &ngayN);
        if(namN%4==0){
            if(ngayN<0 || ngayN>=30){
            printf("ngay khong hop le moi nhap lai:");
            scanf("%d",&ngayN);
            }
        }else {
            if(ngayN<0 || ngayN>=29){
            printf("ngay khong hop le moi nhap lai:");
            scanf("%d",&ngayN);
            }
        }}
        break;
    case 3:
        {//31 ngay
        printf("nhap vao ngay hien tai: "); 
        scanf("%d", &ngayN);
        if(ngayN<0 || ngayN>=32){
            printf("ngay khong hop le moi nhap lai:");
            scanf("%d",&ngayN);
        }}
        break;
    case 4:
        {//30 ngay
        printf("nhap vao ngay hien tai: "); 
        scanf("%d", &ngayN);
        if(ngayN<0 || ngayN>=31){
            printf("ngay khong hop le moi nhap lai:");
            scanf("%d",&ngayN);
        }}
        break;
    case 5:
        {//31 ngay
        printf("nhap vao ngay hien tai: "); 
        scanf("%d", &ngayN);
        if(ngayN<0 || ngayN>=32){
            printf("ngay khong hop le moi nhap lai:");
            scanf("%d",&ngayN);
        }}
        break;
    case 6:
        {//30 ngay
        printf("nhap vao ngay hien tai: "); 
        scanf("%d", &ngayN);
        if(ngayN<0 || ngayN>=31){
            printf("ngay khong hop le moi nhap lai:");
            scanf("%d",&ngayN);
        }}
        break;
    case 7:
        {//31 ngay
        printf("nhap vao ngay hien tai: "); 
        scanf("%d", &ngayN);
        if(ngayN<0 || ngayN>=32){
            printf("ngay khong hop le moi nhap lai:");
            scanf("%d",&ngayN);
        }}
        break;
    case 8:
        //31 ngay
        {printf("nhap vao ngay hien tai: "); 
        scanf("%d", &ngayN);
        if(ngayN<0 || ngayN>=32){
            printf("ngay khong hop le moi nhap lai:");
            scanf("%d",&ngayN);
        }}
        break;
    case 9:
        {//30 ngay
        printf("nhap vao ngay hien tai: "); 
        scanf("%d", &ngayN);
        if(ngayN<0 || ngayN>=31){
            printf("ngay khong hop le moi nhap lai:");
            scanf("%d",&ngayN);
        }}
        break;
    case 10:
        {//31 ngay
        printf("nhap vao ngay hien tai: "); 
        scanf("%d", &ngayN);
        if(ngayN<0 || ngayN>=32){
            printf("ngay khong hop le moi nhap lai:");
            scanf("%d",&ngayN);
        }}
        break;
    case 11:
        {//30 ngay
        printf("nhap vao ngay hien tai: "); 
        scanf("%d", &ngayN);
         if(ngayN<0 || ngayN>=31){
            printf("ngay khong hop le moi nhap lai:");
            scanf("%d",&ngayN);
        }}
        break;
    case 12:
        {//31 ngay
        printf("nhap vao ngay hien tai: "); 
        scanf("%d", &ngayN);
        if(ngayN<0 || ngayN>=32){
            printf("ngay khong hop le moi nhap lai:");
            scanf("%d",&ngayN);
        }}
        break;
    
    default:
        printf("thang khong hop le moi nhap lai thang: ");
        //scanf("%d",thangN);
        goto lable_1;
        break;
        
    } 

    // nam sinh
    printf("nhap vao nam sinh: "); scanf("%d", &namS);
    if (namN<namS || namS<1900){
        printf("nam sinh khong hop le moi ban nhap lai: ");
        scanf("%d",&namS);
    }
    
    printf("nhap vao thang sinh: "); 
    
    lable_2:
    
    scanf("%d", &thangS);
    switch (thangS)
    {
    case 1:
        {//31 ngay
        printf("nhap vao ngay sinh: "); 
        scanf("%d", &ngayS);
        if(ngayS<0 || ngayS>=32){
            printf("ngay khong hop le moi nhap lai:");
            scanf("%d",&ngayS);
        }}
        break;
    case 2:
        {//29 ngay nam nhuan, != 28 ngay
        printf("nhap vao ngay sinh: "); 
        scanf("%d", &ngayS);
        if(namS%4==0){
            if(ngayS<0 || ngayS>=30){
            printf("ngay khong hop le moi nhap lai:");
            scanf("%d",&ngayS);
            }
        }else {
            if(ngayS<0 || ngayS>=29){
            printf("ngay khong hop le moi nhap lai:");
            scanf("%d",&ngayS);
            }
        }}
        break;
    case 3:
        {//31 ngay
        printf("nhap vao ngay sinh: "); 
        scanf("%d", &ngayS);
        if(ngayS<0 || ngayS>=32){
            printf("ngay khong hop le moi nhap lai:");
            scanf("%d",&ngayS);
        }}
        break;
    case 4:
        {//30 ngay
        printf("nhap vao ngay sinh: "); 
        scanf("%d", &ngayS);
        if(ngayS<0 || ngayS>=31){
            printf("ngay khong hop le moi nhap lai:");
            scanf("%d",&ngayS);
        }}
        break;
    case 5:
        {//31 ngay
        printf("nhap vao ngay sinh: "); 
        scanf("%d", &ngayS);
        if(ngayS<0 || ngayS>=32){
            printf("ngay khong hop le moi nhap lai:");
            scanf("%d",&ngayS);
        }}
        break;
    case 6:
        {//30 ngay
        printf("nhap vao ngay sinh: "); 
        scanf("%d", &ngayS);
        if(ngayS<0 || ngayS>=31){
            printf("ngay khong hop le moi nhap lai:");
            scanf("%d",&ngayS);
        }}
        break;
    case 7:
        {//31 ngay
        printf("nhap vao ngay sinh: "); 
        scanf("%d", &ngayS);
        if(ngayS<0 || ngayS>=32){
            printf("ngay khong hop le moi nhap lai:");
            scanf("%d",&ngayS);
        }}
        break;
    case 8:
        {//31 ngay
        printf("nhap vao ngay sinh: "); 
        scanf("%d", &ngayS);
        if(ngayS<0 || ngayS>=32){
            printf("ngay khong hop le moi nhap lai:");
            scanf("%d",&ngayS);
        }}
        break;
    case 9:
        {//30 ngay
        printf("nhap vao ngay sinh: "); 
        scanf("%d", &ngayS);
        if(ngayS<0 || ngayS>=31){
            printf("ngay khong hop le moi nhap lai:");
            scanf("%d",&ngayS);
        }}
        break;
    case 10:
        {//31 ngay
        printf("nhap vao ngay sinh: "); 
        scanf("%d", &ngayS);
        if(ngayS<0 || ngayS>=32){
            printf("ngay khong hop le moi nhap lai:");
            scanf("%d",&ngayS);
        }}
        break;
    case 11:
       {//30 ngay
       printf("nhap vao ngay sinh: "); 
        scanf("%d", &ngayS);
       if(ngayS<0 || ngayS>=31){
            printf("ngay khong hop le moi nhap lai:");
            scanf("%d",&ngayS);
        }}
        break;
    case 12:
        {//31 ngay
        printf("nhap vao ngay sinh: "); 
        scanf("%d", &ngayS);
        if(ngayS<0 || ngayS>=32){
            printf("ngay khong hop le moi nhap lai:");
            scanf("%d",&ngayS);
        }}
        break;
    
    default:
        printf("thang khong hop le moi nhap lai thang: ");
        goto lable_2;
        //scanf("%d",thangS);
        break;
    }


    printf("ngay thang nam sinh cua ban: %d/%d/%d\n",ngayS,thangS,namS);
    printf("ngay thang nam hien tai: %d/%d/%d\n",ngayN,thangN,namN);

    int tuoiNa, tuoiT, tuoiNg;
    //int abs(int tuoiT);
    
    if (thangS > thangN){
        if (ngayS > ngayN)
        {
            tuoiT = 12 + thangN - thangS -1;
            tuoiNa = namN - namS - 1;
            tuoiNg = 30 + ngayN - ngayS;
        }else {
            tuoiT = 12 + thangN - thangS ;
            tuoiNa = namN - namS - 1;
            tuoiNg = abs(ngayN - ngayS);
        }   
    }else{
        if (ngayS > ngayN)
        {
            tuoiT = abs(thangN - thangS);
            tuoiNa = namN - namS - 1;
            tuoiNg = 30 + ngayN - ngayS;
        }else {
            tuoiNa = namN - namS;
            tuoiT = abs(thangN - thangS);
            tuoiNg = abs(ngayN - ngayS);
        }
    }
    printf("hien tai ban %d tuoi %d thang %d ngay.",tuoiNa,tuoiT,tuoiNg);
    return 0;
}

// moc ngay tinh tuoi theo chu ky 30 ngay

