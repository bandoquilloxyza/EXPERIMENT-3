#include<iostream> 
using namespace std; 
void rev(char a[], char n) {
   char i, j, m, t;
   for (i = 0; i < n - 1; i++) {
      m = i;
      for (j = i + 1; j < n; j++)
         if (a[j] < a[m])
            m = j;
      t = a[i];
      a[i] = a[m];
      a[m] = t;
   }
}
int main() {
   char a[7], i;
   char n = sizeof(a)/ sizeof(a[0]);
   cout << "Enter the elements of the array : ";
   for (i = 0; i < 7; i++)
   cin >> a[i];
   
   rev(a, n);
   cout << "\nSorted array is: \n";
   for (i = 0; i < n; i++)
   cout<< a[i] <<" ";
   return 0;
}
