(Q1) What are the kinds of problems we see in the nature? (iteration, recursion,backtracking)

->There are many phenomena in nature which can be directly related to computational techniques like iteration, recursion, and backtracking. There are many processes in nature which can be best understood if seen with a perspective aligned with the above-mentioned techniques.

ITERATION:
(A) Seasons on the planet follow an iterative cycle. That is, the cycle or sequence of seasons occurring on Earth never changes and keeps on going.
(B) HEARTBEAT: Our heart keeps beating and pumps blood without fail. It seems to follow an iterative cycle and maintains the same pattern of movement in every cycle (beat).

RECURSION:
Phenomena like cell division or branch growth can be seen in line with recursion. That is, the successive generation depends on the previous generation (previous results determine successive results).
Fibonacci series is also a great example of recursion. The forthcoming number is fully dependent on the previous two numbers, and those previous numbers were dependent on prior results.

BACKTRACKING:
Backtracking is such a technique which is being used by humans as well as the animal kingdom. Humans often lost in forests use the backtracking technique in order to navigate through.
Insects like rats use backtracking in order to move in underground holes.
Backtracking is the most prominent technique to solve mazes and similar questions.

(Q2) What is space and time efficiency? Why are they important? Explain the different class of problems and orders of growth

->Space and Time efficiency are concepts used to determine how efficient an algorithm is or how an algorithm uses/manages resources like time and space (memory) to solve a problem.

TIME EFFICIENCY:
It often refers to how quickly an algorithm s and solves a problem. This is often measured in terms of input size n or the number of basic count operations being executed.
Time efficiency mainly has three cases:

Best-case: The fastest time an algorithm takes to complete for some specific input.
Worst-case: The slowest time it takes for the worst input.
Average-case: The time it will take for an average input or an average case.
DIFFERENT ORDERS OF GROWTH
O(1):CONSTANT TIME, it means an algorithm computes the result in constant time irrespective of the input size. Ex:computing sum of two numbers
O(log n) - Logarithmic Time:
The time taken grows slowly as the input size increases.
Ex: Binary search.
O(n) - Linear Time:
The total time grows proportionally with the input size.
Ex: Traversing an array or searching for an element in array
O(n log n) - Linearithmic Time:
A combination of linear and logarithmic growth.
Ex: Sorting algorithms like merge and quick sort
O(n²) - Quadratic Time:
The time grows proportionally to the square of the input size.
Ex: Basic operation occurs N times, and for each time, the basic operation pccurs for N times, or comparing all the possible pairs of an array.
O(2ⁿ) - Exponential Time:
The time doubles with each additional input element.
O(n!) - Factorial Time:
The time grows extremely fast, with factorial growth based on input size.


SPACE EFFICIENCY:
It refers to the extra space an algorithm requires in order to compute the result.

IMPORTANCE:
Evaluating space and time efficiency for an algorithm is a very crucial step while developing an algorithm, as these are the factors that determine whether the algorithm is efficient enough or not.
They are the factors that define how good an algorithm is and whether it can be optimized further or not.

(Q3) Take away from different design principles from chapter 2 (can use the notes
provided)

->We learned many design principles throughout the course, which helped us develop a thinking process on how different algorithms came into existence and which principles they are based on.

A few examples are:

Pattern Recognition:
Used this while learning string search algorithms.

Brave and Cautious Traversal:
Graph traversal methods like DFS and BFS are based on these principles.

Pruning:
Used this principle while solving problems involving state-space trees, e.g., in problems like the N-Queens problem and Subset Sum problem.

Lazy Propagation:
Used in many instances where we didn’t update a value unless it was necessary or the value was to be further used somewhere.

Sliding Window:
Used this principle in BFSS (Brute Force String Search).

Level Order Traversal:
Used this principle to populate trees.

Hierarchical Data:
Learned deeply about it while learning trees and how hierarchical data can be stored in many ways.

Edge Relaxation:
Used this principle while learning algorithms like Dijkstra’s and Prim’s, where we relaxed an edge and included it as a part of the solution.

