/*
http://220.89.64.243/30stair/ms/ms.php?pname=ms
n���� 0~9�� �̷���� �迭����
�������� ���ų� Ŀ���� ���� 
Ȥ�� ���ų� ���� ������ �ִ� ���̸� ���Ͽ���
*/

#include<stdio.h>

int main_ms2() {
	int i, n, a[100000];
	// ������ �����ϴ� ���� ī��Ʈ ��, �ִ� ���� �����
	// ������ ��, ������ ��
	int up = 1, down = 1, max = 1; 
	// �Է�
	scanf("%d", &n);
	
	scanf("%d", &a[0]); // a[i-1] �� a[i]�� �� �ϱ� ���� 1���� ���� �޴´�.
	// ���
	for (i = 1; i < n; i++) {
		scanf("%d", &a[i]);
		if (a[i - 1] <= a[i]) // �����Ǵ� ���� ī��Ʈ
			up++;
		else 
			up = 1;

		if (a[i - 1] >= a[i]) // ���ҵǴ� ���� ī��Ʈ
			down++;
		else
			down = 1;
		
		if (up > max) // ����, ���� ���� �ֱ�
			max = up;
		if (down > max)
			max = down;
	}
	// ���
	printf("%d", max);

	return 0;
}