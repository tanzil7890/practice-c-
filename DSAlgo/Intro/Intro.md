## What are DS?
> A program is a set of instructions which performs operations on data. So without data, instructions cannot be performed. So when a program is dealing with the data, how it will organize the data in the main memory, that's what its data structures. The way you organize the data in the mean memory during execution time of a program that is data structure


    CPU
    |
    Memory
    /    \
    Data   Program Code  


- Array, Matrices, LinkedList -> Physical DS : <mark>Define to arrangement of the data<marks>
- Stack, Queues, Trees, Graph, Hashing -> Logical DS : <mark style="background-color: white">Define to utilization of the data<marks>


> for(int x : temp) { sum += x; } is defined as being equivalent to:

`
for ( auto it = begin(temp); it != end(temp); ++it ) 
{ 
    int x = *it;
    sum += x;
}
`

For a vector, begin(temp) resolves to temp.begin(), and auto resolves to vector::iterator. The new syntax is easier to read and write, obviously.

[Full Bright Scholarship](https://www.fully-fundedscholarships.com)
