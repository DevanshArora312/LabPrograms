#include <stdio.h>
#include <math.h>
void str_rev()
{
    int a, i;
    char str[100];
    printf("enter length of string");
    scanf("%d", &a);
    printf("Enter string");
    scanf("%s", &str);
    printf("The reversed string is:");
    for (i = 0; i <= a; i++)
    {
        printf("%c", str[a - i]);
    }
}
void str_rev2()
{
    char arr[100];
    int len;
    printf("Enter string length:");
    scanf("%d", &len);
    printf("Enter string:");
    for (int i = 0; i < len + 1; i++)
    {
        //    printf("%d",i);
        scanf("%c", &arr[i]);
        //    printf("%c",arr[i]);
    }
    for (int i = 0; i < len + 1; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\nThe reversed string is:");
    for (int i = 0; i <= len; i++)
    {
        printf("%c", arr[len - i]);
    }
}
void matrix()
{
    int mat1[10][10], mat2[10][10], mat3[10][10], i, j, r1, r2, c1, c2, r3, c3, x, k, sum;
    printf("Enter row and column of mat1:");
    scanf("%d%d", &r1, &c1);
    printf("Enter row and column of mat2:");
    scanf("%d%d", &r2, &c2);
    printf("Enter matrix 1 elements:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
        // printf("\n");
    }
    printf("Enter matrix 2 elements:\n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
        // printf("\n");
    }
    printf("Enter the operation: \n1.Addition\n2.Subtraction\n3.Multiplication\n");
    scanf("%d", &x);
    switch (x)
    {
    case 1:
        if (r1 != r2 || c1 != c2)
        {
            printf("Addition not possible!");
        }
        else
        {
            for (i = 0; i < r1; i++)
            {
                for (j = 0; j < c1; j++)
                {
                    mat3[i][j] = mat1[i][j] + mat2[i][j];
                }
            }
            for (i = 0; i < r1; i++)
            {
                for (j = 0; j < c1; j++)
                {
                    printf("%d ", mat3[i][j]);
                }
                printf("\n");
            }
        }
        break;
    case 2:
        if (r1 != r2 || c1 != c2)
        {
            printf("Subtraction not possible!");
        }
        else
        {
            for (i = 0; i < r1; i++)
            {
                for (j = 0; j < c1; j++)
                {
                    mat3[i][j] = mat1[i][j] - mat2[i][j];
                }
            }
            for (i = 0; i < r1; i++)
            {
                for (j = 0; j < c1; j++)
                {
                    printf("%d ", mat3[i][j]);
                }
                printf("\n");
            }
        }
        break;
    case 3:
        if (c1 != r2)
        {
            printf("Multilication not possible!");
        }
        else
        {
            for (i = 0; i < r1; i++)
            {
                for (j = 0; j < c2; j++)
                {
                    sum = 0;
                    for (k = 0; k < c1; k++)
                    {
                        sum += mat1[i][k] * mat2[k][j];
                    }
                    mat3[i][j] = sum;
                }
            }
        }
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("%d ", mat3[i][j]);
            }
            printf("\n");
        }
        break;
    default:
        printf("Enter valid value!");
    }
}
void Q6()
{
    int n, i, len, temp;
    printf("Enter number n:");
    scanf("%d", &n);
    temp = n;
    while (temp)
    {
        len++;
        temp /= 10;
    }

    for (i = 0; i < len; i++)
    {
        temp = (pow(10, len - i));
        printf("%d\n", n % temp);
    }
}
void q()
{
    int n, sum = 1;
    printf("Enter number n:");
    scanf("%d", &n);
    while (n)
    {
        sum *= (n % 10);
        n /= 10;
    }
    printf("The sum is %d", sum);
}
void main()
{
    int n, i, sum = 0;
    printf("enter n:");
    scanf("%d", &n);
    int count = 0, temp = n;
    while (temp)
    {
        count++;
        temp /= 10;
    }
    printf("%d\n", count);
    temp = (pow(10, count - 1));
    n = n % temp;
    count--;
    for (i = 0; i < count - 1; i++)
    {
        if ((i) % 2 == 0)
        {
            temp = pow(10, count - 1 - i);
            sum += n / temp;
        }
    }
    printf("The sum is %d", sum);
}
void file()
{
    int n, i;
    printf("enter n:");
    scanf("%d", &n);
    FILE *fptr;
    fptr = fopen("testfile.txt", "w");
    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            fprintf(fptr, "%d ", i);
        }
    }
    fclose(fptr);
    printf("Done\n");
    fptr = fopen("testfile.txt", "r");
    char str[200];
    fgets(str, 200, fptr);
    printf("%s", str);
    fclose(fptr);
}