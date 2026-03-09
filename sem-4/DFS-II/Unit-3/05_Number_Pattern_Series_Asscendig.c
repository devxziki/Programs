#include<stdio.h>

int main(){
	int i, j, n;

	printf("Enter Number of Rows (n): ");
	scanf("%d", &n);

	// Create and write pattern to pattern.txt
	FILE *outfile = fopen("pattern.txt", "a");
	if(outfile == NULL){
		printf("Error in Creating The File\n");
		return 1;
	}

	fprintf(outfile, "Pattern upto %d Rows:\n", n);
	fprintf(outfile, "----------------------\n");

	// Generate pattern row by row
	for(i=1; i<=n; i++){
		for(j=1; j<=i; j++){
			if(j < i)
				fprintf(outfile, "%d ", j);
			else
				fprintf(outfile, "%d", j);
		}
		fprintf(outfile, "\n");
	}

	fprintf(outfile, "----------------------\n");
	fprintf(outfile, "Total Rows: %d\n", n);
	fclose(outfile);

	printf("SucessFully Wrote Pattern in pattern.txt\n\n");

	// Read and display from pattern.txt
	FILE *infile = fopen("pattern.txt", "r");
	if(infile == NULL){
		printf("Error in Reading The File\n");
		return 1;
	}

	char line[200];
	printf("Contents of pattern.txt:\n");
	while(fgets(line, sizeof(line), infile) != NULL){
		printf("%s", line);
	}
	fclose(infile);

	return 0;
}
