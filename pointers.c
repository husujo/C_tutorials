
#include <stdio.h>
#include <stdlib.h>


typedef struct node {

	int index;
	struct node *next;

} *node_t;


int main() {
	
	//printf("derp\n");

	char *string = "helloworld";

	node_t derp = malloc(sizeof(node_t));
	derp->next = malloc(sizeof(node_t));
	derp->next->index = 4;

	derp->index = 3;

	printf("%d\n", derp->index);
	printf("%s\n", string);
	printf("%d\n", derp->next->index);

	return 0;
}

