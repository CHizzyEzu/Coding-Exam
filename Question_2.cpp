// Revised question 2 code

// No Header files are used in this program

// Function assigns the amount of elements within the array to value
double COUNTVALUES(int array[],int size, int value) 
{

// Initialized variable
    int Howmany = 0;
    
// For loop that counts how many elements in the array and assigns the amount to value
	for (int i = 0; i < size; i++)
    {
        if (array[i] == value)
        {
            Howmany++;
        } 
    } 
			
    return Howmany; 
}		
	
