#include<stdio.h>

int main(){
	int i, n;
	long long term;

	printf("Enter Number of Terms (n): ");
	scanf("%d", &n);

	// Create and write series to series.txt
	FILE *outfile = fopen("series.txt", "a");
	if(outfile == NULL){
		printf("Error in Creating The File\n");
		return 1;
	}

	fprintf(outfile, "Series: 1, 2, 4, 8, 16, ... upto %d Terms\n", n);
	fprintf(outfile, "------------------------------------------\n");

	// Pattern: 1, 2, 4, 8, 16 ...
	// Term 1 = 1
	// Each next term = previous term * 2

	term = 1;
	for(i=1; i<=n; i++){
		if(i < n)
			fprintf(outfile, "%lld, ", term);
		else
			fprintf(outfile, "%lld", term);

		term = term * 2;
	}

	fprintf(outfile, "\n------------------------------------------\n");
	fprintf(outfile, "Total Terms: %d\n", n);
	fclose(outfile);

	printf("SucessFully Wrote Series in series.txt\n\n");

	// Read and display from series.txt
	FILE *infile = fopen("series.txt", "r");
	if(infile == NULL){
		printf("Error in Reading The File\n");
		return 1;
	}

	char line[1000];
	printf("Contents of series.txt:\n");
	while(fgets(line, sizeof(line), infile) != NULL){
		printf("%s", line);
	}
	fclose(infile);

	return 0;
}
