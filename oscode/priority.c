#include <stdio.h>
#include <conio.h>

void main()
{
	int i, j, bt[10], n, pt[10], wt[10], tt[10], t, k, l, w1 = 0, t1 = 0, b = 0, p = 0;
	float at, aw;
	//clrscr();
	printf("Enter no. of jobs:");
	scanf("%d", &n);
	printf("Enter burst time:");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &b);
		bt[i] = b;
	}

	printf("Enter priority values:");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &p);
		pt[i] = p;
	}

	for (i = 1; i < n; i++)
		for (j = 0; j < n - i; j++)
			if (pt[j] < pt[j + 1])
			{
				t = pt[j];
				pt[j] = pt[j + 1];
				pt[j + 1] = t;
				k = bt[j];
				bt[j] = bt[j + 1];
				bt[j + 1] = k;
			} wt[0] = 0;
	for (i = 0; i < n; i++)
	{
		wt[i + 1] = bt[i] + wt[i];
		tt[i] = bt[i] + wt[i];
		w1 = w1 + wt[i];
		t1 = t1 + tt[i];
	}

	aw = w1 / n;
	at = t1 / n;
	printf("\nBurst Time\tPriority\tWaiting Time\tTurn Around Time\n");
	for (i = 0; i < n; i++)
		printf("%d\t\t%d\t\t%d\t\t%d\n", bt[i], pt[i], wt[i], tt[i]);
	printf("Average Waiting Time: %f\nAverage Turnaround Time: %f", aw, at);
	getch();
}