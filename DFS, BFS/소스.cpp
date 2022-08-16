#include <stdio.h>

#define M 1010



int  map[M][M], via[2][M][M], qx[M * M * 2], qy[M * M * 2], qz[M * M * 2];

int  zx[4] = { 1,-1,0,0 }, zy[4] = { 0,0,1,-1 };



int main()

{

	int i, j, k, x, y, z, st, ed, nx, ny, n, m;



	scanf("%d%d", &n, &m);

	for (i = 1; i <= n; ++i)

	{

		for (j = 1; j <= m; j++)

		{

			scanf("%1d", &map[i][j]);

		}

	}



	st = ed = -1;

	qx[++st] = 1; qy[st] = 1; qz[st] = 0; via[0][1][1] = 1; // 초기화



	while (st != ed)

	{

		x = qx[++ed]; y = qy[ed]; z = qz[ed];

		if (x == n && y == m)

		{

			printf("%d", via[z][x][y]); // 답을 찾았으면 출력

			return 0;

		}

		for (k = 0; k < 4; k++)

		{

			nx = x + zx[k]; ny = y + zy[k];

			if (nx < 1 || nx > n || ny < 1 || ny > m) continue;

			if (map[nx][ny] == 0 && via[z][nx][ny] == 0)              // 부수지않고 이동하는 경우

			{

				via[z][nx][ny] = via[z][x][y] + 1;

				qx[++st] = nx; qy[st] = ny; qz[st] = z;

			}

			else if (map[nx][ny] == 1 && z == 0 && via[z + 1][nx][ny] == 0) // 부수고 이동하는 경우

			{

				via[z + 1][nx][ny] = via[z][x][y] + 1;

				qx[++st] = nx; qy[st] = ny; qz[st] = z + 1;

			}

		}

	}

	printf("-1"); // 갈수없는 길이면 -1

	return 0;

}