#include<stdio.h>

int main(){
	int i, n;
	int oddcount=0, evencount=0;

	printf("Enter Value of N: ");
	scanf("%d", &n);

	// Create odd.txt
	FILE *oddfile = fopen("odd.txt", "a");
	if(oddfile == NULL){
		printf("Error in Creating odd.txt\n");
		return 1;
	}

	// Create even.txt
	FILE *evenfile = fopen("even.txt", "w");
	if(evenfile == NULL){
		printf("Error in Creating even.txt\n");
		return 1;
	}

	// Write headers
	fprintf(oddfile,  "Odd Numbers From 1 to %d\n", n);
	fprintf(oddfile,  "--------------------------\n");
	fprintf(evenfile, "Even Numbers From 1 to %d\n", n);
	fprintf(evenfile, "--------------------------\n");

	// Store odd and even numbers in separate files
	for(i=1; i<=n; i++){
		if(i%2 != 0){
			fprintf(oddfile, "%d\n", i);
			oddcount++;
		} else {
			fprintf(evenfile, "%d\n", i);
			evencount++;
		}
	}

	fprintf(oddfile,  "--------------------------\n");
	fprintf(oddfile,  "Total Odd Numbers  : %d\n", oddcount);
	fprintf(evenfile, "--------------------------\n");
	fprintf(evenfile, "Total Even Numbers : %d\n", evencount);

	fclose(oddfile);
	fclose(evenfile);

	printf("SucessFully Wrote %d Odd Numbers in odd.txt\n", oddcount);
	printf("SucessFully Wrote %d Even Numbers in even.txt\n\n", evencount);

	// Read and display odd.txt
	FILE *inOdd = fopen("odd.txt", "r");
	if(inOdd == NULL){
		printf("Error in Reading odd.txt\n");
		return 1;
	}
	char line[100];
	printf("Contents of odd.txt:\n");
	while(fgets(line, sizeof(line), inOdd) != NULL){
		printf("%s", line);
	}
	fclose(inOdd);

	printf("\n");

	// Read and display even.txt
	FILE *inEven = fopen("even.txt", "r");
	if(inEven == NULL){
		printf("Error in Reading even.txt\n");
		return 1;
	}
	printf("Contents of even.txt:\n");
	while(fgets(line, sizeof(line), inEven) != NULL){
		printf("%s", line);
	}
	fclose(inEven);

	return 0;
}
