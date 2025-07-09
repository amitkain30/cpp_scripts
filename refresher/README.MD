# Information

Some information about the scripts: 

1. *struct_by_ref*: A script for passing C++ structs by reference (*&*)

2. *matr_bas_opers*: Performing basic matrix operations (Add, Sub, Mul, Div)


> [!WARNING]


1. *matr_bas_opers* would go into an infinite loop if the user enters a wrong character. This is because the *cin* buffer is not cleared when going into the iteration of the loop.  
