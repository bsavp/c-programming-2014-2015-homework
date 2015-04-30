#include <stdio.h>

int main()
{
	int x, y, z, t;
	
	x = 1;
	y = 2;
	t = 1;
	
	while(x<11)
	{
	
		for(z=2; z<y; z++)
		{
			if(y%z == 0)
			{
				t=0;
			}
	 	}
	
	for(z=2; z<y+2; z++)
	{
		if((y+2)%z == 0)
		{
			t=0;
		}
	}

	if(t != 0)
	{
		printf("(%d, %d)\n", y, y+2);
		x = x+1;
	} 
	else
	{
		t = 1;
	}
	
	y = y+1;
	
	}
	return 0;
}
