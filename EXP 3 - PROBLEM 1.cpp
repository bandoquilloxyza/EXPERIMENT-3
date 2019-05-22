#include<iostream>
using namespace std;

using namespace std;
void Sort(int a[], int n) {
    int i, j, m, t;
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

int main ()
{
    int e[10], i, k;
    int n = sizeof(e)/ sizeof(e[0]);
    double ave = 0, sum = 0;
    cout << "Enter the elements of the array : ";
    for (i = 0; i < 10; i++)
    cin >> e[i];
    
    Sort(e, n);
    printf("\nSmallest to largest: ");
    for (i = 0; i < 10; i++)
        cout<< e[i] <<" ";
    for (i = 0; i < 10; i++)
    {
        sum += e[i];   
    }
    {
    	ave = sum/10;
	}
    
    
    cout << "\nTotal: " << sum;
    cout << "\nAverage: " << ave;
    return 0;
}

