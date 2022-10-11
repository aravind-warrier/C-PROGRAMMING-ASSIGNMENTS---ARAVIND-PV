#include<stdio.h>
int main()
{
	int empage[]={22,30,25,28};
	char *empname[]={"Anu","Sinu","Vinu","Manu"};
	int eAsize = sizeof empage / sizeof *empage;
	printf("-- BEFORE SORT --\n");
	for(int i=0;i<eAsize;i++)
	{
		printf("%d    %s\t%d\n",i+1,empname[i],empage[i]);
	}
	printf("-- AFTER SORT --\n");
	{
		for(int i=0;i<eAsize;++i)
		{
			for(int j=i+1;j<eAsize;++j)
		{
			if (empage[i]>empage[j])
			{
				char *c = empname[i];
				empname[i] = empname[j];
				empname[j] = c;
				int t = empage[i];
				empage[i] = empage[j];
				empage[j] = t;
			}
		}
			
		}
		for(int i=0;i<eAsize;i++)
		{
		printf("%d    %s\t%d\n",i+1,empname[i],empage[i]);
		}
	}
	return 0;
}

