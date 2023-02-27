#include <stdio.h>
#include <math.h>
#include <string.h>

void Q1(void)
{
    float num1, num2, num3, avg;
    printf("Enter num 1:");
    scanf("%f", &num1);
    printf("Enter num 2:");
    scanf("%f", &num2);
    printf("Enter num 3:");
    scanf("%f", &num3);
    avg = (num1 + num2 + num3) / 3;
    printf("The average is %.2f", avg);
}
void Q2(void)
{
    int x;
    printf("Choose your geometry:\n1.Circle\n2.Sphere\n");
    scanf("%d", &x);
    float radius, area, volume, perimeter;
    switch (x)
    {
    case 1:
        printf("Enter Radius:");
        scanf("%f", &radius);
        perimeter = 2 * (3.14) * radius;
        area = (3.14) * radius * radius;
        printf("Perimeter is %.2f and area is %.2f and volume is 0", perimeter, area);
        break;
    case 2:
        printf("Enter Radius:");
        scanf("%f", &radius);
        perimeter = 2 * (3.14) * radius;
        area = 4 * (3.14) * (pow(radius, 2));
        volume = (4 * (3.14) * pow(radius, 3)) / 3;
        printf("Perimeter is %.2f and area is %.2f and volume is %.2f", perimeter, area, volume);
        break;
    }
}
void Q3()
{
    int n, a, rshift, lshift;
    printf("Enter the number:");
    scanf("%d", &n);
    a = n;
    printf("Number is %d , number after right shift %d and dividing them we get %d\n", n, a >> 1, n / (a >> 1));
    a = n;
    printf("Number is %d , number after left shift %d and dividing them we get %d\n", n, a << 1, n / (a << 1));
}
void Q4()
{
    float a, b, c, root1, root2, disc;
    printf("In quadratic equation -> ax^2 + bx + c = 0....");
    printf("Enter a:");
    scanf("%f", &a);
    printf("Enter b:");
    scanf("%f", &b);
    printf("Enter c:");
    scanf("%f", &c);
    disc = pow(b, 2) - 4 * a * c;
    if (disc < 0)
    {
        printf("No real roots exist");
    }
    else
    {
        root1 = (-b + (pow(disc, 0.5))) / (2 * a);
        root2 = (-b - (pow(disc, 0.5))) / (2 * a);
        printf("Root 1 is : %.4f and root 2 is : %.4f", root1, root2);
    }
}

void Q5()
{
    int n1, n2;
    printf("Enter number 1 and 2:");
    scanf("%d%d", &n1, &n2);
    printf("Bitwise AND of %d and %d = %d\n", n1, n2, n1 & n2);
    printf("Bitwise OR of %d and %d = %d\n", n1, n2, n1 | n2);
    printf("Bitwise NOT of %d = %d and %d = %d\n", n1, ~n1, n2, ~n2);
    printf("Bitwise XOR of %d and %d = %d\n", n1, n2, n1 ^ n2);
}
void Q6()
{
    int i, j, n, count, temp;
    printf("Enter the num:");
    scanf("%d", &n);
    temp = n;
    while (temp)
    {
        count++;
        temp /= 10;
    }

    for (i = count - 1; i >= 0; i--)
    {
        printf("%d\n", n);
        j = pow(10, i);
        n %= j;
    }
}

