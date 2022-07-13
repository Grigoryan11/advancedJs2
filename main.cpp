#include <iostream>
#include <string>
using namespace std;

int strlen(char* str) {
	int len = 0;

	for(int i=0; ;i++) {
		if(str[i] == '\0'){
			break;
		}
		len++;
	}
	return len;
}

char* concat(char* str1,char* str2){
	int l = strlen(str1);
	for(int i = 0; i < strlen(str2 - i); i++) {
		str1[l] = str2[i];
		l++;
	}
	return str1;
}

char* strset(char* str,char *ch){
	for(int i = 0; i < strlen(str); i++) {
		str[i] = *ch;
	}
	return str;
}

int main(){
	char ptr1[] = "hello";
	char ptr2[] = "world";
	char ch[] = "*";
	//cout << concat(ptr1,ptr2) << endl;
	//cout << strset(ptr1,ch) << endl;
}
