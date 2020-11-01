# accountant-dilemma
# Target
Implementing a tool that is able to match the sum of Due Payments with the corresponding Bank Transfer.  

# Software Architecture:
The solution can be divided in three steps:
1.	readInputFile : reading file whose name is inserted from command line. It returns the list of Due Payments and the Bank Transfer. 
2.	searchAmount: method returning the list of Due Payments corresponding with the Bank Transfer amount. 
3.	writeFile: method that writes the list of Due Payments in the output file. 

# Solution:
The solution consists in a recursive algorithm whose scope is looking for the right number of Due Payments matching with the Bank Transfer amount. For each node the algorithm sums up the i-th due payment. If the sum is bigger than the expected one, the algorithms goes back recursively to the previous step and will continue to search for the next ith+1 due payment. The algorithm will stop its execution in two cases: 
1.	The reached sum correspond with the Bank Transfer amount. 
2.	All the possible solutions have been visited; in this case the output file will contain the string “No Solution”. 

The behaviour of the algorithm is shown graphically:
 
![alt text](https://github.com/Giuscar/accountant-dilemma/blob/main/images/algorithm.PNG)
