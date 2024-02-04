#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

	FILE* bagazh = fopen("bagazh.txt", "r");
	FILE* sort = fopen("sort.txt", "w");
	while (!feof(bagazh))
	{
		int count;
		int weight;
		while (fscanf(bagazh, "%d %d", &count, &weight) != EOF)
		{
			if (weight > 30)
			{
				fprintf(sort, "%d %d", count, weight);
				fprintf(sort, "%s", "\n");
			}
		}
	}
	fclose(bagazh);
	fclose(sort);
	cout << "finish";

	return 0;
}