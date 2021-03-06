// if an element in matrix is equal to zero,set all the row and column with zeroes
// եթե մատրիցի էլեմենտը հավասար է զրոյի , շարքի և տողի բոլոր էլեմենտերին վերագրել զրո

#include <iostream>
void setMatrixZeroes(int** matrix, int row, int col)
{
   for(int i = 0; i < row; ++i)
	{
		for(int j = 0; j < col; ++j)
		{
			if(matrix[i][j] == 0)
			{
               		 for(int a = 0, b = 0; a < row, b < col; a++, b++)
                	 {
                    		matrix[a][j] = 0;
                    		matrix[i][b] = 0;
				
                	 }
			   goto chlp;
			}
				
		}
    }
    chlp : for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            std::cout << matrix[i][j] << "\t";
        }
        std::cout << std::endl;
    }
	
}
void delete_matrix(int** matrix,int row,int col)
{
	for(int i = 0; i < row * col; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;
	matrix = nullptr;
    return;
}
int main()
{
    int row = 0,col = 0;
    std::cout << "Please enter the rows of your matrix : " ;
    std::cin >> row;
    std::cout << "Please enter the columns of your matrix : ";
    std::cin >> col;
    int** matrix = new int*[row * col];
    for(int i = 0; i < row * col; i++)
    {
        matrix[i] = new int[row * col];
    }
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            std::cout << "Please enter the element under index [ " << i << " ] [ " << j << " ] ";
            std::cin >> matrix[i][j];
        }
    }
    setMatrixZeroes(matrix,row,col);
    delete_matrix(matrix,row,col);
}