Balancing and Rotations:
Used this principle in AVL trees and Red-Black trees in order to reduce the skewness of the trees and make them balanced.

Kleene Closure:
Used this principle in algorithms like Dijkstra’s, Floyd’s, etc., to determine if a path exists between A and C if there is a path between A and B and B and C.

Pre-computing:
Used this principle to solve point queries in arrays, where we precomputed results which helped to produce the result for point queries faster.

Parental Dominance:
Used this principle to create heap trees and develop heap sort.

Prefix-Suffix:
Used them extensively in string search algorithms to determine the shift value in case of a mismatch.

Partitioning:
Used this principle of partitioning or dividing the input set in sorting algorithms like Merge Sort and Quick Sort.

Bit Manipulation:
Employed them while creating bit-trees or Fenwick trees.

Shortest Path Trees:
Learned algorithms like Dijkstra’s and Prim’s which give the single-source shortest path trees.


(Q4) The hierarchical data and how different tree data structures solve and optimize over
the problem scenarios (tree, bst, avl, 2-3, red-black, heap, trie)

->Trees are prominent data structures that are used to store hierarchical data. We first started with simple trees without giving priority to elements.
Then we started with 2-3 trees where a lower element is written on the left and a higher element on the right, and the middle element is pushed upwards. This made sure that a higher element was present at a higher level.
Then, to have only two elements at a node, we introduced binary search to trees and created binary search trees where a lower element was put on the left side of the parent and a higher element on the right side. But this resulted in highly imbalanced or skewed trees.
To reduce this imbalance in the trees, we came up with AVL trees which used balancing and rotations to reduce imbalance and skewness in the trees.
To reduce the number of rotations, we introduced Red-Black Trees, which reduced the number of rotations and resulted in balanced trees.

Heap is also a type of tree which follows a tree-like structure and parental dominance, that is, the parent must be dominant.

Trie is a data structure which is used to store dictionaries, i.e., it has 26 pointers for 26 English letters emerging from all 26 letters at each level, and an index is provided to each meaningful word in the dictionary. TRIE's advantage is very fast retrieval of data, although it consumes a lot of memory; hence, it's an example of a space-time tradeoff.


(Q5) The need of array query algorithms and their implications. Their applications and
principles need to be discussed

->For the array queries like sum of elements from index A to index B, array query algorithms prove very useful. 
They help in computing the result faster than the traditional result-computation by array traversal.
BIT-index trees or FENWICK trees are an example of such algorithms which use the principle of PRE-COMPUTING to reduce the time of point or range queries on arrays. On the arrays of size 10^9, these pre-computations prove out to be very healpful in reducing execution time.

(Q6) Differentiate between tree and graphs and their traversals. The applications of each.

Trees: Trees are data structures that follow the PARENT-CHILD pattern. The most prominent tree structures are binary trees, where one parent has at most two child nodes.
The root is always specified.
Examples: Red-Black Tree, Binary Search Tree.

Graphs: Graphs are somewhat similar to trees, but they don’t follow any parent-child pattern. Instead, they have cycles among the nodes; in other words, they have back-links which connect nodes at lower levels to nodes of higher levels or the same level.
The root is not specified.
Examples: Directed Graph, Weighted Graph.

The key difference between trees and graphs is that graphs contain cycles/backlinks, whereas trees do not. Acyclic graphs are trees.

TREE TRAVERSAL
(1) Pre-order traversal: The parent node comes first, then the left child, and then the right. This traversal is called pre-order traversal.
(2) In-order traversal: The left child comes first, then the parent node, and then the right child.
The in-order traversal of a Binary Index Tree gives the sorted array.
(3) Post-order traversal: The left child comes first, then the right child, and then the parent.

GRAPH TRAVERSAL
(1) Depth First Search (DFS): We keep traversing the successive nodes and keep going deeper into the branch until we reach a dead end. Then, we come back and explore other branches in a similar way (BRAVE TRAVERSAL).
(2) Breadth First Search (BFS): We explore the nodes present at the same level from the source and then go to one child and explore the nodes present at the same level from that node (CAUTIOUS TRAVERSAL).

