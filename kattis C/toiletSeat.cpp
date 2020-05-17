#include <stdio.h>
#include <string.h>

int main() {
	char s[1000];
	scanf("%s",s);
	char state = s[0];
	int n = state == 'D', n2 = state == 'U', n3 = 0;
	if(n2)
		n2 -= 2*(s[1] == 'U');
	else
		n -= 2*(s[1] == 'D');
	for(int i = 1; i < strlen(s); ++i)
	{
		switch(s[i])
		{
			case 'U':
			n2+=2;
			if(state == 'D')
				n3++;
			break;
			case 'D':
			n+=2;
			if(state == 'U')
				n3++;
			break;
		}
		state = s[i];
	}
	printf("%d\n%d\n%d",n,n2,n3);
	return 0;
}
