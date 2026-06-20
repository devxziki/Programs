#include<stdio.h>

int main(){
	int i, n;

	printf("Enter a Number to Store its Table: ");
	scanf("%d", &n);

	// Open table.txt in APPEND mode
	FILE *outfile = fopen("table.txt", "a");
	if(outfile == NULL){
		printf("Error in Opening table.txt\n");
		return 1;
	}

	fprintf(outfile, "\nMultiplication Table of %d:\n", n);
	fprintf(outfile, "----------------------------\n");

	for(i=1; i<=10; i++){
		fprintf(outfile, "%d x %2d = %d\n", n, i, n*i);
	}

	fprintf(outfile, "----------------------------\n");
	fclose(outfile);

	printf("SucessFully Appended Table of %d in table.txt\n\n", n);

	// Read and display full table.txt
	FILE *infile = fopen("table.txt", "r");
	if(infile == NULL){
		printf("Error in Reading table.txt\n");
		return 1;
	}

	char line[100];
	printf("Contents of table.txt:\n");
	while(fgets(line, sizeof(line), infile) != NULL){
		printf("%s", line);
	}
	fclose(infile);

	return 0;
}
