////
//// Created by JIAN HE on 2022-02-28.
////
//
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main()
//{
//    char input[] = "Chocolate-Chip Cookie - 30";
//
////  The strstr() function finds the first occurrence of the substring
////  needle in the string haystack.  The terminating null bytes ('\0')
////       are not compared
//
//    char *sep = strstr(input," - ");
//    int len = sep - input;
//
//    printf("%d\n",len);
//    printf("%s\n",sep);
//    /* refer to the len which is the first part
//    the first s refer to the input. the frist directly print from char point. But add more 3 position.*/
//    printf("Item: '%.*s'\nprice: '%s'\n",len,input, sep+3);
//}