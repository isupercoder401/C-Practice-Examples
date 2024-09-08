#include <iostream>
using namespace std;

class Matrix
{
	public:
    int a[3][3];
    int b[3][3];
    int c[3][3];
    int i,j,k;
public:
    void Mult();
    void InputMatrix();
    void OutputMatrix();
};

int main()// size change possible ??
{
    Matrix mat;
    mat.InputMatrix();
    mat.Mult();
    mat.OutputMatrix();

    return 0;
}



void Matrix::InputMatrix()
{
    cout << "Enter the values for the first matrix";
    cout << "\n Matrix 1, Row 1     ";
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            cin >> a[i][j];//just inputs
        }
    }
    cout << "Enter the values for the second matrix";
    for (i=0; i<3; i++)//always remember to take input Talha
    {
        for (j=0; j<3; j++)
        {
            cin >> b[i][j];
        }
    }
}
// you can also do function overloading
void Matrix::Mult()
{
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            c[i][j]=0;
            for (k=0; k<3; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void Matrix::OutputMatrix()
{
    cout << "The Resultant Matrix is: \n";
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            cout << c[i][j];
        }
        cout << endl;
    }
}


