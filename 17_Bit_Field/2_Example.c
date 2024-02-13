//wap of bitfield with the union
#include <stdio.h>

union test {
	unsigned int x : 3;
	unsigned int z : 3;
	unsigned int y : 3;
};

int main()
{
	union test t;
    //In union we can only access one variable at time and print it.
    // If we try to access more than one variable its give garbage value.
    
	t.x = 5;
	printf("t.x = %d, t.y = %d \n", t.x, t.y);
	t.y = 4;
	printf("t.x = %d, t.y = %d, t.z = %d \n", t.x, t.y, t.z);
	t.z = 1;
	printf("t.x = %d, t.y = %d, t.z = %d \n", t.x, t.y, t.z);

	return 0;
}