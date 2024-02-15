#include <stdio.h>

int main() {
	int n;
	int map[20][20] = { 0 };

	scanf("%d", &n);
    for (int r = 0; r < n; ++r) {
		for (int c = 0; c < n; ++c) {
            scanf("%d", &map[r][c]);
        }
    }


	int maxCount = 0;
	for (int r = 0; r < n - 2; ++r) {
		for (int c = 0; c < n - 2; ++c) {
			int count = 0;
			for (int rr = r; rr < r + 3; ++rr) {
				for (int cc = c; cc < c + 3; ++cc) {
					count += map[rr][cc];
				}
			}
			if (count > maxCount) {
				maxCount = count;
			}
		}
	}

	printf("%d", maxCount);
}