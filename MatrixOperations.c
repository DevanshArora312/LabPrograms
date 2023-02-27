#include<stdio.h>

void main(){
    int mat1[10][10],mat2[10][10],mat3[10][10],i,j,r1,r2,c1,c2,r3,c3,x,k,sum;
    printf("Enter row and column of mat1:");
    scanf("%d%d",&r1,&c1);
    printf("Enter row and column of mat2:");
    scanf("%d%d",&r2,&c2);
    printf("Enter matrix 1 elements:\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%d",&mat1[i][j]);
        }
        //printf("\n");
    }
    printf("Enter matrix 2 elements:\n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            scanf("%d",&mat2[i][j]);
        }
        //printf("\n");
    }
    printf("Enter the operation: \n1.Addition\n2.Subtraction\n3.Multiplication\n");
    scanf("%d",&x);
    switch (x){
        case 1:
            if (r1 != r2 || c1 != c2){
                printf("Addition not possible!");
            
            }
            else {
                for (i=0;i<r1;i++){
                    for (j=0;j<c1;j++){
                        mat3[i][j] = mat1[i][j] + mat2[i][j]; 
                    }
                }
                for(i=0;i<r1;i++){
                    for(j=0;j<c1;j++){
                        printf("%d ",mat3[i][j]);
                    }
                    printf("\n");
                }
            }
            break;
        case 2:
            if (r1 != r2 || c1 != c2){
                printf("Subtraction not possible!");
            
            }
            else {
                for (i=0;i<r1;i++){
                    for (j=0;j<c1;j++){
                        mat3[i][j] = mat1[i][j] - mat2[i][j]; 
                    }
                }
                for(i=0;i<r1;i++){
                    for(j=0;j<c1;j++){
                        printf("%d ",mat3[i][j]);
                    }
                    printf("\n");
                }
            }
            break;
        case 3:
            if (c1 != r2){
                printf("Multiplication not possible!");
            }
            else {
                for (i=0;i<r1;i++){
                    for (j=0;j<c2;j++){
                        sum = 0;
                        for(k=0;k<c1;k++){
                            sum+=mat1[i][k]*mat2[k][j];
                        }
                        mat3[i][j] = sum;
                    }
                }
            
                for(i=0;i<r1;i++){
                        for(j=0;j<c2;j++){
                            printf("%d ",mat3[i][j]);
                        }
                        printf("\n");
                    }
            }
            break;
        default:
            printf("Enter valid value!"); 
    }
}