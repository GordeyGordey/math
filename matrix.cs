using System;
using static System.Console;
using static System.Convert;
namespace Matrixa
{
class Program
{
static void Main(string[] args)
{
int[,] A = new int[3, 3];
int[,] B = new int[3, 1];
for (int i = 0; i < 3; i++)
{
for (int j = 0; j < 3; j++)
{
WriteLine($"Введите [{i + 1},{j + 1}] элемент:");
A[i, j] = ToInt32(ReadLine());
}
for (int j = 0; j < 1; j++)
{
WriteLine($"Введите [{i + 1},{j + 1}] элемент свободных членов:");
B[i, j] = ToInt32(ReadLine());
}
}
/*for (int i = 0; i < 3; i++)
{
for (int j = 0; j < 1; j++)
{
WriteLine($"Введите [{i + 1},{j + 1}] элемент свободных членов:");
B[i, j] = ToInt32(ReadLine());
}
}*/
WriteLine("Матрица системы:");
for (int i = 0; i < 3; i++)
{
for (int j = 0; j < 3; j++)
{
if (A[i, j] < 0)
Write($"{A[i, j]} \t");
else
Write($" {A[i, j]} \t");
}
WriteLine();
}
WriteLine("Матрица свободных членов:");
for (int i = 0; i < 3; i++)
{
for (int j = 0; j < 1; j++)
{
WriteLine($"{B[i, j]}");
}
WriteLine();
}
int del, del1, del2, del3;
del = A[0, 0] * A[1, 1] * A[2, 2] + A[0, 1] * A[1, 2] * A[2, 0] + A[0, 2] * A[1, 0] * A[2, 1] - A[0, 2] * A[1, 1] * A[2, 0] - A[0, 0] * A[2, 1] * A[1, 2] - A[0, 1] * A[1, 0] * A[2, 2];
WriteLine($"Определитель матрицы равен: {del}");
if (del != 0)
{
del1 = B[0, 0] * A[1, 1] * A[2, 2] + A[0, 1] * A[1, 2] * B[2, 0] + A[0, 2] * B[1, 0] * A[2, 1] - A[0, 2] * A[1, 1] * B[2, 0] - B[0, 0] * A[2, 1] * A[1, 2] - A[0, 1] * B[1, 0] * A[2, 2];
WriteLine($"Определитель x1 равен: {del1}");
del2 = A[0, 0] * B[1, 0] * A[2, 2] + B[0, 0] * A[1, 2] * A[2, 0] + A[0, 2] * A[1, 0] * B[2, 0] - A[0, 2] * B[1, 0] * A[2, 0] - A[0, 0] * B[2, 0] * A[1, 2] - B[0, 0] * A[1, 0] * A[2, 2];
WriteLine($"Определитель x2 равен: {del2}");
del3 = A[0, 0] * A[1, 1] * B[2, 0] + A[0, 1] * B[1, 0] * A[2, 0] + B[0, 0] * A[1, 0] * A[2, 1] - B[0, 0] * A[1, 1] * A[2, 0] - A[0, 0] * A[2, 1] * B[1, 0] - A[0, 1] * A[1, 0] * B[2, 0];
WriteLine($"Определитель x3 равен: {del3}");
WriteLine($"X1 равен: {del1 / del}");
WriteLine($"X2 равен: {del2 / del}");
WriteLine($"X3 равен: {del3 / del}");
}
else
WriteLine("Корней нет, так как определитель равен нулю, а ты себек раз такую систему дал");
ReadKey();
}
}
}