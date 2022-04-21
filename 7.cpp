// Rotate the matrix by 90 degrees
// Շրջել մատրիցը 90 աստիճանով 

#include <iostream>
void rotate_matrix(int** matrix, int size)
{   
    int i = 0, j = size - 1;
    while(j >= 0)
    {
        while(i < size)
        {
            std::cout  << matrix[i][j] << "\t";
            i++;
        }
        std::cout << std::endl;
        j--;
        i = 0;
    }
}    
void delete_matrix(int** matrix,int size)
{
	for(int i = 0; i < size; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;
	matrix = nullptr;
    return;
}
int main()
{
    int size = 0;
    std::cout << "Please enter the size of your cubic matrix : ";
    std::cin >> size;
	int** matrix = new int*[size];
	for(int i = 0; i < size; i++)
	{
		matrix[i] = new int[size];
        for(int j = 0; j < size; j++)
        {
            std::cout << "Please enter the element under index [ " << i << " ] [ " << j << " ] : ";
            std::cin >> matrix[i][j];
        }
	}
    rotate_matrix(matrix,size);
    delete_matrix(matrix,size);
}