#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int data[100];

int main()
{
	long long n, m;
	while (~scanf("%lld%lld", &n, &m)) {
		if (m <= 1 || n < m) {
			printf("Boring!\n");
			continue;
		}

		int count = 0;
		while (n % m == 0 && n >= m) {
			data[count++] = n;
			n /= m;
		}
		data[count] = n;

		if (data[count] != 1 || count == 0)
			printf("Boring!\n");
		else {
			for (int i = 0; i < count; ++i)
				printf("%d ", data[i]);
			printf("%d\n", data[count]);
		}
	}
	return 0;
}
