#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
//MENDLEKARASIKAN ARRAY DANVARIABEL
int a[2] [2], b[2][2], C[2][2];

cout << "Masukan Nilai A11 : ";
cin>> A[0][0];
cout << "Masukan Nilai A12 : ";
cin>>A[0][1];
cout << "Masukan Nilai A21 : ";
cin>>A[1][0];
cout << "Masukan Nilai A22 : ";
cin>>A[1][1];

cout << "Masukan Nilai B11 : ";
cin>>B[0][0];
cout << "Masukan Nilai B12 : ";
cin>>B[0][1];
cout << "Masukan Nilai B21 : ";
cin>>B[1][0];
cout << "Masukan Nilai B22 : ";
cin>>B[1][1];

//menghitung nilai array
c[0][0] = (A[0][0] * B[0][0]) + (A[0][1] * B[1][0];
c[0][1] = (A[0][0] * B[0][1]) + (A[0][1] * B[1][1];
c[1][0] = (A[1][0] * B[0][1]) + (A[1][1] * B[1][0])
;c[1][1] = (A[1][0] * B[0][1]) + (A[1][1] * B[1][1]);

cout << "NIlai Matrika C adalah: " << endl;
cout << " [ " <<c[0][0]<<" " <<c[0][1]<<" ]"<< endl;
cout << " [ "<<C[1][0]<< " "<<C[1][1]<<"]"<< endl;

    system ("PAUSE");
    return 0;
}
