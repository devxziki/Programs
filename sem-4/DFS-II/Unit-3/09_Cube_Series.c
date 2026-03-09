#include<stdio.h>

int main(){
	int i, n;

	printf("Enter Number of Terms (n): ");
	scanf("%d", &n);

	// Create and write series to squares.txt
	FILE *outfile = fopen("squares.txt", "a");
	if(outfile == NULL){
		printf("Error in Creating The File\n");
		return 1;
	}

	fprintf(outfile, "Square Number Series upto %d Terms:\n", n);
	fprintf(outfile, "-------------------------------------\n");

	// Pattern: 1, 4, 9, 16, 25 ...
	// Each term = i * i (square of i)

	for(i=1; i<=n; i++){
		if(i < n)
			fprintf(outfile, "%d, ", i*i);
		else
			fprintf(outfile, "%d", i*i);
	}

	fprintf(outfile, "\n-------------------------------------\n");
	fprintf(outfile, "Total Terms: %d\n", n);
	fclose(outfile);

	printf("SucessFully Wrote Square Series in squares.txt\n\n");

	// Read and display from squares.txt
	FILE *infile = fopen("squares.txt", "r");
	if(infile == NULL){
		printf("Error in Reading The File\n");
		return 1;
	}

	char line[1000];
	printf("Contents of squares.txt:\n");
	while(fgets(line, sizeof(line), infile) != NULL){
		printf("%s", line);
	}
	fclose(infile);

	return 0;
}
