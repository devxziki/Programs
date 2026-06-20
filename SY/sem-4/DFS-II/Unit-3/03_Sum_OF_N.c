#include<stdio.h>

int main(){
	int i, n;
	long long sum=0;

	printf("Enter Number of Terms (n): ");
	scanf("%d", &n);

	// Create and write to sum.txt
	FILE *outfile = fopen("sum.txt", "a");
	if(outfile == NULL){
		printf("Error in Creating The File\n");
		return 1;
	}

	fprintf(outfile, "Numbers and Their Running Sum upto %d Terms\n", n);
	fprintf(outfile, "--------------------------------------------\n");
	fprintf(outfile, "%-10s %-10s\n", "Number", "Sum");
	fprintf(outfile, "--------------------------------------------\n");

	sum = 0;
	for(i=1; i<=n; i++){
		sum = sum + i;
		fprintf(outfile, "%-10d %-10lld\n", i, sum);
	}

	fprintf(outfile, "--------------------------------------------\n");
	fprintf(outfile, "Total Numbers : %d\n", n);
	fprintf(outfile, "Final Sum     : %lld\n", sum);
	fclose(outfile);

	printf("SucessFully Wrote Numbers and Sum in sum.txt\n\n");

	// Read and display from sum.txt
	FILE *infile = fopen("sum.txt", "r");
	if(infile == NULL){
		printf("Error in Reading The File\n");
		return 1;
	}

	char line[200];
	printf("Contents of sum.txt:\n");
	while(fgets(line, sizeof(line), infile) != NULL){
		printf("%s", line);
	}
	fclose(infile);

	return 0;
}