Applications
(1) Trees are used to store hierarchical data.
(2) Heap sort emerges from the heap data structure, which is also a type of tree.
(3) Graphs are used to map relationships.
(4) Graphs are used by Dijkstra’s algorithm to find the shortest path and by Kruskal’s algorithm to give the minimum spanning tree.
(5) Graphs are used to model networks, including internet routing and social networks.




(Q7) Deliberate on sorting and searching algorithms, the technique behind each and they
connect to real world


->Bubble Sort: Bubble sort is nothing but a traditional compare-and-swap sort, which is also called a brute force approach. It has an efficiency of N^2.

Selection Sort: Selection sort is an improvement over bubble sort as we find the minimum element in the array and replace it with elements at the beginning. The number of swaps reduces, but the basic operation count remains the same.

Insertion Sort: Insertion sort got its inspiration from the typical gambler's way of sorting cards in their hands. A new element is compared from the right side and uses the copy method for swapping.

All insertion sort, selection sort, and bubble sort have an efficiency of N^2

Merge Sort: Merge sort works on the principle of divide and conquer. We keep on dividing the input array into two parts until only one element remains, and then sort them and merge them recursively.

Quick Sort: It also uses the divide-and-conquer method, but unlike merge sort, quick sort doesn’t divide from the middle. Instead, it computes a partition index and repeats the process for the left-side elements and right-side elements of the partition.

Heap Sort: Heap sort uses the Heap data structure to sort the elements. It first heapifies the array elements, deletes the root (minimum element), heapifies the tree again, and repeats the process until all elements are deleted.

String Search Algorithms

Boyer-Moore Algorithm: It makes use of the Bad Symbol Shift Table and Good Suffix Shift Table to determine the shift steps in case of a mismatch of characters.

Knuth-Morris-Pratt Algorithm: It makes use of the Pi Table to determine the number of shift steps. The Pi Table is made based on the number of matched prefixes and suffixes for K matched characters.

Rabin-Karp Algorithm: It's an improvement over brute force string search. It uses variants of hashing to make computation efficient. First, it compares the hash value. If the hash value matches, then it compares the pattern with that string using BFSS (Brute Force String Search). If the hash value doesn’t match, it shifts by one step and computes the hash value again.


(Q8) Discuss the importance of graph algorithms with respect to spanning trees and
shortest paths

->Graph algorithms play a crucial role in solving problems related to networks, relationships, and links. Two major areas where graph algorithms are applicable are spanning trees and shortest paths.

Spanning Tree : A spanning tree is basically an acyclic tree which can connect all the vertices of a graph without forming backlinks or cycles.
A minimum spanning tree is a tree which can minimize the weight of the final tree, Vice-Versa for Max spanning tree.
Kruskal's and Prim's are two important Algorithms to generate min/max spamming tree
Kruskal's sorts the edges and uses union-find to avoid link formation whereas Prim's Algorithm works on edge-relaxation principle.

Shortest Paths : The shortest path computation is very very important in the scope of graphs. It's a real life issues aswell.
Shortest path refers to the shortest path between one node to another in a weighted-directed graph.
Dijkstras Algorithm is one of the most coomonly used algorithm which is used to find the shortest path. It is a single source shortest path algorithm and employs edge relaxation principle.




(Q9) Discuss about the different studied algorithm design techniques.

->Edge Relaxation Edge : It refers to iteratively finding the lowest weight edge and freeezinf it and making it a part of solution. Dijkstra's and Prim's use this.

Greedy Technique : Always looking for a specific trait while solving a problem. Always taking the edge with minimum weight while computing minimum spanning tree.Kruskal's use this.

Transitive Closure : Using Transitive property while solving a problem. Warshall's  and Dijkstra's Algorithm use this

Brute Force : The intuitive way of solving a problem. simple compare in swap in bubble sort

Divide and Conquer : Dividing the problem into smaller parts and then solving it. Merge and Quick sort use this technique

Space and Time trade-off : Compromising on either of the efficiencies to get a better performance in the other field. Trie is an example of it.






