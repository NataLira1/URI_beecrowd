#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct{

	char numero[250];

} telefone;

telefone num[100050];

int comparacao(telefone *, telefone *);

int main(){

	unsigned int var, const1, const2;
	while (scanf("%d", &var) != EOF)
	{

		const1 = 0;
		unsigned int aux = var;
		while (var--)
			scanf("%s", num[const1++].numero);

		unsigned int caracteres = 0;
		qsort(num, const1, sizeof(telefone), comparacao);

		for (const1 = 1; const1 < aux; ++const1)
			for (const2 = 0; num[const1].numero[const2]; ++const2)
				if (num[const1].numero[const2] == num[const1 - 1].numero[const2])
					++caracteres;
				else
					break;

		printf("%u\n", caracteres);
	}

	return 0;

}

//int comparacao(telefone *x, telefone *y)
{

	int aux = strcmp(x->numero, y->numero);

	if (aux == 0)
		return 0;
	else if (aux < 0)
		return 1;
	else
		return -1;

}
