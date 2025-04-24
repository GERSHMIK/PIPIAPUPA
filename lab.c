#include "lab.h"

#define YES 1
#define NO 0
#define MAXLINE 1000
float func() {
    float L;
    int t1, t2;

    printf("Введите L:");
    scanf("%f",&L);
    printf("Введите t1:");
    scanf("%d",&t1);
    printf("Введите t2:");
    scanf("%d",&t2);

    float delta_v = (L / t1) - (L / t2);
    return delta_v / 2;
}

int shish(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'); // || - логический оператор или. shish - функция, которая проверяет, является ли символ буквой, сравнивая его с диапазонами символов для заглавных и строчных букв.
}
void mamut_rahal(char buffer[], int N)
{
    char c;
    int flag, i, pos, start, j, cnt;

    flag = NO;
    start = 0;
    i = 0;
    pos = 0;
    cnt = 0;

    do {
        c = buffer[i];

        if(c == ' ' || c == '.' || c == '\n' || c == ',' || c == '\0') {
            if(flag == YES) {
                // Копируем слово только если длина <= N
                if(cnt <= N) {
                    for(j = start; j < i; j++) {
                        buffer[pos++] = buffer[j];
                    }
                }
                flag = NO;
                cnt = 0;
            }
            buffer[pos++] = c; // Копируем разделитель
        }
        else {
            if(flag == NO) {
                start = i;     // Начало нового слова
                cnt = 0;       // Сброс счетчика длины
                flag = YES;
            }
            cnt++;             // Считаем длину слова
        }
        i++;
    } while(c != '\0');
}
void gopstop(int arr[], int length) {
    int temp;
    for (int i = 0; i < length / 2; i++) {
        temp = arr[i];
        arr[i] = arr[length - 1 - i];
        arr[length - 1 - i] = temp;
    }
}

// Функция для обнуления строки
void zero_row(int K, int row[K]) {
    for (int i = 0; i < K; i++) {
        row[i] = 0;
    }
}




void lab1()

{
   
float func() {
    float L;
    int t1, t2;

    printf("Введите L:");
    scanf("%f",&L);
    printf("Введите t1:");
    scanf("%d",&t1);
    printf("Введите t2:");
    scanf("%d",&t2);

    float delta_v = (L / t1) - (L / t2);
   return delta_v/2;
}


 printf("Катер проходит расстояние L по течению реки за время t1 минут, а против течения - за время t2 минут. Определить скорость течения реки.\n");
   
    printf("Гершкович М.А 1438, Задача 1.4 Определение скорости течения реки.\n");
    
    float delta_v = func();
    printf("Скорость течения реки:%f", delta_v);

}
void lab1d()
{
    printf("Катер проходит расстояние L по течению реки за время t1 минут, а против течения - за время t2 минут. Определить скорость течения реки.\n");
    printf(" Задание: засунуть все вычисления в функцию\n");
    float delta_v = func();
    printf("Скорость течения реки:%f.\n", delta_v);

}
void lab2()
{
    printf("Вычислить сумму первых N элементов ряда: 3/3 - 4/4 + 5/7 - ....\n");
{
float s,a,b,c;
int i, N, sign;

printf("N=");
scanf("%d",&N);

s=0;
sign=1;
i=0;
c=3;
b=1;
a=c/b;

while(N>i)
{
s=s+a*sign;
sign=-sign;
c=c+1;
b=b+3;
a=c/b;
i=i+1;
}

printf("n=%d, s=%f", i,s);
printf("\n");
}
}
void lab2d()
{
    printf(" Для заданного значения x вычислить сумму первых N элементов ряда: x-x^2/2+x^3/3-x^4/4\n");
    printf(" вместо цикла вайла цикл фор, выход из цикла внутри через выбранное тобой условие с помощью оператора брейк\n ");
    float s;   
    float a;  
    float x;
    float c;
    int n;  
    int sign; 
printf("n="); 
scanf("%d", &n); 
printf("x="); 
scanf("%f", &x); 
s = 0; 
sign = 1; 
c = x;
for (int i=0;i<n;i++)
{
a = c/(i+1);
s = s + a*sign; 
sign = (-1)*sign; 
i = i + 1; 
c = c*x;
if (i == 3)
   break;
}
printf("s = %f\n", s);
}
void lab3()
{
    printf("В потоке символов сосчитать число слов, состоящих из более чем N букв.\n");
    int N;
    printf("Введите значение N: ");
    scanf("%d", &N);
    int count = 0; 
    char c;
    int word_length = 0; 
    while ((c = getchar()) != '\n' && c != EOF); // && - логический оператор и
    printf("Введите текст, в конце +):\n");
    while ((c = getchar()) != '+') {
        if (shish(c)) { 
            word_length++;
        } else if (word_length > 0) { 
            if (word_length > N) {
                count++;     }
            word_length = 0; 
        }
    }
    if (word_length > N) {
        count++;
    }
    printf("Количество слов, содержащих больше %d букв: %d\n", N, count);
  
}