void Q7()
{
    int n, sum = 0;
    printf("Enter number n:");
    scanf("%d", &n);
    while (n)
    {
        sum += (n % 10);
        n /= 10;
    }
    printf("The sum is %d", sum);
}
void Q8()
{
    float n;
    printf("Enter the amount\n");
    scanf("%f", &n);
    float famount;
    float rate = (n * 775 * 10) / 10000;
    famount = rate + n;
    printf("The cummulative amount is %.3f", famount);
}
void Q9()
{
    Q4();
}
void Q10()
{
    int level, basic_pay, ta, entertainment_allowance;
    float tax_rate, tax, gross_salary, net_salary;

    printf("Enter employee basic pay: ");
    scanf("%d", &basic_pay);
    printf("Enter employee level (1-4): ");
    scanf("%d", &level);

    switch (level)
    {
    case 1:
        entertainment_allowance = 3000;
        ta = 7000;
        if (basic_pay >= 40000 && basic_pay <= 60000)
        {
            tax_rate = 0.1;
        }
        else
        {
            printf("Basic pay and Level does not match");
        }
        break;
    case 2:
        entertainment_allowance = 2000;
        ta = 6000;
        if (basic_pay >= 30000 && basic_pay <= 40000)
        {
            tax_rate = 0.08;
        }
        else
        {
            printf("Basic pay and Level does not match");
        }
        break;
    case 3:
        entertainment_allowance = 1500;
        ta = 5000;
        if (basic_pay >= 20000 && basic_pay <= 30000)
        {
            tax_rate = 0.05;
        }
        else
        {
            printf("Basic pay and Level does not match");
        }
        break;
    case 4:
        entertainment_allowance = 1500;
        ta = 5000;
        if (basic_pay >= 15000 && basic_pay <= 20000)
        {
            tax_rate = 0;
        }
        break;
    default:
        printf("Invalid level\n");
    }

    gross_salary = basic_pay + entertainment_allowance + ta + 0.25 * basic_pay;
    tax = tax_rate * gross_salary;
    net_salary = gross_salary - tax;

    printf("Gross salary: %f\n", gross_salary);
    printf("Tax: %f\n", tax);
    printf("Net salary: %f\n", net_salary);
}
void Q11()
{
    int i, n, count, temp, new = 0;
    printf("Enter the num:");
    scanf("%d", &n);
    temp = n;
    while (temp)
    {
        count++;
        temp /= 10;
    }
    for (i = 1; n /= 10 != 0; i++)
    {
        temp = pow(10, count - i);
        new += ((n % 10) * temp);
        n /= 10;
    }
    printf("new num is : %d", new);
}
void Q12()
{
    int low, high, i, j, count = 0;
    printf("Enter lower limit:");
    scanf("%d", &low);
    printf("Enter higher limit:");
    scanf("%d", &high);
    for (i = low; i <= high; i++)
    {
        count = 0;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 0)
        {
            printf("%d\n", i);
        }
    }
}
void Q13()
{
    int i, n1, n2, low, high, hcf;
    printf("Enter n1:");
    scanf("%d", &n1);
    printf("Enter n2:");
    scanf("%d", &n2);
    low = n1;
    high = n2;
    if (n1 > n2)
    {
        low = n2;
        high = n1;
    }
    if (high % low == 0)
    {
        hcf = low;
    }
    else
    {
        for (i = 1; i < low; i++)
        {
            if (low % i == 0 && high % i == 0)
            {
                hcf = i;
            }
        }
    }

    printf("hcf is :%d", hcf);
}
void Q14()
{
    int i, m, temp, a = 0, b = 1;
    printf("Enter m:");
    scanf("%d", &m);
    printf("0\t1\t");
    for (i = 0; i < m - 2; i++)
    {
        temp = a + b;
        printf("%d\t", temp);
        a = b;
        b = temp;
    }
}
void Q15()
{
}
void Q16()
{
    int i, k, j, n;
    printf("enter n: ");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        for (k = 0; k < n - i; k++)
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        for (k = i - 1; k > 0; k--)
        {
            printf("%d ", k);
        }
        printf("\n");
    }

    for (i = n - 1; i > 0; i--)
    {
        for (k = 0; k < n - i; k++)
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        for (k = i - 1; k > 0; k--)
        {
            printf("%d ", k);
        }
        printf("\n");
    }
}

