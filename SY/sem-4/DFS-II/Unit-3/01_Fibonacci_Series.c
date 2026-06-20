#include<stdio.h>

int main(){
	int i, n;
	long long a=0, b=1, c;

	printf("Enter Number of Terms for Fibonacci Series: ");
	scanf("%d", &n);

	// Create and write to series.txt
	FILE *outfile = fopen("series.txt", "a");
	if(outfile == NULL){
		printf("Error in Creating The File\n");
		return 1;
	}

	fprintf(outfile, "Fibonacci Series of %d Terms:\n", n);
	fprintf(outfile, "--------------------------------\n");

	for(i=1; i<=n; i++){
		if(i==1){
			fprintf(outfile, "%lld", a);
		} else if(i==2){
			fprintf(outfile, " %lld", b);
		} else {
			c = a + b;
			fprintf(outfile, " %lld", c);
			a = b;
			b = c;
		}
	}
	fprintf(outfile, "\n--------------------------------\n");
	fprintf(outfile, "Total Terms: %d\n", n);
	fclose(outfile);

	printf("SucessFully Wrote Fibonacci Series in series.txt\n\n");

	// Read and display from series.txt
	FILE *infile = fopen("series.txt", "r");
	if(infile == NULL){
		printf("Error in Reading The File\n");
		return 1;
	}

	char line[500];
	printf("Contents of series.txt:\n");
	while(fgets(line, sizeof(line), infile) != NULL){
		printf("%s", line);
	}
	fclose(infile);

	return 0;
}
