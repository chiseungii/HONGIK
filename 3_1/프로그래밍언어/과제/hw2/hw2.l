%{
	unsigned int word = 0;
	unsigned int equal = 0;	// '='
	unsigned int left = 0;		// '{'
	unsigned int right = 0;	// '}'
	unsigned int mark = 0;
	unsigned int number = 0;
%}

%%

[\t ]+ ;
\n ;
[A-Za-z]+ {word++;}
[0-9]+|[0-9]+"."[0-9]+ {number++;}
"=" {equal++;}
"{" {left++;}
"}" {right++;}
"~"|"`"|"!"|"@"|"#"|"$"|"%"|"^"|"&"|"*"|"("|")"|"_"|"-"|"+"|"["|"]"|"|"|\\|":"|";"|\"|"'"|"<"|">"|","|"."|"?"|"/" {mark++;}

%%

int yywrap() { return 1; }

int main() {
	yylex();
	printf("word = %d\n", word);
	printf("'=' = %d\n", equal);
	printf("'{' = %d\n", left);
	printf("'}' = %d\n", right);
	printf("mark = %d\n", mark);
	printf("number = %d\n", number);
}
