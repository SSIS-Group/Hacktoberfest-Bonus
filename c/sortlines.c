#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINES 1000
#define MAXLEN   200

int readLines(char *lineptr[], int maxlines);
int getLine(char s[], int m);
void writeLines(char *lineptr[], int nlines);
void quickSort(char* [], int, int);
void swap(char* [], int, int);

char *lineptr[MAXLINES];

int main(){
	/* Sort english sentences in lexical order
	 * 
	 * Uses quick sort algorithm
	 */
	int nlines;

	if ((nlines = readLines(lineptr, MAXLINES)) >= 0){
		printf("nlines is: %d\n", nlines);
		quickSort(lineptr, 0, nlines-1);
		writeLines(lineptr, nlines);
		return 0;
	} else {
		printf("error: input too big\n");
		return 1;
	}
}

void writeLines(char *lineptr[], int nlines){
	int i = 0;

	for(; i < nlines; ++i){
		printf("%s\n", lineptr[i]);
	}

}

int readLines(char *lineptr[], int maxlines){
	// returns: number of input lines 
	// stores all input lines in char *lineptr[]

	int linelen, nlines = 0;
	char line[MAXLEN];
	char *p;

	while((linelen = getLine(line, MAXLEN)) > 0){
		if(nlines > maxlines)
			return -1;
		else{
			p = (char *) malloc(linelen * sizeof(char));
			strcpy(p, line);
			lineptr[nlines++] = p;
			// printf("this line: %s and length: %d\n", line, linelen);
		}
	}
	
	return nlines;
}

int getLine(char *line, int lim){
        // returns: int-value denoting length of input line
        // if length of line exceeds MAXLEN than only up till MAXLEN is included

        int c, len = 0;

        while(len <= lim-1 && (c = getchar()) != EOF && c != '\n'){
                *line++ = c;
                ++len;
        }
        if(c == '\n'){
                *line++ = '\0';
                ++len;
        }
        *line = '\0';

        return len-1;
}

void quickSort(char *v[], int left, int right){
	// sorts the array of pointers in increasing order

	int i, last;

        if(left >= right)
                return;
        // pivot position is middle index

        swap(v, left, (left + right) / 2);
        last = left;
        for(i=left+1; i<=right; ++i){
                if(strcmp(v[i], v[left]) < 0)
                        swap(v, ++last, i);
        }
        swap(v, left, last);
        quickSort(v, left, last - 1);
        quickSort(v, last + 1, right);
}

void swap(char *v[], int i, int j){
        char *temp;

        temp = v[i];
        v[i] = v[j];
        v[j] = temp;
}