void Q17()
{
    int a[10] = {2, 3, 6, 9, 10, 34, 40, 41, 43, 45};
    int b[10] = {1, 5, 8, 10, 45, 54, 55, 70, 78, 100};
    int c[20];
    int i, j = 0, m = 0, n = 0, size = 10;

    for (i = 0; i < 2 * size; i++)
    {
        if (a[m] > b[n] && n != size)
        {
            c[j] = b[n];
            j++;
            n++;
        }
        else if (a[m] < b[n] && m != size)
        {
            c[j] = a[m];
            j++;
            m++;
        }
        else if (a[m] < b[n] && m == size)
        {
            c[j] = b[n];
            j++;
            n++;
        }
        else if (a[m] > b[n] && n == size)
        {
            c[j] = a[m];
            j++;
            n++;
        }
        else if (a[m] == b[n])
        {
            c[j] = b[n];
            n++;
            j++;
            c[j] = a[m];
            m++;
            j++;
            i++;
        }
    }
    for (i = 0; i < 2 * size; i++)
    {
        printf("%d ", c[i]);
    }
}
void Q18()
{
    char line[200], x;
    int count = 0, i;
    printf("enter the line:");
    fgets(line, sizeof(line), stdin);
    printf("enter the char:");
    scanf("%c", &x);
    for (i = 0; line[i] != '\0'; i++)
    {
        if (line[i] == x)
        {
            count++;
        }
    }
    printf("The character %c occurs %d times in the line", x, count);
}
void Q19()
{
    int mat1[3][3], mat2[3][3], mat3[3][3], i, j, x, k, sum;
    printf("Enter matrix 1 elements:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
        // printf("\n");
    }
    printf("Enter matrix 2 elements:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
        // printf("\n");
    }
    printf("Enter the operation: \n1.Addition\n2.Subtraction\n3.Transpose\n");
    scanf("%d", &x);
    switch (x)
    {
    case 1:

        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                mat3[i][j] = mat1[i][j] + mat2[i][j];
            }
        }
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("%d ", mat3[i][j]);
            }
            printf("\n");
        }
        break;
    case 2:
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                mat3[i][j] = mat1[i][j] - mat2[i][j];
            }
        }
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("%d ", mat3[i][j]);
            }
            printf("\n");
        }
        break;
    case 3:
        printf("Transpose of matrix 1:\n");
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("%d ", mat1[j][i]);
            }
            printf("\n");
        }
        printf("Transpose of matrix 2:\n");
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("%d ", mat2[j][i]);
            }
            printf("\n");
        }
        break;
    default:
        printf("Enter valid value!");
    }
}
void Q20()
{
    char line[200];
    int i, vowels = 0, cons = 0, digit = 0, j;
    int arr[10] = {65, 69, 73, 79, 85, 97, 101, 105, 111, 117};
    printf("enter line: ");
    fgets(line, sizeof(line), stdin);
    for (i = 0; i < strlen(line) - 1; i++)
    {
        if ((line[i] >= 65 && line[i] <= 90) || (line[i] >= 97 && line[i] <= 122))
        {
            cons++;
            for (j = 0; j < 10; j++)
            {
                if (line[i] == arr[j])
                {
                    vowels++;
                    cons--;
                    break;
                }
            }
        }
        else if (line[i] >= 48 && line[i] <= 57)
        {
            digit++;
        }
    }
    printf("the number of consonants are : %d\n", cons);
    printf("the number of vowels are : %d\n", vowels);
    printf("the number of digits are : %d\n", digit);
}
void Q21()
{
    char original[1000];
    char changeword[1000];
    char replaceword[1000];
    char replaced[1000];
    int i = 0;
    int k = 0;
    printf("Enter the main string:");
    gets(original);
    printf("Enter the sub-string to replace:");
    gets(changeword);
    printf("Enter the sub-string you want to put in:");
    gets(replaceword);
    while (original[i] != '\0')
    {
        int j = 0;
        int restore = i;
        while (changeword[j] != 0)
        {
            if (original[i] == changeword[j])
            {
                i++;
                j++;
            }
            else
            {
                i = restore;
                break;
            }
        }
        if (j == strlen(changeword))
        {
            int m = 0;
            while (replaceword[m] != 0)
            {
                replaced[k] = replaceword[m];
                k++;
                m++;
            }
        }
        else
        {
            replaced[k] = original[i];
            i++;
            k++;
        }
    }
    replaced[k] = '\0';
    puts(replaced);
}
void Q22()
{
    int i, j, alp[26] = {0};
    int dig[10] = {0};
    char str[200];
    printf("enter string:");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            j = str[i] - 65;
            alp[j]++;
        }
        else if (str[i] >= 97 && str[i] <= 122)
        {
            j = str[i] - 97;
            alp[j]++;
        }
        else if (str[i] >= 48 && str[i] <= 57)
        {
            j = str[i] - 48;
            dig[j]++;
        }
    }
    for (i = 0; i < 26; i++)
    {
        printf("The element %c occurs %d times\n", i + 97, alp[i]);
    }
    for (i = 0; i < 10; i++)
    {
        printf("The element %c occurs %d times\n", i + 48, dig[i]);
    }
}
void Q23()
{
    int run = 1, x, num = 0, vals[100], i;
    float mean, var, sd, sum = 0;
    while (run)
    {
        if (num >= 100)
        {
            break;
        }
        printf("Enter number:");
        scanf("%d", &x);
        if (x == -1)
        {
            break;
        }
        vals[num] = x;
        sum += x;
        num++;
    }
    mean = sum / num;
    sum = 0;
    for (i = 0; i < num; i++)
    {
        sum += (pow(vals[i] - mean, 2));
    }
    var = sum / num;
    sd = sqrt(var);
    printf("mean is : %.3f\n", mean);
    printf("variance is : %.3f\n", var);
    printf("standard deviation is : %.3f\n", sd);
}
void Q24()
{
    int i, j, alp = 65, num = 1, k, n;
    printf("Enter num:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (k = 0; k < n - i; k++)
            printf(" ");
        if (i % 2 == 0)
        {
            for (j = 1; j <= i; j++)
            {
                printf("%c ", alp);
                alp++;
            }
        }
        else
        {
            for (j = 1; j <= i; j++)
            {
                printf("%d ", num);
                num++;
            }
        }
        printf("\n");
    }
}
void Q25()
{
    char *ones[] = {"", "ONE ", "TWO ", "THREE ", "FOUR ", "FIVE ", "SIX ", "SEVEN ", "EIGHT ", "NINE "};
    char *tens[] = {"", "TEN ", "TWENTY ", "THIRTY ", "FOURTY ", "FIFTY ", "SIXTY ", "SEVENTY ", "EIGHTY ", "NINETY "};
    char *elevs[] = {"", "ELEVEN ", "TWELVE ", "THIRTEEN ", "FOURTEEN ", "FIFTEEN ", "SIXTEEN ", "SEVENTEEN ", "EIGHTEEN ", "NINETEEN "};
    char *hundreds[] = {"", "ONE HUNDRED ", "TWO HUNDRED ", "THREE HUNDRED ", "FOUR HUNDRED ", "FIVE HUNDRED ", "SIX HUNDRED ", "SEVEN HUNDRED ", "EIGHT HUNDRED ", "NINE HUNDERED "};
    int n, o, t, h;
    float num;
    scanf("%f", &num);
    n = (int)num;
    o = n % 10;
    h = n / 100;
    t = n / 10 - (h * 10);
    char str[500] = "RUPEES ";
    strcat(str, hundreds[h]);
    if (n % 100 > 20)
    {
        strcat(str, tens[t]);
        strcat(str, ones[o]);
    }
    else if (n % 100 > 10)
    {
        strcat(str, elevs[n % 10]);
    }
    else
    {
        strcat(str, ones[o]);
    }
    strcat(str, "AND PAISE ");
    n = (num - n + 0.01) * 100;
    o = n % 10;
    t = n / 10;
    strcat(str, tens[t]);
    strcat(str, ones[o]);
    puts(str);
}
void Q26()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int *p, i, n = 6;
    p = &arr[n - 1];
    while (n--)
    {
        printf("%d ", *p);
        p--;
    }
}

