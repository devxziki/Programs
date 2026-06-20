#include<stdio.h>

int main(){
	int i, j, n;

	printf("Enter Number of Rows (n): ");
	scanf("%d", &n);

	// Create and write pattern to pattern2.txt
	FILE *outfile = fopen("pattern2.txt", "a");
	if(outfile == NULL){
		printf("Error in Creating The File\n");
		return 1;
	}

	fprintf(outfile, "Pattern upto %d Rows:\n", n);
	fprintf(outfile, "----------------------\n");

	// Generate pattern row by row
	// Row 1 : 1
	// Row 2 : 2 2
	// Row 3 : 3 3 3
	// Row i : i repeated i times
	for(i=1; i<=n; i++){
		for(j=1; j<=i; j++){
			if(j < i)
				fprintf(outfile, "%d ", i);
			else
				fprintf(outfile, "%d", i);
		}
		fprintf(outfile, "\n");
	}

	fprintf(outfile, "----------------------\n");
	fprintf(outfile, "Total Rows: %d\n", n);
	fclose(outfile);

	printf("SucessFully Wrote Pattern in pattern2.txt\n\n");

	// Read and display from pattern2.txt
	FILE *infile = fopen("pattern2.txt", "r");
	if(infile == NULL){
		printf("Error in Reading The File\n");
		return 1;
	}

	char line[200];
	printf("Contents of pattern2.txt:\n");
	while(fgets(line, sizeof(line), infile) != NULL){
		printf("%s", line);
	}
	fclose(infile);

	return 0;
}
