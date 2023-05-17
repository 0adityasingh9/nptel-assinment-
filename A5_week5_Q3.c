// #include <stdio.h>
// int det(int matrix[], int n)
// {
//     if (n == 4)
//     {
//         return matrix[0] * matrix[3] - matrix[1] * matrix[2];
//     }
//     else
//     {
//         int k = n / 4;
//         int a1[k], a2[k], a3[k], a4[k];
//         for (int i = 0; i < k; i++)
//         {
//             a1[i] = matrix[i];
//             a2[i] = matrix[k + i];
//             a3[i] = matrix[2 * k + i];
//             a4[i] = matrix[3 * k + i];
//         }
//         return det(a1, k) * det(a4, k) - det(a2, k) * det(a3, k);
//     }
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int matrix[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &matrix[i]);
//     }
//     printf("%d", det(matrix, n));

//     return 0;
// }

