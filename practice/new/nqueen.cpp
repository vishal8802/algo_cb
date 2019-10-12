#include <bits/stdc++.h>

using namespace std;

// int possibility = 0;

bool isSafe(int queens[][100], int i, int j, int n)
{
   for (int row = 0; row < i; row++)
   {
      if (queens[row][j] == 1)
      {
         return false;
      }
   }
   int x = i;
   int y = j;

   while (x >= 0 && y >= 0)
   {
      if (queens[x][y] == 1)
      {
         return false;
      }
      x--;
      y--;
   }

   x = i;
   y = j;

   while (x >= 0 && y < n)
   {
      if (queens[x][y] == 1)
      {
         return false;
      }
      x--;
      y++;
   }
   return true;
}

bool checkNQueens(int queens[][100], int i, int n, int queenCount, int *possibility)
{
   if (i == n)
   {

      for (int i = 0; i < n; i++)
      {
         for (int j = 0; j < n; j++)
         {
            if (queens[i][j] == 1)
            {
               cout << "Q ";
            }
            else
               cout << "_ ";
         }
         cout << endl;
      }
      cout << endl
           << endl;

           return false;
   }
   for (int j = 0; j < n; j++)
   {
      if (isSafe(queens, i, j, n))
      {
         queens[i][j] = 1;

         int wasitSafe = checkNQueens(queens, i + 1, n, queenCount, possibility);
         if (wasitSafe)
         {
            return true;
         }
         queens[i][j] = 0;
      }
   }
   return false;
}

int main()
{
   int n;
   cin >> n;
   int nQueen[100][100];
   int count = 0;
   checkNQueens(nQueen, 0, n, 1, &count);
   cout << "\n"
        << count << endl;

   return 0;
}