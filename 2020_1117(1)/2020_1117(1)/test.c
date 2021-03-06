///模拟实现strcmp
//#include<stdio.h>
//#include<stdlib.h>
//
//int myStrcmp(const char* str1, const char* str2){
//	if (str1 == NULL || str2 == NULL){
//		return NULL;
//	}
//
//	while (str1!=NULL&&str2!=NULL){
//		if (*str1 == *str2){
//			str1++;
//			str2++;
//		}else{
//			return *str1 - *str2;
//		}
//	}
//	return *str1 - *str2;
//}
//int main()
//{
//	const char* str1 = "ACB";
//	const char* str2 = "ABC";
//	printf("str1=%s\nstr2=%s\n", str1, str2);
//	printf("%d\n", myStrcmp(str1, str2));
//	system("pause");
//	return 0;
//}

///模拟实现strlen
//#include<stdio.h>
//#include<stdlib.h>
//size_t myStrlen(const char* str){
//	if (str == NULL){
//		return 0;
//	}
//	size_t len = 0;
//	while (str[len]!='\0'){
//		len++;
//	}
//	return len;
//}
//int main()
//{
//	char str[] = "ABcd";
//	printf("%s\n", str);
//	printf("%d\n", myStrlen(str));
//	system("pause");
//	return 0;
//}
///模拟实现strstr
/*
#include<stdio.h>
#include<stdlib.h>

const char* myStrstr(const char* str1, const char* str2){
	if (str1==NULL||str2==NULL){
		return NULL;
	}
	const char* Ptr = str1;

	while (*Ptr == '\0'){
		const char* ptr1 = Ptr;
		const char* ptr2 = str2;
		while (*ptr1!='\0'&&
			*ptr2!='\0'&&
			*ptr1==ptr2){
			ptr1++;
			ptr2++;
		}
		if (*ptr1 == '\0'){
			return NULL;
		}
		if (*ptr2 == '\0'){
			return Ptr;
		}
		if (*ptr1 != *ptr2){
			Ptr++;
		}
	}
	return NULL;
}
int main()
{
	const char a[] = "ABCD";
	const char b[] = "BC";
	const char* c=myStrstr(a, b);
	printf("%c\n", *c);
	system("pause");
	return 0;
}
*/

///模拟实现strcpy
#include<stdio.h>
#include<stdlib.h>
char* myStrcpy(char* dest,const char* src){
	if (src == NULL||dest==NULL){
		return NULL;
	}
	char* dest1 = dest;
	while (*src != '\0'){
		*dest = *src;
		dest++;
		src++;
	}	
	*dest = '\0';
	printf("%s\n", dest1);
	return dest1;
}
int main()
{
	char str1[1024] = "ABCD";
	char*str3 = "BBBBBB";
	char str2[1024] ="";
	printf("%s", myStrcpy(str2, str3));
	system("pause");
	return 0;
}
///模拟实现strcat