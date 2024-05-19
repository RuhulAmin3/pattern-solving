/******************************************************************************
                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

// 1. Square Pattern;

void squarePattern()
{
    int side;
    cout << "Enter side length: ";
    cin >> side;

    // total rows = side;
    // total columns = side;

    // outer loops for rows
    for (int row = 0; row < side; row++)
    {

        // inner loops for column;
        for (int colum = 0; colum < side; colum++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}

void hollowSquarePattern()
{
    int side;
    cout << "Enter side length: ";
    cin >> side;

    // total rows = side;
    // total columns = side;

    // outer loops for rows
    for (int row = 0; row < side; row++)
    {

        // inner loops for column;
        for (int col = 0; col < side; col++)
        {
            if ((row == 0 || row == side - 1) || (col == 0 || col == side - 1))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }
}

// 2. Rectangle Pattern;
void rectanglePattern()
{
    int width, length;

    cout << "Enter width: ";

    cin >> width;

    cout << "Enter length: ";

    cin >> length;

    // outer loop for rows;
    for (int row = 0; row < length; row++)
    {

        // inner loop for column;
        for (int column = 0; column < width; column++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}

// 3. Hollow Rectangle Pattern;

void hollowRectanglePattern()
{

    int width, length;

    cout << "Enter width: ";
    cin >> width;

    cout << "Enter length: ";
    cin >> length;

    // outer loop for rows
    for (int row = 0; row < length; row++)
    {

        // inner loop for columns
        for (int col = 0; col < width; col++)
        {
            // first and last row will print all the star
            if (row == 0 || row == length - 1)
            {
                cout << "* ";
            }
            else
            {
                // middle rows
                if (col == 0 || col == width - 1)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }

        cout << endl;
    }
};

// 4. Hollow Rectangle Pattern Alternative;

void hollowRectanglePatternAlternative()
{

    int width, length;

    cout << "Enter width: ";
    cin >> width;

    cout << "Enter length: ";
    cin >> length;

    // outer loop for rows
    for (int row = 0; row < length; row++)
    {
        // inner loop for columns
        for (int col = 0; col < width; col++)
        {
            if (row == 0 || row == length - 1 || col == 0 || col == width - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }
};

// 5. Half Pyramid Pattern;

void halfPyramidPattern()
{
    int rows = 3;
    cout << " Enter Total Rows: ";
    cin >> rows;
    // int cols = 5;
    // outer loop for rows
    for (int row = 0; row < rows; row++)
    {
        // inner loop for columns
        for (int col = 0; col < rows; col++)
        {
            if (col <= row)
            {
                cout << "* ";
            }
        }

        // Alternative

        // for(int col = 0; col < row + 1 ; col++){
        //     cout << "* ";
        // }

        cout << endl;
    }
}

// 6. Inverted Half Pyramid Pattern;

void InvertedHalfPyramidPattern()
{
    int rows;

    cout << "Enter Total Rows: ";
    cin >> rows;

    // outer loop for rows;

    for (int row = 0; row < rows; row++)
    {

        // inner loop for columns

        for (int col = 0; col < rows - row; col++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}

// 7. Hollow half Pyramid pattern;

void hollowHalfPyramidPattern()
{
    int rows = 3;
    cout << " Enter Total Rows: ";
    cin >> rows;
    // int cols = 5;
    // outer loop for rows
    for (int row = 0; row < rows; row++)
    {
        // inner loop for columns
        int totalColumns = row + 1;
        for (int col = 0; col < totalColumns; col++)
        {
            if (row == 0 || row == 1 || row == rows - 1)
            {
                cout << "* ";
            }
            else
            {
                if (col == 0 || col == totalColumns - 1)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }

        cout << endl;
    }
}

// 8. Numeric Half Pyramid pattern;

void numericHalfPyramidPattern()
{
    // outer loop for rows

    int rows;
    cout << "Enter the number: ";
    cin >> rows;
    for (int row = 0; row < rows; row++)
    {
        // inner loop for columns

        for (int col = 0; col < row + 1; col++)
        {
            cout << col + 1 << " ";
        }
        cout << endl;
    }
}

// 9. Inverted Numeric Half Pyramid pattern;

void InvertedNumericHalfPyramidPattern()
{

    // outer loop for row
    int rows;

    cout << "Enter your Number: ";

    cin >> rows;

    for (int row = rows; row > 0; row--)
    {

        // Inner loop for columns
        for (int col = 0; col < row; col++)
        {
            cout << col + 1 << " ";
        }

        cout << endl;
    }
}

// 10. Full Pyramid pattern;

void fullPyramidPattern()
{

    int rows;
    cout << "Enter steps number: ";
    cin >> rows;
    // outer loop for rows;
    for (int row = 0; row < rows; row++)
    {

        // Inner loops for columns

        // Spaces
        for (int col = 0; col < rows - row - 1; col++)
        {

            cout << " ";
        }

        // stars
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}

// 11. Inverted Full Pyramid pattern;

void invertedFullPyramidPattern()
{

    int rows;
    cout << "Enter steps number: ";
    cin >> rows;
    // outer loop for rows;
    for (int row = 0; row < rows; row++)
    {

        // Inner loops for columns

        // Spaces
        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }

        // stars
        for (int col = 0; col < rows - row; col++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}

// 12. Hollow Full Pyramid pattern;

void hollowFullPyramidPattern()
{

    int rows;
    cout << "Enter steps number: ";
    cin >> rows;

    // outer loop for rows;
    for (int row = 0; row < rows; row++)
    {

        // Inner loops for columns

        // Spaces
        for (int col = 0; col < rows - row - 1; col++)
        {

            cout << " ";
        };

        // stars
        for (int col = 0; col < row + 1; col++)
        {

            if (row == 0 || row == rows - 1 || col == 0 || col == row)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }
}

// 13. Dimond Pyramid;

// 14. Hollow Dimond Pyramid;

// 16. Hollow Mixed Pyramid;

void hllowMixedPyramid()
{
    int rows;
    cout << "Enter the rows: ";

    cin >> rows;

    // PART - I
    for (int row = 0; row < rows; row++)
    {
        // PART - I
        // Inner loop for columns
        // I. Stars
        for (int col = 0; col < rows - row; col++)
        {
            cout << "* ";
        }

        // II. Spaces
        for (int col = 0; col < 2 * row + 1; col++)
        {
            cout << "  ";
        }

        // III. Stars
        for (int col = 0; col < rows - row; col++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    // PART - II
    for (int row = 0; row < rows; row++)
    {
        // Inner loop for columns
        // I. Stars
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }

        // II. Spaces
        for (int col = 0; col < 2 * (rows - row) - 1; col++)
        {
            cout << "  ";
        }

        // III. Stars
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}

// 17. Fancy 12 Pattern;

void fancy12Pattern()
{
    int rows;
    cout << "Enter the rows: ";
    cin >> rows;
    for (int row = 0; row < rows; row++)
    {

        for (int col = 0; col < 2 * row + 1; col++)
        {
            if (row == 0)
            {
                cout << row + 1;
            }
            else
            {
                if (col % 2 != 0)
                {
                    cout << " * ";
                }
                else
                {
                    cout << row + 1;
                }
            }
        }

        cout << endl;
    }
}

// 18. half Numeric Pyramid

void halfNumericPyramid()
{
    int rows;
    cout << "Enter the rows: ";
    cin >> rows;

    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << col + 1 << " ";
        }

        cout << endl;
    }
}

// 19. Hollow Half Numeric Pyramid
void hollowHalfNumericPyramid()
{
    int rows;
    cout << "Enter the rows: ";
    cin >> rows;

    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            if (row == rows - 1 || col == 0 || col == row)
            {
                cout << col + 1 << " ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }
}

// 20. Inverted Hollow Half Numeric Pyramid
void invertedHollowHalfNumericPyramid()
{
    int rows;
    cout << "Enter the rows: ";
    cin >> rows;

    for (int row = 0; row < rows; row++)
    {

        for (int col = row + 1; col <= rows; col++)
        {
            if (row == 0 || row == rows - 1 || col == rows || col == row + 1)
            {
                cout << col;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

// 21. Numeric Palindrome Equilateral Pyramid

void numericPalindromeEquilateralPyramidPattern()
{
    int rows;
    int k;
    cout << "Enter the rows: ";
    cin >> rows;
    for (int row = 0; row < rows; row++)
    {

        // I. Spaces
        for (int col = 0; col < rows - row - 1; col++)
        {
            cout << "  ";
        }

        // II. Numbers
        for (int col = 0; col < 2 * row + 1; col++)
        {
            if (col < row + 1)
            {
                cout << col + 1 << " ";
                k = col;
            }
            else
            {
                cout << k << " ";
                k--;
            }
        }

        cout << endl;
    }
}

// 22. Solid Half Diamond

void solidHalfDiamondPattern()
{
    int n;
    cout << "Enter the rows: ";
    cin >> n;

    for (int row = 0; row < 2 * n - 1; row++)
    {

        int condition;
        if (row < n)
        {
            condition = row;
        }
        else
        {
            condition = n - (row % n) - 2;
        }

        for (int col = 0; col <= condition; col++)
        {
            // if(row == 0 || row == 2*n - 2 || col == 0 || col == condition){
            cout << "* ";
            //}else{
            //    cout << "  ";
            //}
        }

        cout << endl;
    }
}

// 23. Fancy Pattern
void fancyPattern()
{
    int rows;
    cout << "Enter the rows: ";
    cin >> rows;
    if (rows > 9)
    {
        cout << " Please Enter the value between 1 to 9";
    }
    else
    {
        for (int row = 0; row < rows; row++)
        {
            int start_num_index = 8 - row;
            int num = row + 1;
            int num_count = num;

            for (int j = 0; j < 17; j++)
            {
                if (j == start_num_index && num_count > 0)
                {
                    cout << num;
                    start_num_index += 2;
                    num_count--;
                }
                else
                {
                    cout << "*";
                }
            }
            cout << endl;
        }
    }
}
// 24. Numeric Half Diamond Pattern

void numericHalfDiamondPattern()
{

    int rows;
    int k = 1;
    cout << "Enter the numbers: ";
    cin >> rows;

    for (int row = 0; row < rows; row++)
    {
        //   top phase
        for (int col = 0; col < row + 1; col++)
        {
            if (row == 0 || col == row)
            {
                cout << k << " ";
            }
            else
            {
                cout << k << "*";
            }
            k++;
        }
        cout << endl;
    }

    int start = k;
    // bottom phase
    for (int row = rows; row > 0; row--)
    {
        for (int col = 0; col < row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{

    squarePattern();

    rectanglePattern();

    hollowRectanglePattern();

    hollowRectanglePatternAlternative();

    hollowSquarePattern();

    halfPyramidPattern();

    InvertedHalfPyramidPattern();

    hollowHalfPyramidPattern();

    numericHalfPyramidPattern();

    InvertedNumericHalfPyramidPattern();

    fullPyramidPattern();

    hollowFullPyramidPattern();

    hllowMixedPyramid();

    fancy12Pattern();

    halfNumericPyramid();

    hollowHalfNumericPyramid();

    invertedHollowHalfNumericPyramid();

    numericPalindromeEquilateralPyramidPattern();

    solidHalfDiamondPattern();

    fancyPattern();

    numericHalfDiamondPattern();

    return 0;
}
