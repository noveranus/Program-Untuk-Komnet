#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
	int i,j,n_kata,n_pola,p=0,a=0;
	char kata[100], pola[100];
	printf("Masukkan kalimat = "); gets(kata);
	printf("Masukkan pola = "); gets(pola);
	n_kata=strlen(kata); n_pola=strlen(pola);
	while(p!=n_pola)
	{
		if(a==0)
		{
			for(i=0;i<n_kata;i++)
			{
				if(pola[p]==kata[i])
				{
					p++;
					j++;
				}
				else if(p!=n_pola)
					p=0;
			}
			a++;
		}
		else
		{
			if(p==0)
			{
				p=n_pola;
				j=0;
			}
		}
	}
	if(p==n_pola&&j!=0)
		printf("Pola %s terdapat dalam kalimat '%s'",pola,kata);
	else
		printf("Pola %s tidak ada",pola);
}
