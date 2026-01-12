#include <iostream>
using namespace std;

int main() 
{
    int A[3][3], B[3][3], C[3][3];
    int ch;
    bool created = false;

    while (true) 
	{
        cout << "\n------ MENU ------\n";
        cout << "1. Create Matrices\n";
        cout << "2. Display Matrices\n";
        cout << "3. Addition (A+B)\n";
        cout << "4. Subtraction (A-B)\n";
        cout << "5. Multiplication (A*B)\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> ch;

        switch (ch) 
		{

            case 1: // Create
                cout << "\nEnter Matrix A (3x3):\n";
                for(int i=0;i<3;i++)
                    for(int j=0;j<3;j++)
                        cin >> A[i][j];

                cout << "\nEnter Matrix B (3x3):\n";
                for(int i=0;i<3;i++)
                    for(int j=0;j<3;j++)
                        cin >> B[i][j];

                created = true;
                cout << "\n? Matrices Created Successfully!\n";
                break;

            case 2: // Display
                if(!created)
				{
                    cout << "? First Create Matrices (Option 1)\n";
                    break;
                }
                cout << "\nMatrix A:\n";
                for(int i=0;i<3;i++)
				{
                    for(int j=0;j<3;j++) cout << A[i][j] << " ";
                    cout << endl;
                }

                cout << "\nMatrix B:\n";
                for(int i=0;i<3;i++)
				{
                    for(int j=0;j<3;j++) cout << B[i][j] << " ";
                    cout << endl;
                }
                break;

            case 3: // Addition
                if(!created)
				{
                    cout << "? First Create Matrices (Option 1)\n";
                    break;
                }
                for(int i=0;i<3;i++)
                    for(int j=0;j<3;j++)
                        C[i][j] = A[i][j] + B[i][j];

                cout << "\n? Result (A + B):\n";
                for(int i=0;i<3;i++){
                    for(int j=0;j<3;j++) cout << C[i][j] << " ";
                    cout << endl;
                }
                break;

            case 4: // Subtraction
                if(!created){
                    cout << "? First Create Matrices (Option 1)\n";
                    break;
                }
                for(int i=0;i<3;i++)
                    for(int j=0;j<3;j++)
                        C[i][j] = A[i][j] - B[i][j];

                cout << "\n? Result (A - B):\n";
                for(int i=0;i<3;i++){
                    for(int j=0;j<3;j++) cout << C[i][j] << " ";
                    cout << endl;
                }
                break;

            case 5: // Multiplication
                if(!created)
				{
                    cout << "? First Create Matrices (Option 1)\n";
                    break;
                }
                for(int i=0;i<3;i++)
				{
                    for(int j=0;j<3;j++)
					{
                        C[i][j] = 0;
                        for(int k=0;k<3;k++)
                            C[i][j] += A[i][k] * B[k][j];
                    }
                }

                cout << "\n? Result (A * B):\n";
                for(int i=0;i<3;i++){
                    for(int j=0;j<3;j++) cout << C[i][j] << " ";
                    cout << endl;
                }
                break;

            case 6: // Exit
                cout << "\n? Program Ended!\n";
                return 0;

            default:
                cout << "? Invalid Choice!\n";
        }
    }
}

