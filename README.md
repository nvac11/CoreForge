# CoreForge

Welcome to CoreForge, a standard C library containing essential functions crafted for great performance in functional programming paradigms. 
This library will include parallel and distributed versions for each function.

&#9888;&nbsp; ## WARNING &#9888;&nbsp;
- This library is still in development; unit tests need to be completed, and the user API is not finalized yet.   

## Implemented Functions:

- **Map**: Applies a function to each element of a list. DONE
- **Reduce (Fold)**: Combines list elements using an associative function. DONE
- **Filter**: Returns a list containing elements that satisfy a given condition. DONE
- **Zip**: Combines two lists element-wise. DONE
- **Scan**: Produces a list of intermediate results during the application of a cumulative function. DONE
- **ForEach**: Applies a function to each element without returning a result. DONE
- **Any**: Checks if at least one element satisfies a condition. DONE
- **All**: Checks if all elements satisfy a condition. DONE
- **Partition**: Divides a list based on a specified condition. DONE
- **Sort**: Sorts a list according to a specified criterion. DONE
- **GroupBy**: Groups list elements according to a key.
- **Distinct**: Returns a list without duplicates. <= 
- **Take**: Returns the first elements of a list. DONE
- **Drop**: Returns a list without the first elements. DONE
- **Concat**: Concatenates multiple lists. DONE
- **ZipWithIndex**: Associates each element with its index. DONE
- **Repeat**: Creates a list by repeating an element a certain number of times. DONE
- **Generate**: Generates a list by applying a function to each index. DONE
- **Chunk**: Divides a list into chunks of a fixed size. DONE
- **Reverse**: Reverse a list. DONE

## Functions to be Implemented Soon:

- **Parallel Map**: Applies a function to each element of a list. 
- **Parallel Filter**: Returns a list containing elements that satisfy a given condition.
- **Parallel Zip**: Combines two lists element-wise. 
- **Parallel ForEach**: Applies a function to each element without returning a result. 
- **Parallel Any**: Checks if at least one element satisfies a condition.
- **Parallel All**: Checks if all elements satisfy a condition. 
- **Parallel Partition**: Divides a list based on a specified condition. 
- **Parallel Sort**: Sorts a list according to a specified criterion. 
- **Parallel GroupBy**: Groups list elements according to a key.
- **Parallel Distinct**: Returns a list without duplicates.  
- **Parallel Take**: Returns the first elements of a list. 
- **Parallel Drop**: Returns a list without the first elements. 
- **Parallel Concat**: Concatenates multiple lists. 
- **Parallel ZipWithIndex**: Associates each element with its index. 
- **Parallel Repeat**: Creates a list by repeating an element a certain number of times. 
- **Parallel Generate**: Generates a list by applying a function to each index. 
- **Parallel Chunk**: Divides a list into chunks of a fixed size. 
- **Parallel Reverse**: Reverse a list.
- **Distributed Map**: Applies a function to each element of a list. 
- **Distributed Filter**: Returns a list containing elements that satisfy a given condition.
- **Distributed Zip**: Combines two lists element-wise. 
- **Distributed ForEach**: Applies a function to each element without returning a result. 
- **Distributed Any**: Checks if at least one element satisfies a condition.
- **Distributed All**: Checks if all elements satisfy a condition. 
- **Distributed Partition**: Divides a list based on a specified condition. 
- **Distributed Sort**: Sorts a list according to a specified criterion. 
- **Distributed GroupBy**: Groups list elements according to a key.
- **Distributed Distinct**: Returns a list without duplicates.  
- **Distributed Take**: Returns the first elements of a list. 
- **Distributed Drop**: Returns a list without the first elements. 
- **Distributed Concat**: Concatenates multiple lists. 
- **Distributed ZipWithIndex**: Associates each element with its index. 
- **Distributed Repeat**: Creates a list by repeating an element a certain number of times. 
- **Distributed Generate**: Generates a list by applying a function to each index. 
- **Distributed Chunk**: Divides a list into chunks of a fixed size. 
- **Distributed Reverse**: Reverse a list.

TODO: 
```c
#include "coreforge.h"
