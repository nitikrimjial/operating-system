

	for (j = 0; j < n; j++) f[inde[j]] = 1;
	printf("\n allocated");
	printf("\n file indexed");
	for (k = 0; k < n; k++)
		printf("\n %d->%d:%d", p, inde[k], f[inde[k]]);
	printf(" Enter 1 to enter more files and 0 to exit\t");
	scanf("%d", &c);