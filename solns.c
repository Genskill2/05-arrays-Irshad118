/* Enter your solutions in this file */
#include <stdio.h>
int maximum(int list[],int num) {
 int i = list[0];
 for (int j=0;j<num;j++) {
     if (list[j]>i) {
        i=list[j];
        }
   }
  return i;
 }


int min(int list[],int num) {
 int i = list[0];
 for (int j=0;j<num;j++) {
     if (list[j]<i) {
        i=list[j];
        }
   }
  return i;
 }


float average (int list[],int n) {
   int i = 0;
   for (int j=0;j<n;j++) {
        i = i+list[j];
        }
  float a = (float)i/n;
  return a;
  } 
