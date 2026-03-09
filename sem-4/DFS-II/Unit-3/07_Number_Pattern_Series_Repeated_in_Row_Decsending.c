#include<stdio.h>

int main(){
	int i, j, n;

	printf("Enter Number of Rows (n): ");
	scanf("%d", &n);

	// Create and write pattern to pattern3.txt
	FILE *outfile = fopen("pattern3.txt", "w");
	if(outfile == NULL){
		printf("Error in Creating The File\n");
		return 1;
	}

	fprintf(outfile, "Pattern upto %d Rows:\n", n);
	fprintf(outfile, "----------------------\n");

	// Pattern:
	// Row 1 : n       (n printed 1 time)
	// Row 2 : n-1 n-1 (n-1 printed 2 times)
	// Row 3 : n-2 n-2 n-2
	// Row i : (n-i+1) printed i times

	for(i=1; i<=n; i++){
		int val = n - i + 1;
		for(j=1; j<=i; j++){
			if(j < i)
				fprintf(outfile, "%d ", val);
			else
				fprintf(outfile, "%d", val);
		}
		fprintf(outfile, "\n");
	}

	fprintf(outfile, "----------------------\n");
	fprintf(outfile, "Total Rows: %d\n", n);
	fclose(outfile);

	printf("SucessFully Wrote Pattern in pattern3.txt\n\n");

	// Read and display from pattern3.txt
	FILE *infile = fopen("pattern3.txt", "r");
	if(infile == NULL){
		printf("Error in Reading The File\n");
		return 1;
	}

	char line[200];
	printf("Contents of pattern3.txt:\n");
	while(fgets(line, sizeof(line), infile) != NULL){
		printf("%s", line);
	}
	fclose(infile);

	return 0;
}
