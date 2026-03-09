#include<stdio.h>

int main(){
	int i, j, n;

	printf("Enter Number of Rows (n): ");
	scanf("%d", &n);

	// Create and write pattern to pattern4.txt
	FILE *outfile = fopen("pattern4.txt", "w");
	if(outfile == NULL){
		printf("Error in Creating The File\n");
		return 1;
	}

	fprintf(outfile, "Pattern upto %d Rows:\n", n);
	fprintf(outfile, "----------------------\n");

	// Pattern:
	// Row 1 : 5
	// Row 2 : 5 4
	// Row 3 : 5 4 3
	// Row 4 : 5 4 3 2
	// Row 5 : 5 4 3 2 1
	// Row i : print from n down to (n-i+1)

	for(i=1; i<=n; i++){
		for(j=n; j>=(n-i+1); j--){
			if(j > (n-i+1))
				fprintf(outfile, "%d ", j);
			else
				fprintf(outfile, "%d", j);
		}
		fprintf(outfile, "\n");
	}

	fprintf(outfile, "----------------------\n");
	fprintf(outfile, "Total Rows: %d\n", n);
	fclose(outfile);

	printf("SucessFully Wrote Pattern in pattern4.txt\n\n");

	// Read and display from pattern4.txt
	FILE *infile = fopen("pattern4.txt", "r");
	if(infile == NULL){
		printf("Error in Reading The File\n");
		return 1;
	}

	char line[200];
	printf("Contents of pattern4.txt:\n");
	while(fgets(line, sizeof(line), infile) != NULL){
		printf("%s", line);
	}
	fclose(infile);

	return 0;
}
