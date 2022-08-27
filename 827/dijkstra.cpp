#include <stdio.h>
#define INF 1000000000
#define MA 1010

int map[MA][MA], chk[MA], dis[MA], via[MA], N, M, S;

void dfs(int k) {
	if (via[k] != 0) dfs(via[k]);
	printf("%d ", k);
}

//////   ���ͽ�Ʈ��(dikstra)      //////////////////////
void dikstra(int s) {
	int i, j, min = INF, k, mink;
	chk[s] = 1;
	for (i = 1; i <= N; i++) {
		dis[i] = map[s][i];
		if (chk[i] == 0 && min > dis[i]) {// s�������� �����ִ� ������ dis�迭�� �ʱ�ȭ�� �������� ã��
			min = dis[i]; k = i;
		}
	}
	for (i = 1; i < N; i++) {
		if (min == INF) break; // ���������� ����� break
		chk[k] = 1; min = INF;  // �������� chk
		for (j = 1; j <= N; j++) {
			if (chk[j] == 0 && dis[j] > dis[k] + map[k][j]) {// ������ ���� �ּұ��̸� ����
				dis[j] = dis[k] + map[k][j];
				via[j] = k;
			}
			if (chk[j] == 0 && min > dis[j]) {// ������ ����� �ּҰ��������� ã��
				min = dis[j];
				mink = j;
			}
		}
		k = mink; // �ּҰ��������� k�� ����
	}
}
///////////////////////////////////////////////////////// 
int main() {
	int i, j, a, b, c, x, y;
	scanf("%d%d%d", &N, &M, &S);
	for (i = 1; i <= N; i++)
		for (j = 1; j <= N; j++)
			if (i != j)
				map[i][j] = INF; // map �ʱ�ȭ

	for (i = 0; i < M; i++) {
		scanf("%d%d%d", &a, &b, &c);
		if (map[a][b] > c) map[a][b] = c; // map ����
	}

	dikstra(S);

	for (i = 1; i <= N; i++) {    // ������
		printf("%d ", S);
		if (i != S)
			dfs(i);
		printf("\n");
	}
	return 0;
}