int comp(int *arr1, int *arr2, int n, int m)
{
    int i;
    if (n != m)
    {
        return 0;
    }
    for (i = 0; i < n; i++)
    {
        if (*(arr1 + i) != *(arr2 + i))
        {
            return 0;
        }
    }
    return 1;
}
void Q27()
{
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {1, 2, 3, 4};
    printf("%d", comp(arr1, arr2, 3, 3));
}

void Q30()
{
    int i, num, x, index = 0, arr[100] = {0};
    while (1)
    {
        printf("Enter desired Operation :\n1.Insertion\n2.Deletion\n");
        scanf("%d", &x);
        if (x == -1)
        {
            break;
        }
        switch (x)
        {
        case 1:
            printf("Enter num:");
            scanf("%d", &num);
            arr[index] = num;
            index++;
            break;
        case 2:
            for (i = 0; i < index; i++)
            {
                arr[i] = arr[i + 1];
            }
            index--;
            printf("New queue is:");
            for (i = 0; i < index; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n");
            break;
        default:
            printf("Invalid operation!\n");
            break;
        }
    }
}
void Q31()
{
    struct time_struct
    {
        int hours, min, sec;
    };
    struct time_struct time1;
    printf("Enter hours:");
    scanf("%d", &time1.hours);
    printf("Enter minutes:");
    scanf("%d", &time1.min);
    printf("Enter seconds:");
    scanf("%d", &time1.sec);
    printf("The time is : %d:%d:%d\n", time1.hours, time1.min, time1.sec);
}
int Q33()
{
    int i, j, alp[26] = {0};
    int dig[10] = {0};
    char str[200];
    FILE *fptr;
    fptr = fopen("testfile.txt", "r");
    printf("Getting String from file.......Done!\n");
    fgets(str, sizeof(str), fptr);
    fclose(fptr);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            j = str[i] - 65;
            alp[j]++;
        }
        else if (str[i] >= 97 && str[i] <= 122)
        {
            j = str[i] - 97;
            alp[j]++;
        }
        else if (str[i] >= 48 && str[i] <= 57)
        {
            j = str[i] - 48;
            dig[j]++;
        }
    }

    fptr = fopen("newfile.txt", "w");
    for (i = 0; i < 26; i++)
    {
        printf("The element %c occurs %d times\n", i + 97, alp[i]);
        fprintf(fptr, "The element %c occurs %d times\n", i + 97, alp[i]);
    }
    for (i = 0; i < 10; i++)
    {
        printf("The element %c occurs %d times\n", i + 48, dig[i]);
        fprintf(fptr, "The element %c occurs %d times\n", i + 48, dig[i]);
    }
    fclose(fptr);
    return 0;
}
int main(void)
{
    Q33();
    return 0;
}
