#include <stdio.h>
#define INF 1000000000
#define MA 1010

int map[MA][MA], chk[MA], dis[MA], via[MA], N, M, S;

void dfs(int k) {
	if (via[k] != 0) dfs(via[k]);
	printf("%d ", k);
}

//////   다익스트라(dikstra)      //////////////////////
void dikstra(int s) {
	int i, j, min = INF, k, mink;
	chk[s] = 1;
	for (i = 1; i <= N; i++) {
		dis[i] = map[s][i];
		if (chk[i] == 0 && min > dis[i]) {// s정점에서 갈수있는 정보를 dis배열에 초기화와 경유정점 찾기
			min = dis[i]; k = i;
		}
	}
	for (i = 1; i < N; i++) {
		if (min == INF) break; // 경유정점이 없어면 break
		chk[k] = 1; min = INF;  // 경유정점 chk
		for (j = 1; j <= N; j++) {
			if (chk[j] == 0 && dis[j] > dis[k] + map[k][j]) {// 경유한 길이 최소길이면 갱신
				dis[j] = dis[k] + map[k][j];
				via[j] = k;
			}
			if (chk[j] == 0 && min > dis[j]) {// 다음에 사용할 최소경유정점을 찾음
				min = dis[j];
				mink = j;
			}
		}
		k = mink; // 최소경유정점을 k에 저장
	}
}
///////////////////////////////////////////////////////// 
int main() {
	int i, j, a, b, c, x, y;
	scanf("%d%d%d", &N, &M, &S);
	for (i = 1; i <= N; i++)
		for (j = 1; j <= N; j++)
			if (i != j)
				map[i][j] = INF; // map 초기화

	for (i = 0; i < M; i++) {
		scanf("%d%d%d", &a, &b, &c);
		if (map[a][b] > c) map[a][b] = c; // map 셋팅
	}

	dikstra(S);

	for (i = 1; i <= N; i++) {    // 경로출력
		printf("%d ", S);
		if (i != S)
			dfs(i);
		printf("\n");
	}
	return 0;
}