void lab4()
{
    printf("Тема лабы: В символьной строке удалить все слова, состоящие более чем из N букв.\n");


void mamut_rahal(char buffer[], int N);
{
    int N;
    char line[MAXLINE];

    printf("N = ");
    scanf("%d", &N);
    while(getchar() != '\n'); // Очистка буфера ввода

    fgets(line, MAXLINE, stdin);
    mamut_rahal(line, N);
    puts(line);
    return 0;
}


}
void lab4d()
{
    printf(" Тема лабы");
    printf(" Задание");
}
void lab5()
{
    printf("В массиве из L целых чисел переставить элементы в зеркальном порядке.\n");
    
int L;
    printf("Введите длину массива: ");
    scanf("%d", &L);
    
    int array[L];
    printf("Введите %d целых чисел:\n", L);
    for (int i = 0; i < L; i++) {
        scanf("%d", &array[i]);
    }
    
    // Переворачиваем массив
    gopstop(array, L);
    
    printf("Массив в зеркальном порядке:\n");
    for (int i = 0; i < L; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    return 0;
}
void lab5d()
{
    // Функция для сортировки массива методом пузырька
void bubble_sort(int arr[], int length) {
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Меняем элементы местами
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Функция для переворачивания массива



    int L;
    printf("Введите длину массива: ");
    scanf("%d", &L);
    
    int array[L];
    printf("Введите %d целых чисел:\n", L);
    for (int i = 0; i < L; i++) {
        scanf("%d", &array[i]);
    }
    
    // Сортируем массив
    bubble_sort(array, L);
    printf("Отсортированный массив:\n");
    for (int i = 0; i < L; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    // Переворачиваем массив
    gopstop(array, L);
    printf("Массив в зеркальном порядке:\n");
    for (int i = 0; i < L; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
}
void lab6()
{
    printf("В двумерном целочисленном массиве размера N на K обнулить строки, являющиеся зеркальным отражением самих себя.\n");

    int N, K;

    // Ввод размеров массива
    printf("Введите количество строк N: ");
    scanf("%d", &N);
    printf("Введите количество столбцов K: ");
    scanf("%d", &K);

    int array[N][K];

    // Ввод элементов массива
    printf("Введите элементы массива построчно:\n");
    for (int i = 0; i < N; i++) {
        printf("Строка %d: ", i + 1);
        for (int j = 0; j < K; j++) {
            scanf("%d", &array[j][i]);
        }
    }
    // Вывод исходного массива
    printf("\nИсходный массив:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            printf("%3d ", array[i][j]);
        }
        printf("\n");
    }
// Функция для проверки, является ли строка зеркальной (палиндромом)
int is_mirror_row(int K, int row[K]) {
    for (int i = 0; i < K / 2; i++) {
        if (row[i] != row[K - 1 - i]) {
            return 0; // Не зеркальная
        }
    }
    return 1; // Зеркальная
}
     // Проверяем и обнуляем зеркальные строки
    for (int i = 0; i < N; i++) {
        if (is_mirror_row(K, array[i])) {
            zero_row(K, array[i]);
        }
    }
   // Вывод измененного массива
    printf("\nМассив после :\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            printf("%3d ", array[i][j]);
        }
        printf("\n");
    }
   
}
void lab6d()
{
    printf(" Тема лабы");
    printf(" Задание");
}
