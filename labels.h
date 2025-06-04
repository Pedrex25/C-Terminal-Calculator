char AVAILABLE_OPERATIONS[] = "Available operations:\n\t1-Summation\n\t2-Subtration\n\t3-Multiplication\n\t4-Division\n";
char ASK_OPERATION[] = "\nSelect an operation: ";
char ASK_FIRST_VALUE[] = "\nType the value of the first value: ";
char ASK_SECOND_VALUE[] = "\nType the value of the second value: ";

// Errors
char ERROR_DIVIDE_BY_ZERO[] = "\nERROR: Cannot divide by zero.";
char ERROR_INPUT_NOT_NUMBER[] = "\nERROR: Input must be a number.";
char ERROR_OPERATION_DOES_NOT_EXIST[] = "\nERROR: The choosen operation does not exist.";

enum Operation
{
    SUMMATION = 1,
    SUBTRACTION = 2,
    MULTIPLICATION = 3,
    DIVISION = 4
};